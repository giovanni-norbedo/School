---
geometry: margin=2gcm
output: pdf_document
---

$\Re(z) = \frac{z + \overline{z}}{2} \quad \Im(z) = \frac{z - \overline{z}}{2i} \quad \quad \lvert z \rvert = \sqrt{z \cdot \overline{z}} = \sqrt{x^2 + y^2}\in \mathbb{R}$  
$\rho e^{i\theta} = \rho(\cos(\theta) + i\sin(\theta)) \quad \quad z = \rho(\cos(\theta) + i\sin(\theta))$  
$e^z = e^{x + iy} = e^x \cdot e^{iy} = e^x(\cos(y) + i\sin(y)) \in \mathbb{C}^*$  
$\cos(z) := \frac{e^{iz} + e^{-iz}}{2} \quad \sin(z) := \frac{e^{iz} - e^{-iz}}{2i} \quad \cosh(z) := \frac{e^z + e^{-z}}{2} \quad \sinh(z) := \frac{e^z - e^{-z}}{2}$  

**F. complessa di variabile reale**: $f: I \subset \mathbb{R} \to \mathbb{C}, f(x) = u(x) + iv(x), \text{ con } u, v: I \subset \mathbb{R} \to \mathbb{R}$  
**F. localmente p-integrabile**: $f: \mathbb{R} \to \mathbb{C}, p \in [1, +\infty), \forall K \Subset \mathbb{R}, \int_K \lvert f(x) \rvert^p \, dx < +\infty$  
$L^p ([-\frac{T}{2}, \frac{T}{2}]; \mathbb{X} \in \{\mathbb{R}, \mathbb{C}\}) := L^p_{\mathbb{X}}(T) := L^p$ è l'insieme delle funzioni $f: \mathbb{R} \to \mathbb{X}$ T-periodiche, localmente p-integrabili.  
**Norma**: $\lVert f \rVert_{L^p_{\mathbb{X}}(T)} := \left( \displaystyle\int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert^p \, dx \right)^{\frac{1}{p}}$  
**Prodotto scalare**: $\langle f \mid g \rangle := \int_{-\frac{T}{2}}^{\frac{T}{2}} f(x) \overline{g(x)} \, dx$  
**Energia di una funzione**: $\lVert f \rVert^2_2 := \lVert f \rVert^2_{L^2} := \int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert^2 \, dx = \int_{-\frac{T}{2}}^{\frac{T}{2}} (u^2(x) + v^2(x)) \, dx$  
$\lVert f \rVert_{L^1} = \int_{-\frac{T}{2}}^{\frac{T}{2}} \lvert f(x) \rvert \, dx = \langle \lvert f \rvert \mid 1 \rangle \leq \lVert 1 \rVert_{L^2} \lVert f \rVert_{L^2} = \int_{-\frac{T}{2}}^{\frac{T}{2}} 1 \cdot \lvert f(x) \rvert \, dx = \sqrt{T} \lVert f \rVert_{L^2}$  
**Disuguaglianza di Cauchy-Schwarz**: $\lvert \langle f \mid g \rangle \rvert \leq \lVert f \rVert \lVert g \rVert$  
**Serie di Fourier**: $\frac{a_0}{2} + \sum_{n=1}^{+\infty} (a_n \cos(n \omega x) + b_n \sin(n \omega x)), \quad a_0, a_n, b_n \in \mathbb{R} \quad \quad \sum_{n=-\infty}^{+\infty} c_n e^{in \omega x}, \quad c_n \in \mathbb{C}$  
**Ridotta N-esima**: $S_N(x) := \sum_{n=-N}^{N} c_n e^{in \omega x}$  
**Convergenza puntuale**: $\lim_{N \to +\infty} S_N(x) = f(x) \quad$ **Convergenza uniforme**: $\lim_{N \to +\infty} \sup_{x \in \mathbb{R}} (S_N(x) - f(x)) = 0$  
**F. k volte derivabilie**: $\mathcal{C}^k(X; Y) := \{f: X \subset \mathbb{R} \to Y = \mathbb{R}, \mathbb{C} \text{ k volte derivabili}\}$, $\mathcal{C}^0 = \mathcal{C}$ spazio delle funzioni continue.  
**M-Test di Weierstrass**: $\{ f_n \}$ sucessione di funzioni, $\{ M_n \}$ successione di numeri reali positivi, $\lvert f_n(x) \rvert \leq M_n$ e $\sum_{n=1}^{+\infty} M_n < +\infty \Rightarrow \sum_{n=1}^{+\infty} f_n(x)$ converge uniformemente.  
**Continuità del limite**: $\{ f_n \}_{n \in \mathbb{N}} \subset \mathcal{C}(E; \mathbb{C})$ converge uniformemente a $f$ allora $f \in \mathcal{C}(E; \mathbb{C})$.  
**Integrazione termine a termine**: $f_n : [a, b] \subset \mathbb{R} \to \mathbb{C}$, integrabile, $\sum_{n=1}^{+\infty} f_n(x)$ converge uniformemente a $f$ allora $\int_a^b f(x) \, dx = \sum_{n=1}^{+\infty} \int_a^b f_n(x) \, dx$.  
**Derivazione termine a termine**: $f_n : [a, b] \subset \mathbb{R} \to \mathbb{C}$, derivabile, $\sum_{n=1}^{+\infty} f_n(x)$ converge uniformemente a $f$ e $\sum_{n=1}^{+\infty} f'_n(x)$ converge uniformemente a $g$ allora $f \in \mathcal{C}^1([a, b]; \mathbb{C})$ e $f'(x) = g(x)$, ossia $\frac{d}{dx} \left( \sum_{n=1}^{+\infty} f_n(x) \right) = \sum_{n=1}^{+\infty} f'_n(x)$.  
**Convergenza uniforme di serie trigonometriche**: $\frac{|a_0|}{2} + \sum_{n=1}^{+\infty} (|a_n| + |b_n|) < +\infty \Rightarrow f(x)$ converge uniformemente in $\mathbb{R}$.  
$\sum_{n=-\infty}^{+\infty} |c_n| < +\infty \Rightarrow f(x)$ converge uniformemente in $\mathbb{R}$.  
**Analisi di Fourier**: $c_n = \frac{1}{T} \int_{-\frac{T}{2}}^{\frac{T}{2}} f(x) e^{-in \omega x} \, dx, \quad \quad a_n = \frac{2}{T} \int_{-\frac{T}{2}}^{\frac{T}{2}} f(x) \cos(n \omega x) \, dx \quad b_n = \frac{2}{T} \int_{-\frac{T}{2}}^{\frac{T}{2}} f(x) \sin(n \omega x) \, dx$  
**Associare a una f. la sua serie di Fourier**: $f \in L^1_{\mathbb{X} \in \{\mathbb{R}, \mathbb{C}\}}(T) \Rightarrow$ i coefficienti di Fourier sono ben definiti ed è possibile associare canonicaente a $f$ una serie trigonometrica.  
**Spettro di una f.**: $f \in L^1_{\mathbb{X}}$ se $\mathbb{X} = \mathbb{C}$, $\{ c_n \}_{n \in \mathbb{Z}} = \{ c_n(f) \}_{n \in \mathbb{Z}}$ è lo spettro, se $\mathbb{X} = \mathbb{R}$, $\{ a_0, (a_n, b_n)_{n \geq 1} \} = \{ a_0(f), (a_n(f), b_n(f))_{n \geq 1} \}$ è lo spettro.  
**Sintesi di Fourier (inverso)**: $c = \{ c_n \}_n : \mathbb{Z} \to \mathbb{C}$, $\{ c_n \}_{n \in \mathbb{Z}} \mapsto \sum_{n \in \mathbb{Z}} c_n e^{in \omega x} \stackrel{?}{\mapsto} f$  
**Convergenza puntuale della serie di Fourier**: $f \in L^1_{\mathbb{C}}(T), \{ c_n(f) \}_{n \in \mathbb{Z}}, \quad S_N(x) := \sum_{n=-N}^{N} c_n(f) e^{in \omega x}, \lim_{N} S_N(x_0) = f(x_0)?$  
**Teorema di Dirichlet-Weiherstrass**: $f \in L^1_{\mathbb{C}}(T)$, $x_0 \in \mathbb{R}$, se esistono finiti $\lim_{x \to x_0^{\pm}} f(x_0^{\pm}), \lim_{x \to x_0^{\pm}} \frac{f(x) - f(x_0^{\pm})}{x - x_0}$ allora $\lim_{N \to +\infty} S_N(x_0) = \frac{f(x_0^+) + f(x_0^-)}{2}$.  
**Lemma di Riemann-Lebesgue**: $f \in L^1_{\mathbb{C}}(T), c_n = c_n(f)$, allora $\lim_{n \to +\infty} c_n (f) = 0$.  
**Regolarità di una f. e decadimento dei coefficienti di Fourier**  
**Lemma**: $f, g \in \mathcal{C}^1([-\frac{T}{2}, \frac{T}{2}); \mathbb{C})$ T-periodiche, $c_n (f) = c_n (g) \quad \forall n \in \mathbb{Z} \Rightarrow f = g \forall x \in [-\frac{T}{2}, \frac{T}{2})$.  
**Proposizione**: $k \in \mathbb{N}, f \in L^1_{\mathbb{C}}(T)$ derivabile k volte e $f^{(j)} \in L^1_{\mathbb{C}}(T) \quad \forall j = 0, \ldots, k$, allora $c_n(f^{(j)}) = (i \omega n)^j c_n(f) \quad \forall n \in \mathbb{Z}$.  
**Lemma**: $T>0, k \in \mathbb{N}, \sum_{n \in \mathbb{Z}} \gamma_n e^{in \omega x}$ che converge puntualmente a $f$ in $[-\frac{T}{2}, \frac{T}{2})$ e $\exists p > k + 1$ tale che $|\gamma_n| = O(|n|^{-p})$ allora $f \in \mathcal{C}^k([-\frac{T}{2}, \frac{T}{2}); \mathbb{C})$.