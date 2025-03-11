from flask import Flask, render_template, request
from z3 import *

app = Flask(__name__)

def solve_sudoku(grid, n):
    X = [[Int(f"x_{i}_{j}") for j in range(n)] for i in range(n)]
    s = Solver()

    for i in range(n):
        for j in range(n):
            s.add(X[i][j] >= 1, X[i][j] <= n)

    for i in range(n):
        s.add(Distinct(X[i]))

    for j in range(n):
        s.add(Distinct([X[i][j] for i in range(n)]))

    sqrt_n = int(n ** 0.5)
    for box_i in range(0, n, sqrt_n):
        for box_j in range(0, n, sqrt_n):
            cells = [
                X[i][j]
                for i in range(box_i, box_i + sqrt_n)
                for j in range(box_j, box_j + sqrt_n)
            ]
            s.add(Distinct(cells))

    for i in range(n):
        for j in range(n):
            if grid[i][j] != 0:
                s.add(X[i][j] == grid[i][j])

    if s.check() == sat:
        m = s.model()
        return [[m.evaluate(X[i][j]).as_long() for j in range(n)] for i in range(n)]
    else:
        return None

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/solve', methods=['POST'])
def solve():
    n = 9
    grid = []
    for i in range(n):
        row = []
        for j in range(n):
            cell_value = request.form.get(f"cell_{i}_{j}")
            row.append(int(cell_value) if cell_value and cell_value.isdigit() else 0)
        grid.append(row)

    solution = solve_sudoku(grid, n)

    return render_template('solution.html', solution=solution, grid=grid)

if __name__ == '__main__':
    app.run(debug=True)