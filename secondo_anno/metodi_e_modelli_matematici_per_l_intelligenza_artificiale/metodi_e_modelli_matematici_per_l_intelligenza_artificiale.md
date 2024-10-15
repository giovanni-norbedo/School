---
title: \textbf{Metodi e Modelli Matematici per l'Intelligenza Artificiale}
author: Giovanni Norbedo
date: 2024-2025
header-includes:
    - \usepackage{fancyhdr}
    - \pagestyle{fancy}
    - \rhead{Giovanni Norbedo}
    - \cfoot{\thepage}
    - \renewcommand{\contentsname}{Indice}
    - \renewcommand{\figurename}{Figura}
geometry: margin=2cm
output: pdf_document
---

# Numeri complessi

$z^2 = -1$ ha due soluzioni: $i$ e $-i$  
$i^2 = -1$  
$z \coloneqq x + iy \quad x, y \in \mathbb{R}$  
$\mathbb{C} \coloneqq \{z = x + iy \mid x, y \in \mathbb{R}\}$  
$\mathbb{R} \subset \mathbb{C}$  
$x = \Re(z)$ parte reale di $z$  
$y = \Im(z)$ parte immaginaria di $z$  
$z = x + iy = \Re(z) + i\Im(z)$  
$z = x + iy \leftrightarrow (x, y)$ isometria tra $\mathbb{C}$ e $\mathbb{R}^2$  
$\overline{z} = x - iy$ coniugato di $z$ (simmetria rispetto all'asse reale)  
$\overline{\overline{z}} = z$  
$\overline{z + w} = \overline{z} + \overline{w}$  
$\overline{z \cdot w} = \overline{z} \cdot \overline{w}$  
$\Re(z) = \frac{z + \overline{z}}{2}$  
$\Im(z) = \frac{z - \overline{z}}{2i}$  
$\lvert z \rvert = \sqrt{z \cdot \overline{z}} = \sqrt{x^2 + y^2}\in \mathbb{R}$ modulo di $z$, rappresentabile come la norma euclidea di $(x, y) \in \mathbb{R}^2$  

## Numeri complessi in forma trigonometrica

$atan2(y, x)$ restituisce l'angolo compreso nell'intervallo $[-\pi, \pi]$ tra l'asse reale positivo e il punto $(x, y)$

$atan2(y, x) = \begin{cases} \arctan\left(\frac{y}{x}\right) & \text{se } x > 0 \\ \arctan\left(\frac{y}{x}\right) + \pi & \text{se } x < 0, y \geq 0 \\ \arctan\left(\frac{y}{x}\right) - \pi & \text{se } x < 0, y < 0 \\ \frac{\pi}{2} & \text{se } x = 0, y > 0 \\ -\frac{\pi}{2} & \text{se } x = 0, y < 0 \\ \text{non definito} & \text{se } x = 0, y = 0 \end{cases}$

$z \simeq (x, y) \in \mathbb{R}^2 \smallsetminus \{0\}$  

Quindi $\exists! (\rho, \theta) \in (0, +\infty) \times [-\pi, \pi)$ tali che $z = \rho(\cos(\theta) + i\sin(\theta))$

$\begin{aligned} P: \quad & (0, \infty) \times [-\pi, \pi) & \to \quad & \mathbb{R}^2 \smallsetminus \{0\} \\ & (\rho, \theta) & \mapsto \quad & \Big( x(\rho, \theta), y(\rho, \theta) \Big) = (\rho\cos(\theta), \rho\sin(\theta)) \end{aligned}$

$\rho = \lvert z \rvert = \sqrt{x^2 + y^2}$  
$\tan(\theta) = \frac{y}{x}$  

$\begin{aligned} P^{-1}: \quad & \mathbb{R}^2 \smallsetminus \{0\} & \to \quad & (0, \infty) \times [-\pi, \pi) \\ & (x, y) & \mapsto \quad & \Big( \rho(x, y), \theta(x, y) \Big) = \left( \sqrt{x^2 + y^2}, atan2(y, x) \right) \end{aligned}$

$z = x + iy = \rho\cos(\theta) + i\rho\sin(\theta) = \rho(\cos(\theta) + i\sin(\theta))$ forma trigonometrica di $z$  

## Numeri complessi in forma esponenziale

$i^1 = i, \quad i^2 = -1, \quad i^3 = -i, \quad i^4 = 1, \quad i^5 = i, \ldots$

$i^{4k + l} = i^{4k} \cdot i^l = 1 \cdot i^l = i^l \quad \forall k, l \in \mathbb{Z}$

Con l'espanzione in serie di Taylor $\displaystyle e^x = \sum_{n=0}^{+\infty} \frac{x^n}{n!}$, si ha che  

$\displaystyle e^{i\theta} = \sum_{m=0}^{+\infty} \frac{(i\theta)^m}{m!} = \sum_{n=0}^{+\infty} \frac{(i\theta)^{2n}}{(2n)!} + \sum_{n=0}^{+\infty} \frac{(i\theta)^{2n+1}}{(2n+1)!} = \sum_{n=0}^{+\infty} \frac{(-1)^n\theta^{2n}}{(2n)!} + i\sum_{n=0}^{+\infty} \frac{(-1)^n\theta^{2n+1}}{(2n+1)!} = \cos(\theta) + i\sin(\theta)$

quindi $e^{i\theta} = \cos(\theta) + i\sin(\theta)$  

Un cerchio di raggio $1$ centrato nell'origine del piano complesso, è una sfera unitaria complessa $\mathbb{S}^1 = \{z \in \mathbb{C} \mid \lvert z \rvert = 1\}$ ha degli elementi che possono essere scritti come $z = e^{i\theta}$ con $\theta \in [-\pi, \pi)$, ossia  

$\mathbb{S}^1 = \{e^{i\theta} \mid z = e^{i\theta}, \theta \in [-\pi, \pi)\}$

Notiamo che $\overline{e^{i\theta}} = \overline{\cos(\theta) + i\sin(\theta)} = \cos(\theta) - i\sin(\theta) = \cos(-\theta) + i\sin(-\theta) = e^{-i\theta}$

$\cos(\theta) = \dfrac{e^{i\theta} + e^{-i\theta}}{2}$  
$\sin(\theta) = \dfrac{e^{i\theta} - e^{-i\theta}}{2i}$  

$\mathbb{C}^* = \mathbb{C} \smallsetminus \{0\}$  

## Potenze e radici di numeri complessi

$z^n = \rho^n(e^{i\theta})^n = \rho^n e^{in\theta}$  
$w^n = z$  
$z = \rho e^{i\theta}$ e $w = re^{is}$  
$\begin{cases} \rho = r^n \\ e^{i\theta} = e^{ins} \end{cases}$  
$s = \frac{\theta + 2k\pi}{n} \quad k \in \mathbb{Z}$  
$\sqrt[n]{z} = \sqrt[n]{\rho}e^{i\frac{\theta + 2k\pi}{n}} \quad k = 0, 1, \ldots, n-1$

## Esponenziale complesso

$e^z = e^{x + iy} = e^x \cdot e^{iy} = e^x(\cos(y) + i\sin(y)) \in \mathbb{C}^*$  

## Funzioni trigonometriche complesse

$\cos(z) \coloneqq \dfrac{e^{iz} + e^{-iz}}{2} \quad \sin(z) \coloneqq \dfrac{e^{iz} - e^{-iz}}{2i}$  

$\cosh(z) \coloneqq \dfrac{e^z + e^{-z}}{2} \quad \sinh(z) \coloneqq \dfrac{e^z - e^{-z}}{2}$  

## Logaritmo complesso

$z = \lvert z \rvert e^{i \text{Arg}z} = \lvert z \rvert e^{i (\text{Arg}z + 2k\pi)} \quad k \in \mathbb{Z}$

$\log(z) = \log(\lvert z \rvert e^{i (\text{Arg}z + 2k\pi)}) = \log(\lvert z \rvert) + i(\text{Arg}z + 2k\pi) \quad \forall k \in \mathbb{Z}$

Pertanto il logaritmo complesso non è univoco (come la radice complessa).

Esempio: $\log(-1) = \log(1) + i(\text{Arg}(-1) + 2k\pi) = i\pi + i2k\pi = i(2k + 1)\pi \quad k \in \mathbb{Z}$

## Funzioni complesse di variabile reale

Una funzione $f: I \subset \mathbb{R} \to \mathbb{C}$ è del tipo $f(x) = u(x) + iv(x)$ con $u, v: I \subset \mathbb{R} \to \mathbb{R}$.  

Si ha che:
- $f$ è continua se $u$ e $v$ sono continue  
- $f$ è derivabile se $u$ e $v$ sono derivabili e $f'(x) = u'(x) + iv'(x)$
- $f$ è integrabile in $[a, b]$ se $u$ e $v$ sono integrabili in $[a, b]$ e $\int_a^b f(x) \, dx = \int_a^b u(x) \, dx + i\int_a^b v(x) \, dx$

## Funzioni periodiche

Sia $f: \mathbb{R} \to \mathbb{C}, p \in [1, +\infty)$ diciamo che $f$ è *localmente p-integrabile* se $\forall K \Subset \mathbb{R}$, cioè $K$ compatto incluso in $\mathbb{R}$, si ha che

$\displaystyle \int_K \lvert f(x) \rvert^p \, dx < +\infty$  

- Se $p = 1$ diciamo che $f$ è *localmente integrabile*  
- Se $p = 2$ diciamo che $f$ è *localmente quadrato integrabile*

### Definizione funzione periodica

Una funzione $f: \mathbb{R} \to \mathbb{C}$ è *periodica di periodo $T > 0$* se $\forall x \in \mathbb{R}$ si ha che $f(x + T) = f(x)$.  

La quantità $\frac{1}{T}$ è detta *frequenza* della funzione $f$, mentre $\omega \coloneqq 2\pi \cdot \frac{1}{T}$ è detta *frequnza angolare*.