from z3 import *

def solve_sudoku(grid, n):
    # Creazione della matrice di variabili Z3
    X = [[Int(f"x_{i}_{j}") for j in range(n)] for i in range(n)]

    # Solver
    s = Solver()

    # Vincolo: ogni cella deve avere un valore tra 1 e n
    for i in range(n):
        for j in range(n):
            s.add(X[i][j] >= 1, X[i][j] <= n)

    # Vincolo: numeri distinti in ogni riga
    for i in range(n):
        s.add(Distinct(X[i]))

    # Vincolo: numeri distinti in ogni colonna
    for j in range(n):
        s.add(Distinct([X[i][j] for i in range(n)]))

    # Vincolo: numeri distinti in ogni sotto-griglia
    sqrt_n = int(n ** 0.5)
    for box_i in range(0, n, sqrt_n):
        for box_j in range(0, n, sqrt_n):
            cells = [
                X[i][j]
                for i in range(box_i, box_i + sqrt_n)
                for j in range(box_j, box_j + sqrt_n)
            ]
            s.add(Distinct(cells))

    # Vincolo: valori predefiniti (puzzle iniziale)
    for i in range(n):
        for j in range(n):
            if grid[i][j] != 0:  # 0 indica una cella vuota
                s.add(X[i][j] == grid[i][j])

    # Risoluzione del Sudoku
    if s.check() == sat:
        m = s.model()
        solved_grid = [[m.evaluate(X[i][j]).as_long() for j in range(n)] for i in range(n)]
        return solved_grid
    else:
        return None

# Esempio: Sudoku 9x9
grid_9x9 = [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
]

n = 9  # Dimensione del Sudoku
solution = solve_sudoku(grid_9x9, n)

if solution:
    for row in solution:
        print(row)
else:
    print("Nessuna soluzione trovata.")

