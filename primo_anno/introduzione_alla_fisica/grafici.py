# grafico spostamento in funzione del tempo
# grafico velocità in funzione del tempo
# grafico accelerazione in funzione del tempo

import matplotlib.pyplot as plt
import numpy as np

"""
# dati stessa scala
x = np.sin(t) + 0.03* (t**3)
v = np.cos(t) + 0.09* (t**2)
a = -np.sin(t) + 0.18*t

# grafico spostamento in funzione del tempo
plt.figure(1)
plt.plot(t, x, 'r-')
plt.xlabel('t [s]')
plt.ylabel('x [m]')
plt.title('Spostamento in funzione del tempo')

# grafico velocità in funzione del tempo
plt.figure(2)
plt.plot(t, v, 'g-')
plt.xlabel('t [s]')
plt.ylabel('v [m/s]')
plt.title('Velocità in funzione del tempo')

# grafico accelerazione in funzione del tempo
plt.figure(3)
plt.plot(t, a*np.ones(len(t)), 'b-')
plt.xlabel('t [s]')
plt.ylabel('a [m/s^2]')
plt.title('Accelerazione in funzione del tempo')
"""

t = np.linspace(0, 10, 100)
x = np.sin(t) + 0.03* (t**3)
v = np.cos(t) + 0.09* (t**2)
a = -np.sin(t) + 0.18*t

fig, axs = plt.subplots(2, 2)

axs[0, 0].grid()
axs[0, 0].plot(t, x)
axs[0, 0].set(xlim=(0, 10), ylim=(-1, 9))
axs[0, 0].set_aspect('equal', 'box')
axs[0, 0].set_title('Spostamento in funzione del tempo', fontsize=10)

axs[0, 1].grid()
axs[0, 1].plot(t, v, 'g')
axs[0, 1].set(xlim=(0, 10), ylim=(-1, 9))
axs[0, 1].set_aspect('equal', 'box')
axs[0, 1].set_title('Velocità in funzione del tempo', fontsize=10)

axs[1, 0].grid()
axs[1, 0].plot(t, a, 'r')
axs[1, 0].set(xlim=(0, 10), ylim=(-1, 9))
axs[1, 0].set_aspect('equal', 'box')
axs[1, 0].set_title('Accelerazione in funzione del tempo', fontsize=10)

axs[1, 1].grid()
axs[1, 1].plot(t, x, 'b', label='x')
axs[1, 1].plot(t, v, 'g', label='v')
axs[1, 1].plot(t, a, 'r', label='a')
axs[1, 1].set(xlim=(0, 10), ylim=(-1, 9))
axs[1, 1].set_aspect('equal', 'box')
axs[1, 1].set_title('Spostamento, velocità e accelerazione in funzione del tempo', fontsize=10)

fig.tight_layout()
plt.show()