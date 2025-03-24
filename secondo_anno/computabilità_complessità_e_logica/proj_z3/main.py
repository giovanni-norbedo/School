import sys
import math
from random import randrange, uniform
from functools import partial

from ursina import *


DEBUG = True


app = Ursina()


## Variabili globali

dim  = 8
side = 0.5
gap  = 0.08

difficulty = {
    'easy':    0.10,
    'medium':  0.15,
    'hard':    0.20,
    'extreme': 0.30
}

mines = difficulty['easy'] * dim * dim * dim

center = (dim - 1) * side / 2

rotation_speed = 50
zoom_speed = 1
min_zoom = 1
max_zoom = 50

mode = 0  # 0: reveal, 1: flag

## Funzioni e classi


class Cube(Entity):
    def __init__(self, position, id, **kwargs):
        super().__init__(
            model='cube',
            color=color.random_color(),
            scale=(side - gap, side - gap, side - gap),
            position=position,
            parent=pivot,
            collider='box',
            is_mine=False,
            revealed=False,
            **kwargs
        )
        self.id = id
    
    def count_adjacent_mines(self, x, y, z):
        """Conta il numero di mine nei blocchi adiacenti"""
        count = 0
        
        for i in range(x - 1, x + 2):
            for j in range(y - 1, y + 2):
                for k in range(z - 1, z + 2):
                    if (i, j, k) == (x, y, z):
                        continue

                    cube = cubes_dict.get((i, j, k))
                    if cube and cube.is_mine:
                        count += 1
        
        return count
        
    def reveal(self):
        if self.revealed:
            return
        
        self.revealed = True
        
        """Mostra il numero di mine adiacenti o avvia il flood fill se è 0"""
        x, y, z = map(int, self.id.split('_'))
        count = self.count_adjacent_mines(x, y, z)

        # Se ci sono mine vicine, mostra il numero e termina
        if count > 0:
            Text(
                text=str(count),
                position=self.position,
                origin=(0, 0, 0),
                scale=side * 20,
                parent=pivot,
                billboard=True,
                color=color.white
            )
        else:
            flood_fill(x, y, z)

        if DEBUG:
            print(f'Clicked {self.id}, Mines around: {count}, Is mine: {self.is_mine}')
        
        destroy(self)
        
    def reduce_mine_count(self, x, y, z):
        """Riduce il contatore delle mine nei blocchi adiacenti"""
        pass

    def on_click(self):
        """Gestisce il click su un cubo"""
        if mode == 1:
            self.color = color.red
            
            x, y, z = map(int, self.id.split('_'))
            self.reduce_mine_count(x, y, z)
            
        else:
            if self.is_mine:
                print(f'Game Over! Hai cliccato su una mina: {self.id}')
                return  # Puoi aggiungere una logica di fine partita
            
            self.reveal()


def flood_fill(x, y, z):
    """Espande la rivelazione dei blocchi vicini usando Flood Fill"""
    stack = [(x, y, z)]
    visited = set()

    while stack:
        cx, cy, cz = stack.pop()

        if (cx, cy, cz) in visited:
            continue
        visited.add((cx, cy, cz))

        cube = cubes_dict.get((cx, cy, cz))
        if not cube or cube.is_mine:
            continue  # Se è una mina o non esiste, non si propaga

        # Conta le mine intorno
        count = 0
        for i in range(cx - 1, cx + 2):
            for j in range(cy - 1, cy + 2):
                for k in range(cz - 1, cz + 2):
                    if (i, j, k) == (cx, cy, cz):
                        continue

                    neighbor = cubes_dict.get((i, j, k))
                    if neighbor and neighbor.is_mine:
                        count += 1

        # Se ci sono mine, mostra il numero e non espandere
        if count > 0:
            Text(
                text=str(count),
                position=cube.position,
                scale=side * 20,
                parent=pivot,
                billboard=True
            )
        else:
            # Se il blocco è 0, continua l'espansione nei vicini
            for dx in [-1, 0, 1]:
                for dy in [-1, 0, 1]:
                    for dz in [-1, 0, 1]:
                        if dx == dy == dz == 0:
                            continue
                        nx, ny, nz = cx + dx, cy + dy, cz + dz
                        if (nx, ny, nz) not in visited and (0 <= nx < dim and 0 <= ny < dim and 0 <= nz < dim):
                            stack.append((nx, ny, nz))

        destroy(cube)


## Inizializzazione

if __name__ == '__main__':

    # Creazione del pivot e della camera

    pivot = Entity(
        position=(center,center,center),
    )

    camera.parent = pivot
    camera.position = (center, 20, center) 
    camera.look_at(pivot)
    
    
    # Creazione dei cubi

    cubes_dict = {}

    for x in range(dim):
        for y in range(dim):
            for z in range(dim):
                cube = Cube(
                    position=(x * side, y * side, z * side),
                    id=f'{x}_{y}_{z}'
                )
                cubes_dict[(x, y, z)] = cube

    # Posizionamento delle mine

    for _ in range(int(mines)):
        cube = cubes_dict.get((randrange(dim), randrange(dim), randrange(dim)))
        cube.is_mine = True
        
    
    mode_button = Button(
        text='Reveal',
        color=color.azure,
        scale=(0.2, 0.05),
        position=(-0.5, 0.4),
        parent=camera.ui
    )
    
    def toggle_mode():
        global mode
        mode = 1 - mode 
        mode_button.text = "Flag" if mode == 1 else "Reveal"
        
    mode_button.on_click = toggle_mode
    
    
    
    # Controlli della camera

    def update():
        if held_keys['w']:
            camera.position += camera.up * time.dt * 50
        if held_keys['s']:
            camera.position -= camera.up * time.dt * 50

        if held_keys['a']:
            camera.position -= camera.right * time.dt * 50
        if held_keys['d']:
            camera.position += camera.right * time.dt * 50

        if held_keys['up arrow']:
            camera.world_position += camera.forward * zoom_speed
        if held_keys['down arrow']:
            camera.world_position -= camera.forward * zoom_speed

        camera.look_at(pivot)
        
    def input(key):
        if key == 'escape':
            application.quit()
            
        if key == 'scroll up':
            camera.world_position += camera.forward * zoom_speed
        if key == 'scroll down':
            camera.world_position -= camera.forward * zoom_speed

        camera.position = camera.position.normalized() * clamp(camera.position.length(), min_zoom, max_zoom)

    app.run()