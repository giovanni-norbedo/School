## Calcolo differenziale

**Osservazione**  
Sia $t \to x(t)$ legge oraria  
(funzione che associa al tempo $t$ la posizione $x(t)$ di un punto mobile su un asse)

dati 2 istanti di tempo $t_1, t_2$,  
velocità media $v_m (t_1, t_2) = \frac{x(t_2) - x(t_1)}{t_2 - t_1}$  
chiamo velocità istantanea in $t_1$ il $\lim_{t_2 \to t_1} v_m(t_2, t_1)$

**Definizione**  
Sia $f : I \to \mathbb{R}$, $I$ intervallo di $\mathbb{R}$,  
sia $x_0 \in I$,  
chiamo rapporto incrementale, $R_{x_0}^f = \frac{f(x) - f(x_0)}{x - x_0}$  
della funzione $f$, relativamente al punto $x_0$

$R_{x_0}^f : I \smallsetminus \{x_0\} \to \mathbb{R}$  
$x \mapsto R_{x_0}^f(x) = \frac{f(x) - f(x_0)}{x - x_0}$

La chiamo anche **pendenza** (o **coefficiente angolare**)  
della retta secante i punti $(x_0, f(x_0))$ e $(x, f(x))$  

**Definizione**  
Sia $f : I \to \mathbb{R}$, $x_0 \in I$,  
chiamo **derivata** di $f$ in $x_0$,  
il $\lim\limits_{x \to x_0} R_{x_0}^f(x)$  

cioè $f'(x_0) = \lim\limits_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0}$  
$f'(x_0)$ è la derivata di $f$ in $x_0$

(naturalmente, se esiste il limite, lo chiamo derivata)

**Definizione**  
Sia $f : I \to \mathbb{R}$, $x_0 \in I$,  
se esiste **finito** il $\lim\limits_{x \to x_0} R_{x_0}^f(x) = \lim\limits_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0} = f'(x_0) \in \mathbb{R}$  
dico che **$f$ è derivabile in $x_0$**.

**Definizione**  
$f : I \to \mathbb{R}$ si dice **derivabile**  
se è derivabile in ogni punto dell'intervallo.

**Definizione**  
Sia $f : I \to \mathbb{R}$, derivabile,  
chiamo (funzione) derivata la funzione  
$f' : I \to \mathbb{R}$  
$x \mapsto f'(x)$

**Esempi dimostrati**

- costante
- identità
- potenza n-esima
- esponenziale
- logaritmo
- seno
- coseno

### Proprietà fondamentale

**Teorema**  
Sia $f: I \to \mathbb{R}$, $I$ intervallo, $x_0 \in I$,  
sia $f$ derivabile in $x_0$,  
allora $f$ continua in $x_0$

(se $f$ è derivabile in $x_0$, allora $f$ è continua in $x_0$)

**Dimostrazione**  
Intanto $I$ intervallo e quindi tutti i suoi punti sono punti di accumulazione per $I$,  
in particolare $x_0$  

$f$ continua in $x_0$ $\Leftrightarrow$ $\lim\limits_{x \to x_0} f(x) = f(x_0)$ $\Leftrightarrow$ $\lim\limits_{x \to x_0} f(x) - f(x_0) = 0$

per provare il teorema basta dimostrare che  
$\lim\limits_{x \to x_0} f(x) - f(x_0) = 0$

quindi  
$\lim\limits_{x \to x_0} f(x) - f(x_0) = \lim\limits_{x \to x_0} \underbrace{\frac{f(x) - f(x_0)}{x - x_0}}_{f'(x_0) \in \mathbb{R}} \cdot \underbrace{(x - x_0)}_0 = 0$

$\square$

Vale il viceversa? NO

Basta trovare un esempio di funzione continua che non è derivabile,  
per esempio $|x|$ in $0$ è continua, ma  
$R_{0}^{|x|} (x) = \frac{|x| - |0|}{x - 0} = \frac{|x|}{x} = \begin{cases} 1 & \text{se } x > 0 \\ -1 & \text{se } x < 0 \end{cases}$

quindi $\lim\limits_{x \to 0^-} R_{0}^{|x|} (x) = -1 \neq \lim\limits_{x \to 0^+} R_{0}^{|x|} (x) = 1$

**Osservazione**  
$x \mapsto |x|$ non è derivabile in $0$  
e se $x_0 \neq 0$ è derivabile? SI

$(|x|)' = \begin{cases} 1 & \text{se } x > 0 \\ -1 & \text{se } x < 0 \end{cases}$

in $0$ non c'è (la funzione non è derivabile)

Ci sono funzioni che siano continue dappertutto e derivabili da nessuna parte? SI

[Funzione di Weierstrass](https://it.wikipedia.org/wiki/Funzione_di_Weierstrass)

[Curva di Koch](https://it.wikipedia.org/wiki/Curva_di_Koch)

### Altre proprietà delle funzioni derivabili

**Teorema**  
Siano $f, g : I \to \mathbb{R}$, $x_0 \in I$,  
siano $f, g$ derivabili in $x_0$,  
allora $f + g, f - g, f \cdot g$ e, se $g(x_0) \neq 0$, $\frac{f}{g}$ sono derivabili  
e  
$(f \pm g)' = f' \pm g'$  
$(f \cdot g)' = f' \cdot g + f \cdot g'$ (regola di Leibniz)  
$(\frac{f}{g})' = \frac{f' \cdot g - f \cdot g'}{g^2}$

**Dimostrazione**  
$R_{x_0}^{f + g} (x) = \frac{(f(x) + g(x)) - (f(x_0) + g(x_0))}{x - x_0} = \frac{f(x) - f(x_0)}{x - x_0} + \frac{g(x) - g(x_0)}{x - x_0} = R_{x_0}^{f} (x) + R_{x_0}^{g} (x)$

