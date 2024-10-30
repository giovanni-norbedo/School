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
$z := x + iy \quad x, y \in \mathbb{R}$  
$\mathbb{C} := \{z = x + iy \mid x, y \in \mathbb{R}\}$  
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

$\cos(z) := \dfrac{e^{iz} + e^{-iz}}{2} \quad \sin(z) := \dfrac{e^{iz} - e^{-iz}}{2i}$  

$\cosh(z) := \dfrac{e^z + e^{-z}}{2} \quad \sinh(z) := \dfrac{e^z - e^{-z}}{2}$  

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

# Funzioni periodiche

Sia $f: \mathbb{R} \to \mathbb{C}, p \in [1, +\infty)$ diciamo che $f$ è *localmente p-integrabile* se $\forall K \Subset \mathbb{R}$, cioè $K$ compatto incluso in $\mathbb{R}$, si ha che

$\displaystyle \int_K \lvert f(x) \rvert^p \, dx < +\infty$  

- Se $p = 1$ diciamo che $f$ è *localmente integrabile*  
- Se $p = 2$ diciamo che $f$ è *localmente quadrato integrabile*

## Definizione funzione periodica

Una funzione $f: \mathbb{R} \to \mathbb{C}$ è *periodica di periodo $T > 0$* se $\forall x \in \mathbb{R}$ si ha che $f(x + T) = f(x)$.  

La quantità $\frac{1}{T}$ è detta *frequenza* della funzione $f$, mentre $\omega := 2\pi \cdot \frac{1}{T}$ è detta *frequnza angolare*.

## Osservazione

Una funzione $f$ periodica di periodo $T > 0$ è univocamente determinata dalla restrizione $f \mid_{[\alpha, \alpha + T]} \quad \forall \alpha \in \mathbb{R}$.  
Denoteremo con $[-\frac{T}{2}, \frac{T}{2})$ l'intervallo di lunghezza $T$ centrato nell'origine, detto *periodo fondamentale*.

## Notazione

Fissato $p \in [1, +\infty), T > 0$ e $\mathbb{X} \in \{\mathbb{R}, \mathbb{C}\}$, indicheremo con $L^p ([-\frac{T}{2}, \frac{T}{2}]; \mathbb{X}) := L^p_{\mathbb{X}}(T)$ l'insieme delle funzioni $f: \mathbb{R} \to \mathbb{X}$ T-periodiche, localmente p-integrabili.  
Per semplicità notazionale: $L^p := L^p_{\mathbb{C}} (T)$.

L'insieme $L^p_{\mathbb{X}}(T)$ dotato della norma $\lVert f \rVert_{L^p_{\mathbb{X}}(T)} := \left( \displaystyle\int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert^p \, dx \right)^{\frac{1}{p}}$ è uno *spazio normato*.  

Una funzione è detta *localmente integrabile* se è integrabile su ogni intervallo limitato. Mentre una funzione è detta *localmente p-integrabile* se $\lvert f \rvert^p$ è integrabile su ogni intervallo limitato, cioè $\displaystyle \int_{[a, b]} \lvert f(x) \rvert^p \, dx < +\infty, \quad \forall [a, b] \subset \mathbb{R}$.

Uno **spazio normato** è uno spazio vettoriale dotato di una norma, cioè una funzione che associa ad ogni vettore un numero reale non negativo, tale che:
- $\lVert x \rVert \geq 0 \quad \forall x \in V$
- $\lVert x \rVert = 0 \iff x = 0$
- $\lVert \alpha x \rVert = \lvert \alpha \rvert \lVert x \rVert \quad \forall \alpha \in \mathbb{R}$
- $\lVert x + y \rVert \leq \lVert x \rVert + \lVert y \rVert \quad \forall x, y \in V$

## Osservazione

Notiamo che la norma associata allo spazio $L^2_{\mathbb{C}}(T)$ è canonicamente indotta dal prodotto scalare su $L^2_{\mathbb{C}}(T)$ definito come $\langle f \mid g \rangle := \displaystyle \int_{-\frac{T}{2}}^{\frac{T}{2}} f(x) \overline{g(x)} \, dx$.  

## Energia di una funzione

Sia $f = u + iv : \mathbb{R} \to \mathbb{C}$, T-periodica, localmente quadrato integrabile, definiamo come *energia* di $f$ la quantità $\lVert f \rVert^2_2 := \lVert f \rVert^2_{L^2} := \displaystyle \int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert^2 \, dx = \displaystyle \int_{-\frac{T}{2}}^{\frac{T}{2}} (u^2(x) + v^2(x)) \, dx$.

## Lemma

Sia $T > 0$, si ha che $L^2_{\mathbb{C}}(T) \subset L^1_{\mathbb{C}}(T)$.

Si dimostra applicando la disuguaglianza di Cauchy-Schwarz.

$\lVert f \rVert_{L^1} = \displaystyle \int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert \, dx = \langle \lvert f \rvert \mid 1 \rangle \leq \lVert 1 \rVert_{L^2} \lVert f \rVert_{L^2} = \displaystyle \int_{-\frac{T}{2}}^{\frac{T}{2}} 1 \cdot \lvert f(x) \rvert \, dx = \sqrt{T} \lVert f \rVert_{L^2}$

La disuguaglianza di Cauchy-Schwarz afferma che $\lvert \langle f \mid g \rangle \rvert \leq \lVert f \rVert \lVert g \rVert$.

## Armoniche elementari

Consideriamo le tre famiglie di funzioni:

$\mathcal{A}_{\mathbb{R}} := \left\{ \dfrac{a_0}{2}, a_n \cos (n\omega x), b_n \sin (n\omega x) \mid n \in \mathbb{N} \smallsetminus \{0\}, a_0, a_n, b_n \in \mathbb{R} \right\}$  
$\mathcal{A}_{\mathbb{C}} := \left\{ c_n e^{in\omega x} \mid n \in \mathbb{Z}, c_n \in \mathbb{C} \right\}$  
$\overline{\mathcal{A}}_{\mathbb{R}} := \left\{ A_0, A_n \cos (n\omega x + \varphi_n), A_n \sin (n\omega x + \varphi_n) \mid n \in \mathbb{N} \smallsetminus \{0\}, A_0 \in \mathbb{R}, A_n \geq 0, \varphi_n \in [-\pi, \pi) \right\}$  

esse sono dette *armoniche elementari*.  
Le fami