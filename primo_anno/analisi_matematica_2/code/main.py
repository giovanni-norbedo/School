"""
Consideriamo la serie  

$$1 + \dfrac{1}{2} + \dfrac{1}{3} + \dfrac{1}{4} + \ldots + \dfrac{1}{n} + \ldots = \sum_{n = 1}^{+ \infty} \dfrac{1}{n}$$

$\dfrac{1}{1 + x}$

grafico:
"""

import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-1, 1, 100)
y = 1 / (1 + x)

plt.plot(x, y)

# plot la serie

n = 5
x = np.linspace(1, n, n)
y = 1 / x
plt.plot(x, y, 'o')

plt.show()
