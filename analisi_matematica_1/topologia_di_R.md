# Analisi Matematica 1

## Topologia di $\mathbb{R}$

### Distanza, palla, intorno di $x_0$, retta estesa

**Definizione**  
Siano $x, y \in \mathbb{R}$, chiamo **distanza** (euclidea) di $x$ e $y$ li valore $d(x,y) = |x-y|$.

**Proprietà**  
$d(x,y) \geq 0$  
$d(x,y) = 0 \Leftrightarrow x = y$  
$d(x,y) = d(y,x)$  
$d(x,z) \leq d(x,y) + d(y,z)$ **disuguaglianza triangolare**

**Osservazione**  
Distanza in $\mathbb{C}$

$d(z_1, z_2) = |z_1 - z_2|$

valgono le stesse proprietà.

**Definizione**  
Sia $x_0 \in \mathbb{R}$, sia $r > 0$

chiamo **intorno centrato aperto di centro $x_0$ e raggio $r$** l'insieme

$]x_0 - r, x_0 + r[ \ = \{x \in \mathbb{R} : d(x, x_0) < r \}$

è detto **palla di centro $x_0$ e raggio $r$**,

è l'insieme di tutti i punti di $\mathbb{R}$ che hanno distanza da $x_0$ minore di $r$.

**Osservazione**  
Su $\mathbb{C}$, la palla di centro $x_0$ e raggio $r$ è un cerchio.

**Definizione**  
Sia $x_0 \in \mathbb{R}$,  
chiamo **intorno di $x_0$** un qualunque insieme di $\mathbb{R}$ che contiene una palla aperta di centro $x_0$ e raggio $r$.

**Definizione**  
Chiamo $\tilde{\mathbb{R}} = \mathbb{R} \cup \{ -\infty, +\infty \}$, **retta estesa**.

**Definizione**  
Chiamo intorno di $+ \infty$ un qualunque sottoinsieme di $\mathbb{R}$ che contiene una semiretta $]a, +\infty[$.  
Analogamente per $- \infty$.

### Punti interni, esterni e di frontiera

**Definizione**  
Sia $E \subseteq \mathbb{R}$, sia $x_0 \in \mathbb{R}$,  

dico che $x_0$ è **interno** a $E$ se  
$\exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq E$

(quindi $x_0$ è interno ad è se e solo se $E$ è un intorno di $x_0$)

**Esempio**  
$E = \{1\} \cup [2, 3[$  
**interno** = $\dot{E} = \ ]2, 3[$

**Definizione**  
Sia $E \subseteq \mathbb{R}$, sia $x_0 \in \mathbb{R}$,  

$x_0$ si dice **esterno** a $E$ se è interno al complementare di $E$.

$x_0$ è esterno $\Leftrightarrow$ $\exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq \mathscr{C} E$

**Esempio**  
$E = \{1\} \cup [2, 3[$  
**esterno** $= \ ]-\infty, 1[ \ \cup \ ]1, 2[ \ \cup \ ]3, +\infty[$

**Definizione**  
Sia $E \subseteq \mathbb{R}$, sia $x_0 \in \mathbb{R}$,  

$x_0$ si dice **di frontiera** per $E$ se $x_0$ non è né interno, né esterno.  

$\neg (\exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq E) \wedge \neg (\exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq \mathscr{C} E)$

se e solo se

$\forall r > 0,$  
$]x_0 - r, x_0 + r[ \ \cap E \neq \emptyset$  
$]x_0 - r, x_0 + r[ \ \cap \mathscr{C} E \neq \emptyset$

(cioè in ogni intervallo di $x_0$ ci sono punti di $E$ e di $\mathscr{C} E$)

**Esempio**  
Sia $E = \mathbb{Q} \cup \ ]1, 2[$  
$\dot{E} = \emptyset$  
**frontiera** = $\partial E = [1, 2]$

### Insiemi aperti e insiemi chiusi

**Definizione**  
Sia $A \subseteq \mathbb{R}$,  

$A$ si dice aperto se $\forall x_0 \in A, \exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq A$

(cioè $A$ è aperto se e solo se tutti i punti sono punti interni)

$A$ è aperto $\Leftrightarrow$ $A = \dot{A}$

**Definizione**  
Sia $C \subseteq \mathbb{R}$,  

$C$ si dice chiuso se $\mathscr{C} C$ è aperto.

**Teorema**  
$\emptyset$ e $\mathbb{R}$ sono insiemi aperti.  
L'unione di insiemi aperti è un insieme aperto.  
L'intersezione di un numero finito insiemi aperti è un insieme aperto.

**Teorema**  
$\emptyset$ e $\mathbb{R}$ sono insiemi chiusi.  
L'intersezione di insiemi chiusi è un insieme chiuso.  
L'unione di un numero finito insiemi chiusi è un insieme chiuso.

**Dimostrazioni**  
$\mathbb{R}$ è aperto?  
Se $x_0 \in \mathbb{R}$, $\forall r > 0, \ ]x_0 - r, x_0 + r[ \ \subseteq \mathbb{R}$, quindi sì.

---

$\emptyset$ è aperto?  
Sì, perché i suoi elementi (non ce ne sono) hanno tutte le proprietà che si vogliono.

---

Siano $\{A_i, i \in I\}$ un insieme di insiemi aperti.  

Considero $x_0 \in \bigcup\limits_{i \in I} A_i$  
allora $\exists \=i : x_0 \in A_i$  
ma $A_i$ è aperto,  
$x_0 \in A_{\=i} \Rightarrow \exists r > 0 : \ ]x_0 - r, x_0 + r[ \ \subseteq A_i$  
ma allora $\ ]x_0 - r, x_0 + r[ \ \subseteq \bigcup\limits_{i \in I} A_i$  
allora $\bigcup\limits_{i \in I} A_i$ è aperto.

---

Siano $A_1, A_2$ dui insiemi aperti.

$x_0 \in A_1 \cap A_2$

allora

$x_0 \in A_1 \Rightarrow \exists r_1 > 0 : \ ]x_0 - r_1, x_0 + r_1[ \ \subseteq A_1$  
$x_0 \in A_2 \Rightarrow \exists r_2 > 0 : \ ]x_0 - r_2, x_0 + r_2[ \ \subseteq A_2$  

scelgo $r = min(r_1, r_2)$

$]x_0 - r, x_0 + r[ \ \subseteq A_1 \cap A_2$

$A_1 \cap A_2$ è aperto.

---

**Osservazione**  
Se considero l'intersezione di infiniti insiemi aperti, non è detto che sia un insieme aperto.

$I_n = \ ] 1 - \frac{1}{n}, 2 + \frac{1}{n}[ \ = [1, 2]$

### Punti di aderenza o di chiusura

**Definizione**  
Sia $E \subseteq \mathbb{R}$, sia $x_0 \in \mathbb{R}$,  

$x_0$ si dice **punto di aderenza** o **punto di chiusura** per $E$ se  
$\forall r > 0, \ ]x_0 - r, x_0 + r[ \ \cap E \neq \emptyset$

(in ogni intorno di $x_0$ ci sono punti di $E$)

I punti di chiusura si dicono la chiusura di $E$, e si indica con $\=E$.

**Esempio**  
$E = \ ]1, 2[$  
$\=E = [1, 2]$  

**Osservazione**  
$E \subseteq \=E$

**Esempio**  
$E = \{\frac{1}{n}, n \in \mathbb{N}^*\}$  
$\=E = E \cup \{0\}$  
$\dot{E} = \emptyset$  
$\partial{E} = E \cup \{0\}$

**Esempio**  
$\mathbb{Q}$  
$\overline{\mathbb{Q}} = \mathbb{Q} \cup \mathbb{R} = \mathbb{R}$  
$\partial{\mathbb{Q}} = \mathbb{R}$  
$\dot{\mathbb{Q}} = \emptyset$

**Teorema**  
Sia $E \subseteq \mathbb{R}$, allora

- $\=E$ è un insieme chiuso
- $\=E$ è il più piccolo chiuso che contiene $E$
- $E$ è chiuso se e solo se $E = \=E$

### Punti di accumulazione

**Definizione**  
Sia $E \subseteq \mathbb{R}$, sia $x_0 \in \mathbb{R}$,

$x_0$ si dice **punto di accumulazione** per $E$ se  
$\forall r > 0,  (]x_0 - r, x_0 + r[ \ \cap E) \setminus \{x_0\} \neq \emptyset$

(cioè $x_0$ è un punto di accumulazione per $E$ se in ogni intorno di $x_0$ ci sono punti di $E$ diversi da $x_0$)

L'insieme dei punti di accumulazione si chiama **derivato** di $E$, si indica con $\mathscr{D}E$.

**Esempio**  
$E = \ ]1, 2[$  
$\mathscr{D}E = [1, 2]$

**Esempio**  
$E = \{\frac{1}{n}, n \in \mathbb{N}^*\}$  
$\mathscr{D}E = \emptyset$

**Esempio**  
$E = \mathbb{N}$  
$\mathscr{D}E = \emptyset$

**Osservazione**  
$E \subseteq \mathbb{R}$, $x_0 \in \mathbb{R}$,  

$x_0$ è punto di accumulazione per $E$ è equivalente a dire che in ogni intorno di $x_0$ ci sono infiniti punti di $E$.

Se in ogni intorno di $x_0$ ci sono infiniti punti di $E$, è vero che in ogni intorno di $x_0$ ci sono punti di $E$ diversi da $x_0$?

Mostriamo il viceversa: se $x_0$ è punto di accumulazione per $E$, allora in ogni suo intorno ci sono infiniti punti di $E$, supponiamo che  $x_0$ abbia un intorno in cui ci sono un numero finito di punti di $E$

$]x_0 - r, x_0 + r[ \ \cap E = \{x_1, x_2, ..., x_k\}$

provo che $x_0$ non è punto di accumulazione per $E$

considero $r_0 = min\{|x_0 - x_j|,\ j=1,2,3, \dots, k,\ x_j \neq x_0\}$

siccome sono in numero finito, $r_0 > 0$ e in  
$(]x_0 - r_0, x_0 + r_0[ \ \cap E) \setminus \{x_0\} = \emptyset$

**Conseguenza**  
Gli insiemi finiti non hanno (mai) punto di accumulazione.

### Teorema 1 di Bolzano-Weierstrass

Sia $E \subseteq \mathbb{R}$, $E$ infinito e limitato  
allora $\exists \xi \in \mathbb{R} : \xi$ è punto di accumulazione per $E$,  
cioè $\mathscr{D}E \neq \emptyset$

**Dimostrazione**  
$E$ è limitato, cioè  

