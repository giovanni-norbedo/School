# MineSweeper3D

from ursina import *

from functools import partial
import math


app = Ursina()

dim  = 8
side = 0.5

difficulty = {
    'easy':    0.10,
    'medium':  0.15,
    'hard':    0.20,
    'extreme': 0.30
}

mines = difficulty['easy'] * dim * dim * dim


center = (dim - 1) * side / 2

print(f'center: {center}')

pivot = Entity(
    position=(center,center,center),
)

camera.parent = pivot
camera.position = (-10, 10, -10) 
camera.look_at(pivot)


cubes = []

for x in range(dim):
    for y in range(dim):
        for z in range(dim):
            cube = Entity(
                id=f'{x}_{y}_{z}',
                model='cube', 
                color=color.red,
                scale=(side, side, side),
                position=(
                    x*side, 
                    y*side, 
                    z*side
                ),
                parent=scene,
                on_click=partial(print, f'clicked {x} {y} {z}'),
            )
            
            cubes.append(cube)


cubes[0].color = color.white

rotation_speed = 60
zoom_speed = 0.2
min_zoom = 1
max_zoom = 50

def update():
    """Aggiorna la rotazione del pivot in base all'input del mouse."""
    # if held_keys['left mouse']:  # Trascina con tasto destro
    #    pivot.rotation_y += mouse.velocity[0] * rotation_speed
    #    pivot.rotation_x -= mouse.velocity[1] * rotation_speed
    if held_keys['w']:
        camera.position += (0, time.dt, 0)
    if held_keys['s']:
        camera.position -= (0, time.dt, 0) 


def input(key):
    """Controlla lo zoom con la rotellina del mouse."""
    if key == 'scroll up':
        camera.position += (0, 0, -zoom_speed)
    if key == 'scroll down':
        camera.position += (0, 0, zoom_speed)
    # Limita lo zoom tra min_zoom e max_zoom
    camera.position = camera.position.normalized() * clamp(camera.position.length(), min_zoom, max_zoom)

app.run()