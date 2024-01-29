---
title: "Algebra Lineare ed Elementi di Geometria"
author: Giovanni Norbedo
date: 2023-2024
header-includes:
    - \usepackage{fancyhdr}
    - \pagestyle{fancy}
    - \rhead{Giovanni Norbedo}
    - \cfoot{\thepage}
    - \renewcommand{\contentsname}{Indice}
    - \renewcommand{\figurename}{Figura}
geometry: margin=3cm
output: pdf_document
---

# Introduzione

## Equazioni e Soluzioni

Che cos'è un'equazione? Un'*equazione* è una *domanda*.

$x^2+2x+1=0$

Questo è un modo di formalizzare la domanda "Qual è quel numero, che indichiamo con $x$, tale che se calcolo il numero $x^2 + 2x +1$, esso è $0$?

Una  *soluzione* è una *risposta* (corretta) alla domanda.  

Per esempio nel nostro caso abbiamo che il numero $-1$ è soluzione, perché:

$(-1)^2 + 2(-1) + 1 = 1 -2 + 1 = 0$

Dato che la quantità che otteniamo al membro sinistro dell'uguale è la medesima di quella che otteniamo a destra possiamo affermare che $-1$ è soluzione.

La teoria delle equazioni di secondo grado si dice che non ci sono altre soluzioni e che $x^2 +2x + 1 = (x+1)^2$.

Passiamo, invece, a considerare:

$3x + y -2z = 0$

**Attenzione**: Soluzione banale con $(0,0,0)$

Risolvere questa equazione significa determinare una (o tutte) le terne di numeri $(x,y,z)$ tali che, se sostituiamo tali numeri alle variabili nel membro sinistro, otteniamo zero.

**Osservazione**  
Nella prima equazione ci veniva chiesto di determinare *un numero*, nella seconda ogni sostituzione è costituita da *tre numeri*; diciamo quindi che la prima equazione è in  *una variabile*, la seconda in *tre variabili*.

Una prima soluzione è data dalla scelta:  

$x=0, y=0, z=0$ ovvero dalla terna $(0,0,0)$

infatti  

$3 \cdot 0 + 1 \cdot 0 - 2 \cdot 0 = 0$

anche

$x=1,y=1,z=2$ ovvero la terna $(1,1,2)$

è soluzione, perché

$3 \cdot 1 + 1 \cdot 1 - 2 \cdot 2 = 3 + 1 -4 = 0$

Similmente, anche

$(0, 2, 1)$

è soluzione, perché

$3 \cdot 0 + 1 \cdot 2 - 2 \cdot 1 = 0 + 2 -2 = 0$

Ora accade che da queste ultime due soluzioni che abbiamo esibito possiamo costruirne altre, sfruttando le proprietà di base delle operazioni tra numeri, in particolare la proprietà associativa, commutativa e distributiva.

Più concretamente, vorrei mostrare che

$x=2,y=2,z=4$ ovvero la terna $(2,2,4)$

è anch'essa soluzione. Infatti

$3 \cdot 2 + 1 \cdot 2 - 2 \cdot 4 = 6 + 2 -8 = 0$

Però possiamo vedere la terna $(2,2,4)$ anche nel modo seguente, partiamo dalla terna $(1,1,2)$ e moltiplichiamo ogni sua entrata per 2, ottenendo appunto $(2,2,4)$ [sappiamo già che $(1,1,2)$ è soluzione].

In maniera più compatta, introduciamo la notazione

$(2,2,4) = 2 \cdot (1,1,2)$

Riprendiamo la quantità che abbiamo calcolato prima

$3 \cdot 2 + 1 \cdot 2 - 2 \cdot 4 = 3 \cdot (2 \cdot 1) + 1 \cdot (2 \cdot 1) -2 \cdot (2 \cdot 2) =$  

$= (3 \cdot 2) \cdot 1 + (1 \cdot 2) \cdot 1 -(2 \cdot 2) \cdot 2$  
per la proprietà associativa  

$= 2 \cdot (3 \cdot 1) + 2(1 \cdot 1) - 2 \cdot (2 \cdot 2)$  
per la proprietà commutativa  

$= 2 \cdot (3 \cdot 1 + 1 \cdot 1 -2 \cdot 2)$  
per la proprietà distributiva  

$= 2 \cdot 0 = 0$

$(3 \cdot 1 + 1 \cdot 1 -2 \cdot 2)$  
questa quantita è zero perché $(1,1,2)$ è soluzione.

Lo stesso ragionamento ci mostra che la terna

$(37,37,74)$

è soluzione, perché

$3 \cdot 37 + 1 \cdot 37 -2  \cdot 74 = 37 \cdot (3 \cdot 1 + 1 \cdot 1 - 2 \cdot 2)$

Usando la notazione di prima, possiamo dire che $(37,37,74)$ è soluzione perché

$(37,37,74) = 37 \cdot (1,1,2)$

Generalizzando, vediamo che per ogni $\alpha \in \mathbb{R}$,  
la terna $(\alpha, \alpha, 2 \alpha) = \alpha \cdot (1,1,2)$ è soluzione.

Analizziamo ora un secondo fenomeno.  
Vorrei mostrare che la terna $(1,3,3)$ è soluzione.

Osserviamo che

$1 = 1 + 0$  
$3 = 1 + 2$  
$3 = 2 + 1$  

In una notazione più compatta scriviamo

$(1,3,3) = (1,1,2) + (0,2,1)$

Ora calcoliamo

$3 \cdot 1 + 1 \cdot 3 - 2 \cdot 3 = 3 \cdot (1+0) + 1  \cdot (1+2) -2 \cdot (2+1) =$  
$= (3 \cdot 1 + 1 \cdot 1 -2 \cdot 2) + (3 \cdot 0 + 1 \cdot 2 -2 \cdot 1) =$  
$= 0$  
perché $(1,1,2)$ è soluzione

Considerando quanto abbiamo imparato, troviamo che

- A. La terna $(0,0,0)$ è soluzione.

- B. Che $(\overline{x}, \overline{y}, \overline{z})$ è un particolare soluzione, allora per ogni $\alpha \in \mathbb{R}$ anche $\alpha \cdot (\overline{x}, \overline{y}, \overline{z})$ è soluzione.

- C. Che $(\overline{x}, \overline{y}, \overline{z})$ e $(\hat{x}, \hat{y}, \hat{z})$ sono due soluzioni, allora anche $(\overline{x}, \overline{y}, \overline{z}) + (\hat{x}, \hat{y}, \hat{z}) = (\overline{x} + \hat{x}, \overline{y} + \hat{y}, \overline{z} + \hat{z})$ è soluzione.

Consideriamo ora il sistema

$$\begin{cases}
    \begin{aligned}
        3x + 1y - 2z & = 0 \\
      - 2x - 2y + 2z & = 0 \\  
        2x + 0y - 1z & = 0
    \end{aligned}
\end{cases}$$

Le proprietà A, B e C valgono anche in questo caso.

Ora vorrei calcolare le soluzioni di questo sistema. Per farlo usiamo un teorema chiamato "*eliminazione di Gauss*" o "*eliminazione gaussiana*".

**Definizione**  
Due sistemi si dicono **equivalenti** se hanno le stesse soluzioni.

Andremo a manipolare il sistema al fine di trovarne uno equivalente (ovvero con le stesse soluzioni) più semplicemente da risolvere, ovvero nella forma:

- un'equazione di cui compaiono tre variabili
- un'equazione di cui compaiono due variabili
- un'equazione di cui compaia una variabile

Partiamo mostrando che

$-2x -2y + 2z = 0$

è equivalente a

$x + y -z = 0$

Il sistema diviene

$$
\begin{cases}
    \begin{aligned}
        1x + 1y - 1z &= 0 \\
        3x - 1y + 2z &= 0 \\  
        2x + 0y - 1z &= 0
    \end{aligned}
\end{cases}
$$

Manipolo la seconda equazione per "eliminare la x", sottraendo tre volte la prima equazione

$(3x +y -2z) -3 \cdot (x + y -z) = 0 -3 \cdot 0$  

$3x +y -2z -3x -3y +3x = +y -2z - 3y + 3z = 0$  

$-2y + z = 0$

Facciamo la stessa cosa con la terza equazione

$(2x - z) -2 \cdot (x+y-z) = 0 - 2 \cdot 0$  

$2x -z -2x -2y +2z = 0$  

$-2y + z = 0$  

In definitiva il sistema è equivalente a

$$
\begin{cases}
    \begin{aligned}
        x + y - z &= 0 \\
        -2y + z &= 0
    \end{aligned}
\end{cases}
$$

Questo sistema ci dice che se $z$ assume un valore $\alpha \in \mathbb{R}$  
allora $y$ deve essere $\frac{1}{2} \alpha$ e $x$ deve essere $\frac{1}{2} \alpha$.

Quindi le soluzioni sono della forma

$(\frac{1}{2} \alpha, \frac{1}{2} \alpha, \alpha) = \alpha \cdot (\frac{1}{2}, \frac{1}{2}, 1)$

Se ora, a partite dal sistema iniziale, estraessimo i coefficienti e li ponessimo in una tabella, otterremmo

$$
\begin{cases}
    \begin{aligned}
        3x + 1y - 2z &= 0 \\
    - 2x - 2y + 2z &= 0 \\  
        2x + 0y - 1z &= 0
    \end{aligned}
\end{cases}
$$

$$
\begin{pmatrix}
    3  &  1 & -2 \\
    -2 & -2 &  2 \\
    2  &  0 & -1
\end{pmatrix}
$$

Moltiplico per $- \frac{1}{2}$ la seconda equazione

$$
\begin{pmatrix}
    3  &  1 & -2 \\
    1  &  1 & -1 \\
    2  &  0 & -1
\end{pmatrix}
$$

Inverto la prima equazione con la seconda

$$
\begin{pmatrix}
    1  &  1 & -1 \\
    3  &  1 & -2 \\
    2  &  0 & -1
\end{pmatrix}
$$

Sottraggo dall'attuale seconda equazione la prima equazione moltiplicata per $3$

$$
\begin{pmatrix}
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    2  &  0 & -1
\end{pmatrix}
$$

Sottraggo dalla terza equazione la prima moltiplicata per $2$

$$
\begin{pmatrix}
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    0  & -2 &  1
\end{pmatrix}
$$

Sottraggo dalla terza equazione la seconda

$$
\begin{pmatrix}
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    0  &  0 &  0
\end{pmatrix}
$$

Sono riuscito a risolvere il sistema.  
Ho utilizzato una procedura algoritmica (un algoritmo può essere eseguito da un calcolatore).  

---

# Vettori applicati e vettori liberi

Ci mettiamo nel contesto della geometria euclidea.  
Un **vettore applicato** è un segmento orientato, caratterizzato dunque da:

- un **punto di applicazione** (PDA)
- una **direzione**
- un **verso**
- una **lunghezza** (o modulo)

Un **vettore applicato** è determinato da una coppia ordinata $(A,B)$ di punti, in tal caso il vettore si denota $\overrightarrow{AB}$.

Per ogni punto di applicazione esiste il vettore applicato nullo $\overrightarrow{AA}$.

Il vettori applicati si possono sommare tra di loro, purché il punto finale del primo coincida con il punto iniziale del secondo, ovvero purché siano della forma $\overrightarrow{AB}$ e $\overrightarrow{AC}$.

Definiamo $\overrightarrow{AB} + \overrightarrow{BC} := \overrightarrow{AC}$

![somma di due vettori](../img/somma_vettori.png){ width=401px }

**Attenzione**: se $B \not ={C}$, allora non sappiamo come sommare $\overrightarrow{AB}$ e $\overrightarrow{CD}$

**Osservazione**  
$\overrightarrow{AB} + \overrightarrow{BB} = \overrightarrow{AB}$ e $\overrightarrow{AA} + \overrightarrow{AB} = \overrightarrow{AB}$

**Proposizione**  
La somma di vettori applicati, quando è possibile eseguirla, soddisfa la proprietà associativa.

Nei numeri reali, la proprietà associativa della somma dice che per ogni $a,b,c \in \mathbb{R}$ vale che  

$(a+b) + c = a + (b+c)$

per questo motivo possiamo scrivere $a+b+c$ senza ambiguità.

**Dimostrazione**  
Dobbiamo dimostrare che per ogni vettore applicato $\overrightarrow{AB}, \overrightarrow{BC}, \overrightarrow{CD}$ vale che

$(\overrightarrow{AB} + \overrightarrow{BC}) + \overrightarrow{CD} = \overrightarrow{AB} + (\overrightarrow{BC} + \overrightarrow{CD})$

Ora, vale che

$(\overrightarrow{AB} + \overrightarrow{BC}) + \overrightarrow{CD} = \overrightarrow{AC} + \overrightarrow{CD} = \overrightarrow{AD}$  
$\overrightarrow{AB} + (\overrightarrow{BC} + \overrightarrow{CD}) = \overrightarrow{AB} + \overrightarrow{BD} = \overrightarrow{AD}$

![proprietà associativa dei vettori](../img/proprietà_associativa_dei_vettori.png){ width=401px }

$\square$

**Definizione**  
Dato un vettore applicato $\overrightarrow{AB}$ e un numero reale $a \in \mathbb{R}$, otteniamo $a \cdot \overrightarrow{AB}$ in questo modo:

- se $a=0,\ a \cdot \overrightarrow{AB} := \overrightarrow{AA}$
- se $a>0,\ a \cdot \overrightarrow{AB} :=$ vettore applicato in $A$ con *stessa direzione e stesso verso* di $\overrightarrow{AB}$ e modulo $a \cdot$ [modulo di $\overrightarrow{AB}$] (il modulo di $\overrightarrow{AB}$ si può indicare con $|\overrightarrow{AB}|$ e quindi possiamo scrivere "modulo uguale ad a $\cdot |\overrightarrow{AB}|$)
- se $a<0, a \cdot \overrightarrow{AB} :=$ vettore applicato in $A$ con stessa direzione e verso opposto di $\overrightarrow{AB}$ e modulo uguale ad $|a| \cdot |\overrightarrow{AB}|$, (ovvero in questo caso $(-a) \cdot (|\overrightarrow{AB}|)$).

Per ottenere una teoria "più comprensiva" introduciamo un nuovo oggetto, i vettori liberi.

**Definizione**  
Due vettori applicati $\overrightarrow{AB}$ e $\overrightarrow{CD}$ si dicono **equipollenti** se e solo se $\overrightarrow{AB}$ e $\overrightarrow{CD}$ hanno la medesima direzione, il medesimo verso e il medesimo modulo (cambia il punto di applicazione).

Si verifica che quella di equipollenza è una relazione di equivalenza, ovvero essa è riflessiva, simmetrica e transitiva.

**Definizione**  
Dato un vettore applicato $\overrightarrow{AB}$, si definisce la sua classe di equipollenza.

$[\overrightarrow{AB}] := \{\text{vettori applicati}\ \overrightarrow{CD}\ \text{tale che}\ \overrightarrow{AB} \equiv \overrightarrow{CD}\}$

**Proposizione**  
Dai risultati della geometria euclidea segue che dato un vettore applicato $\overrightarrow{AB}$ e un punto $C$, allora esiste sempre un vettore applicato $\overrightarrow{CD}$ equipollente ad $\overrightarrow{AB}$;  

da questo segue che data una classe di equipollenza denotata $\vec{V}$, e dato un punto $C$ nel piano, esiste dunque un vettore applicato che appartiene a $\vec{V}$ e che ha punto iniziale $C$.

**Osservazione**  
Se $\overrightarrow{AB} \equiv \overrightarrow{CD}$ allora $[\overrightarrow{AB}] = [\overrightarrow{CD}]$; si dice che $\overrightarrow{AB}$ e $\overrightarrow{CD}$ sono dei **rappresentanti** della medesima classe di equipollenza.

**Definizione**  
Una classe di equipollenza $\vec{V}$ di vettori applicati si dice **vettore libero**.

**Osservazione**  
Tutti i vettori applicati nulli sono equipollenti e dunque formano una sola classe di equipollenza che denotiamo $\overrightarrow{O}$.

**Definizione**  
Dati due vettori liberi $\vec{U}$ e $\vec{V}$ definiamo la loro somma $\vec{U} + \vec{V}$ nella maniera seguente:

1. scegliamo un rappresentante $\overrightarrow{AB}$ per $\vec{U}$, ovvero $\vec{U} = [\overrightarrow{AB}]$
2. per la proposizione che abbiamo enunciato prima, possiamo scegliere un vettore applicato e un $\vec{V}$ tale che il suo punto iniziale sia $B$, ovvero un vettore $\overrightarrow{BC} \in \vec{V}$, ovvero $\vec{V} = [\overrightarrow{BC}]$
3. definiamo $\vec{U} + \vec{V} := [\overrightarrow{AB} + \overrightarrow{BC}]\ (=[\overrightarrow{AC}])$

Questa costruzione è indipendente dalla scelta del rappresentante di $\vec{U}$.  

Se denotiamo con $V_2$ l'insieme dei vettori liberi nel piano,  
la somma è una *funzione*

$+ : V_2 \times V_2$  
l'insieme delle coppie ordinate di elementi di $V_2$  

$(\vec{U}, \vec{V}) \mapsto \vec{U} + \vec{V}$  
coppia ordinata

Se $\lambda \in \mathbb{R}$ e $\vec{V}$ è un vettore libero,  
possiamo definire $\lambda \cdot \vec{V}$  

$\lambda \cdot \vec{V}: = [\lambda \cdot \overrightarrow{AB}]$

moltiplicazione per un numero di un vettore applicato (che sappiamo già fare).

Questa definizione è *ben posta*, ovvero non dipende dal rappresentante che abbiamo scelto.

La moltiplicazione per uno scalare è una funzione

$\mathbb{R} \times V_2 \rightarrow V_2$  
coppia ordinata

$(\lambda, \vec{V}) \mapsto \lambda \cdot \vec{V}$

Definiamo il vettore libero nullo come

$\vec{O} = \overrightarrow{AA}$

Notiamo che

$\vec{O} + \vec{V} = [\overrightarrow{AA}] + [\overrightarrow{AB}] = [\overrightarrow{AA} + \overrightarrow{AB}] = [\overrightarrow{AB}] = \vec{V}$

$\vec{V} + \vec{O} = [\overrightarrow{AB}] + [\overrightarrow{BB}] = [\overrightarrow{AB + BB}] = [\overrightarrow{BB}] = \vec{V}$

Quindi $\vec{O}$ si comporta come lo zero rispetto alla somma.

**Proprietà** della somma tra vettori liberi:

- proprietà associativa
  - $(\vec{U} + \vec{V}) + \vec{W} = \vec{U} + (\vec{V} + \vec{W})$ per ogni $\vec{U}, \vec{V}, \vec{W}$
- proprietà commutativa
  - $\vec{U} + \vec{V} = \vec{V} + \vec{U}$ per ogni $\vec{U}, \vec{V}$
- esistenza dell'elemento neutro
  - per ogni $\vec{V}$ vale $\vec{O} + \vec{V} = \vec{V} + \vec{O} = \vec{V}$
- esistenza dell'elemento opposto
  - per ogni $\vec{V}$ esiste un $\vec{W}$ tale che $\vec{V} + \vec{W} = \vec{W} + \vec{V} = \vec{O}$, con $\vec{W} = - \vec{V}$

Se $\vec{v} = [\overrightarrow{AB}]$ allora $- \vec{v} = [\overrightarrow{BA}]$

**Proprietà** della moltiplicazione per uno scalare:

per ogni $\vec{V}$  
$1 \cdot \vec{V} = \vec{V}$

per ogni $\vec{V}$  
$(-1) \cdot \vec{V} = - \vec{V}$

per ogni $\lambda, \mu \in \mathbb{R}$, per ogni $\vec{V}$  
$(\lambda \mu) \cdot \vec{V} = \lambda (\mu \cdot \vec{V})$

per ogni $\lambda, \mu \in \mathbb{R}$, per ogni $\vec{V}, \vec{U}$  
$(\lambda + \mu) \cdot \vec{V} = \lambda \cdot \vec{V} + \mu \cdot \vec{V}$  
$\lambda \cdot (\vec{V} + \vec{U}) = \lambda \cdot \vec{U} + \lambda \cdot \vec{V}$

**Definizione**:  
Uno spazio vettoriale è un insieme $V$  
con due operazioni:  

$+ : V \times V \rightarrow V$  
$(\mu, v) \mapsto \mu + v$

$\cdot : \mathbb{R } \times V \rightarrow V$  
$(\mu, V) \mapsto \mu \cdot V$

tali per cui per ogni $\lambda, \mu \in \mathbb{R}$ e per ogni $u, v, w \in V$ siano soddisfatte le proprietà:

- $V1$. proprietà associativa
- $V2$. proprietà commutativa
- $V3$. esistenza del vettore nullo
- $V4$. esistenza del vettore opposto
- $V5$. proprietà distributiva di $+$ rispetto a R
- $V6$. proprietà distributiva di $\cdot$ rispetto a R
- $V7$. $(\lambda \mu) \cdot \vec{V} = \lambda (\mu \cdot \vec{V})$
- $V8$. $1 \cdot v = v$

**Proposizione**  
Ciò che abbiamo visto finora ci mostra che $V_2$ (insieme dei vettori liberi nel piano) è un $\mathbb{R}$-spazio vettoriale.

**Notazione**  
Un $\mathbb{R}$-spazio vettoriale si dice anche uno spazio vettoriale di $\mathbb{R}$.

Esempio:  
consideriamo $V = \mathbb{R}$
con l'usuale somma o moltiplicazione  
allora si verifica che $\mathbb{R}$ è un $\mathbb{R}$-spazio vettoriale.

Esempio:  
consideriamo $V = \mathbb{R} \times \mathbb{R}$ ovvero  
$V = \{(a,b) : a,b \in \mathbb{R}\}$  
$V$ si denota anche $\mathbb{R}^2$  
con le operazioni  
$(a,b) + (c,d) = (a + c,\ c+d)$
$\lambda (a,b) = (\lambda a, \lambda b)$

$(V,+,\cdot)$ è un $\mathbb{R}$-spazio vettoriale

Esempio:  
$V = \mathbb{R} \times \dots \times \mathbb{R} = \mathbb{R}^n$  
$V =$ l'insieme delle n-uple ordinate di numeri reali.
$V = \{(a_1, \dots, a_n) : a_1, \dots, a_n \in \mathbb{R}\}$  

Con le operazioni

$+ : \mathbb{R}^n = \mathbb{R}^n \rightarrow \mathbb{R^n}$  
$(a_1, a_2), (b_1, b_2) \mapsto (a_1 + b_1, a_2 + b_2)$

$\cdot : \mathbb{R} = \mathbb{R}^n \rightarrow \mathbb{R^n}$  
$\lambda, (a_1, a_2) \mapsto (\lambda a_1, \lambda a_2)$

Esempio:  
Consideriamo
$V = \{ \text{funzioni}\ f : \mathbb{R} \rightarrow \mathbb{R}\}$  
con le operazioni  
$+ : V \times V \rightarrow V$  
$(f,g) \mapsto (f+g)$

dove $f+g$ è la funzione $\mathbb{R} \rightarrow \mathbb{R}$ data da:  
se $a \in \mathbb{R}, (f+g)(a) := f(a) + g(a)$  
e  
$\mathbb{R} \times V \rightarrow V$  
$(\lambda,f) \mapsto \lambda f$

dove $\lambda f$ è la funzione $\mathbb{R} \rightarrow \mathbb{R}$ data da:

se $a \in \mathbb{R}, (\lambda f)(a) = \lambda (f(a)) \in \mathbb{R}$ (moltiplicazione in $\mathbb{R}$).

**Notazione**  
Sia $V$ in un $\mathbb{R}$-spazio vettoriale; gli elementi di $V$ si dicono *vettori*.  

**Osservazione**  
Sia $(V,+,\cdot)$ è l'insieme delle funzioni $f : \mathbb{R} \rightarrow \mathbb{R}$, allora il ruolo del vettore nullo è quello giocato dalla funzione

$F : \mathbb{R} \rightarrow \mathbb{R}$  
$x \mapsto 0$

infatti, se $g : \mathbb{R} \rightarrow \mathbb{R}$ è una funzione

$(g + F) : \mathbb{R} \rightarrow \mathbb{R}$  
$x \mapsto g(x) + F(x) = g(x) + 0 = g(x)$

abbiamo visto che $\forall x \in \mathbb{R}$, $(g + F)(x) = g(x)$, pertanto $g + F = g$; analogamente $F + g = g$, quindi $F$ è l'elemento neutro.

**Proposizione**  
Se $V$ è un $\mathbb{R}$-spazio vettoriale, allora l'elemento neutro è unico.

**Dimostrazione**  
Supponiamo che esistano due elementi neutri, che indichiamo con $0$ è $0'$:  
mostreremo che deve valere $0 = 0'$ e quindi da questo seguirà la tesi.  

Per ipotesi, abbiamo che

$\forall v \in V, 0 + v = v + 0 = v$ (@)  
$\forall v \in V, 0' + v = v + 0' = v$ (#)  

in (@) scegliamo $v = 0'$; allora

$0 + 0' = 0$

quindi $0 = 0 + 0' = 0'$, pertanto $0 = 0'$.

$\square$

**Proposizione**  
Sia $V$ un $\mathbb{R}$-spazio vettoriale, allora $\forall v \in V$, vale che

$(-1) \cdot v = -v$

**Dimostrazione**  
Per dimostrare la tesi, mostriamo che $\forall v \in V$, l'elemento $-1 \cdot v$ soddisfa la proprietà di essere opposto di $v$, ovvero:

$v + (-1) \cdot v = (-1) \cdot v + v = 0$

la prima uguaglianza segue dalla commutatività della somma; dimostriamo la seconda uguaglianza

$v + (-1) \cdot v \stackrel{V8}{=} (-1) \cdot v + v \stackrel{V6}{=} (-1 +1) \cdot v = 0 \cdot v = 0$

Se sapessimo che $0 \cdot v = 0$ (vettore nullo), allora avremmo concluso la dimostrazione,  
però questo non ci è dato a sapere, stanti semplicemente le 8 proprietà definitasi degli spazi vettoriali; dimostriamo qui di seguito che questa ulteriore proprietà segue dalle 8 proprietà.

$\square$

**Proposizione**  
Sia $V$ uno spazio vettoriale; allora $\forall v \in V$, vale che

$0 \cdot v = 0$

**Dimostrazione**  
Sia $v \in V$; abbiamo che

$0 \cdot v = (0 + 0) \cdot v \stackrel{V6}{=} 0 \cdot v + 0 \cdot v$

quindi

$0 \cdot v = 0 \cdot v + 0 \cdot v$

ora sommiamo ad entrambi i membri dell'uguaglianza l'opposto di $0 \cdot v$

$-(0 \cdot v) + 0 \cdot v = -(0 \cdot v) + 0 \cdot v + 0 \cdot v$

per la proprietà $V4$, individuo i vettori nulli; pertanto

$0 = 0 + 0 \cdot v$  
$0 = 0 \cdot v$

che è quindi il vettore nullo.

$\square$

**Dimostrazione**  
Per esercizio. Il vettore opposto è unico.

Consideriamo ora $\mathbb{R}^2$ con $+$ e $\cdot$ introdotti in precedenza ("*le operazioni componente per componente*"). Abbiamo visto che $\mathbb{R}^2$ è un $\mathbb{R}$-spazio vettoriale. Ora consideriamo il seguente sottoinsieme $W \subseteq \mathbb{R}^2$

$W := \{(x,y) \in \mathbb{R}^2 : x - 3y = 0\}$

In $\mathbb{R}^2$ esiste il vettore nullo $(0,0)$. Vale che $(0,0) \in W$.

In $\mathbb{R}^2$ è definita una somma. Se $v$ e $w$ sono elementi di $W$, allora in particolare sono entrambi di $\mathbb{R}^2$ e quindi li posso sommare, dunque $v+w \in \mathbb{R}^2$.

In aggiunta vale che $v+w \in W$. Infatti

se $v = (v_1, v_2)$ e $w = (w_1,w_2)$, allora

$v \in W \Rightarrow v_1 - 3 v_2 = 0$  
$w \in W \Rightarrow w_1 - 3 w_2 = 0$  

allora $(v_1 - 3 v_2) + (w_1 - 3 w_2) = 0 + 0 = 0$  

ovvero per esempio $(v_1 + w_1) + 3(v_2 + w_2) = 0$

ovvero $v + w \in W$

Infine consideriamo $v \in W$ e $\lambda \in \mathbb{R}$; vediamo che $\lambda \cdot v \in W$. Infatti se $v = (v_1,v_2)$, allora $\lambda \cdot v = (\lambda v_1, \lambda v_2)$

$v \in W \Rightarrow v_1 - 3 v_2 = 0$  

allora $\lambda \cdot (v_1 - 3 v_2) = \lambda \cdot 0 = 0$, quindi $(\lambda v_1) - 3(\lambda v_2) = 0$, ovvero $\lambda, v \in W$.

**Definizione**  
Sia $V$ un $\mathbb{R}$-spazio vettoriale, un sottoinsieme $W \subseteq V$ si dice un **sottospazio vettoriale** di $V$ se valgono:

1. il vettore nullo di $V$ appartiene a $W$ (stringatamente $0 \in W$)
2. $\forall v, w \in W,$ vale che $v + w \in W$ (**chiusura rispetto alla somma**)
3. $\forall \lambda \in \mathbb{R}$, $\forall v \in W$, vale che $\lambda \cdot v \in W$ (**chiusura rispetto alla moltiplicazione per uno scalare**)

**Esempio**  
$\mathbb{R}^2 \iff$ {punti del piano}

$W = \{(x,y) \in \mathbb{R}^2 : x - 3y = 0\}$

(è una retta nel piano cartesiano)

**Esempio**  
$\mathbb{R}^2 \iff$ {punti del piano}

$C = \{(x,y) \in \mathbb{R}^2 : x^2 + y^2 = 1\}$

(è una circonferenza nel piano cartesiano)

Non è un sottospazio vettoriale di $\mathbb{R}^2$, perché $(0,0) \notin W$

---

# Matrici

**Definizione**  
Siano $m,n \in \mathbb{N}$; una matrice $m \times n$ a coefficienti reali è una tabella rettangolare di $m \cdot n$ numeri del tipo

$$
A = \begin{pmatrix}
  a_{11} & a_{12} & \cdots & a_{1n}\\
  a_{21} & a_{22} & \cdots & a_{2n}\\
  \vdots & \vdots & \ddots & \vdots\\
  a_{m1} & a_{m2} & \cdots & a_{mn}\\
\end{pmatrix}
$$

dove $a_{ij}$ è un numero reale, ovvero

$a_{ij} \in \mathbb{R}$, $\forall i \in \{1, 2, \dots, m\}$ e $\forall j \in \{1, 2, \dots, n\}$

**Esempio**
Sia $A$ una matrice $3 \times 4$ a coefficienti reali

$$
A = \begin{pmatrix}
  1 & 2 & 3 & 4\\
  5 & 6 & 7 & 8\\
  9 & 10 & 11 & 12\\
\end{pmatrix}
$$

$a_{1,1} = 1$  
$a_{1,2} = 2$  
$a_{1,3} = 3$  
$a_{1,4} = 4$  
$a_{2,1} = 5$  
$a_{2,2} = 6$  
$a_{2,3} = 7$  
$a_{2,4} = 8$  
$a_{3,1} = 9$  
$a_{3,2} = 10$  
$a_{3,3} = 11$  
$a_{3,4} = 12$

**Definizione**  
Sia $A = (a_{ij})$ una matrice a coefficienti reali

per ogni $i \in \{1, 2, \dots, m\}$ la $i$-esima riga è la matrice

$A_{(i)} = (a_{i1}, a_{i2}, \dots, a_{in})$

per ogni $j \in \{1, 2, \dots, n\}$ la $j$-esima colonna la matrice

$$
A^{(j)} =
\begin{pmatrix}
  \alpha_{1j} \\
  \alpha_{2j} \\
  \vdots \\
  \alpha_{mj} \\
\end{pmatrix}
$$

**Esempio**  
$$
A =
\begin{pmatrix}
   1 & 3 \\
  -2 & 5
\end{pmatrix}
$$

$$
A_{(1)} = \begin{pmatrix}
  1 & 3\\
\end{pmatrix}
$$

$$
A_{(2)} = \begin{pmatrix}
  -2 & 5\\
\end{pmatrix}
$$

$$
A^{(1)} =
\begin{pmatrix}
  1 \\
  -2 \\
\end{pmatrix}
$$

$$
A^{(2)} =
\begin{pmatrix}
  3 \\
  5 \\
\end{pmatrix}
$$

**Definizione**  
Dati $m,n \in \mathbb{N},\ m>0,\ n>0$, l'insieme delle matrici $m \times n$ è denotato con $M_{m,n}(\mathbb{R})$; l'insieme delle matrici quadrate è denotato $M_n (\mathbb{R})$.

**Definizione**  
La matrice $m \times n$ nulla è la matrice $m \times n$ le cui entrate sono tutte zero.

**Esempio**  
$$
 \begin{pmatrix}
   0 & 0 & 0\\
   0 & 0 & 0\\
  0 & 0 & 0
 \end{pmatrix}
$$

Introduciamo delle operazioni tra matrici al fine di rendere $M_{m,n}(\mathbb{R})$ un $\mathbb{R}$-spazio vettoriale.

**Definizione**  
Siano $m,n \in \mathbb{N},\ m>0,\ n>0$ e siano $A, B \in M_{m,n}(\mathbb{R})$, definiamo la somma di $A$ e $B$, che denotiamo $A + B$, è la matrice definita nel modo seguente: l'entrata di posto $i,j$ di $A + B$ è data da:

$(A + B)_{i,j} := A_{i,j} + B_{i,j}$  
con tutti i membri $\in \mathbb{R}$

(qui utilizziamo il fatto che per descrivere una matrice è sufficiente determinare come ottenere ciascuna delle sue entrate)

**Esempio**  
$$
A =
\begin{pmatrix}
   1 & 2 \\
   3 & 4
\end{pmatrix}
$$

$$
B =
\begin{pmatrix}
   5 & 6 \\
   7 & 8
\end{pmatrix}
$$

$$
A + B =
\begin{pmatrix}
   6 & 8 \\
   10 & 12
\end{pmatrix}
$$

**Osservazione**  
La matrice nulla è l'elemento neutro della somma tra matrici.

**Definizione**  
Sia $A \in M_{m,n} (\mathbb{R})$ e sia $\lambda \in \mathbb{R}$; definiamo la moltiplicazione per uno scalare di $\lambda$ per $A$, che denotiamo $\lambda \cdot A$, come la matrice:

$(\lambda \cdot A)_{i,j} := \lambda \cdot A_{i,j}$

**Proposizione**  
L'insieme $M_{m,n} (\mathbb{R})$ con le operazioni di somma e moltiplicazione per uno scalare definite sopra è un $\mathbb{R}$-spazio vettoriale.

**Dimostrazione**  
Per esercizio.

**Esempio**  
Sia $\lambda = 3$, e sia

$$
A =
 \begin{pmatrix}
  1 & 2 & 3\\
  -3 & -2 & -1\\
 \end{pmatrix}
$$

$$
3 \cdot A =
 \begin{pmatrix}
  3 & 6 & 9\\
  -9 & -6 & -3\\
 \end{pmatrix}
$$

Consideriamo una matrice $2 \times 2$:

$$
A=
 \begin{pmatrix}
   3 & 1 \\
   -2 & 4
 \end{pmatrix}
$$

Ora consideriamo quattro matrici particolari:

$$
E :=
 \begin{pmatrix}
   1 & 0 \\
   0 & 0
 \end{pmatrix}
$$

$$
F :=
 \begin{pmatrix}
   0 & 1 \\
   0 & 0
 \end{pmatrix}
$$

$$
G :=
 \begin{pmatrix}
   0 & 0 \\
   1 & 0
 \end{pmatrix}
$$

$$
H :=
 \begin{pmatrix}
   0 & 0 \\
   0 & 1
 \end{pmatrix}
$$

Considero ora la seguente **combinazione lineare** di queste quattro matrici:

$$
3F + F - 2G + 4H =
\begin{pmatrix}
   3 & 1 \\
   -2 & 4
\end{pmatrix}
= A
$$

Questa costruzione si può ripetere qualsiasi sia la matrice $A$:

$$
A = a_{11} \cdot E + a_{12} \cdot F + a_{21} \cdot G + a_{22} \cdot H
$$

Le quattro matrici $E,F,G,H$ sono tali che ogni matrice si può scrivere come combinazione lineare di queste quattro matrici con opportuni coefficienti.

Diciamo che $E,F,G,H$ sono un **sistema di generatori** di $M_{2,2} (\mathbb{R})$.  

Notiamo che questo ragionamento può essere formulato allo stesso modo per qualsiasi insieme di matrici $M_{m.n} (\mathbb{R})$. Abbiamo quindi mostrato che:

**Proposizione**  
Consideriamo in $M_{m,n} (\mathbb{R})$ l'insieme delle $m \cdot n$ matrici costruite nel seguente modo: esse hanno tutte le entrate nulle fuorché una, la quale è uguale a 1; allora tale insieme è un *sistema di generatori* per $M_{m,n} (\mathbb{R})$.

Ritorniamo alla situazione delle matrici $2 \times 2$. La matrice nulla si può scrivere come combinazione lineare delle quattro matrici $E, F, G, H$.  

$$
0 \cdot E +
0 \cdot F +
0 \cdot G +
0 \cdot H =
\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix}
$$

Mi chiedo: esiste un'altra combinazione lineare di $E, F, G, H$ che restituisca la matrice nulla? Ovvero esistono costituenti, $e, f, g, h \in \mathbb{R}$ tali che non tutti gli $e, f, g, h$ sono nulli e vale:

$$
\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix}
= e \cdot E + f \cdot F + g \cdot G + h \cdot H
$$

Riusciamo a capire quali condizioni dobbiamo imporre a $e, f, g, h$ affinché la precedente uguaglianza sia vera?

$$
e \cdot E + f \cdot F + g \cdot G + h \cdot H =
\begin{pmatrix}
  e & 0 \\
  0 & 0
\end{pmatrix} +
\begin{pmatrix}
  0 & f \\
  0 & 0
\end{pmatrix} +
\begin{pmatrix}
  0 & 0 \\
  g & 0
\end{pmatrix} +
\begin{pmatrix}
  0 & 0 \\
  0 & h
\end{pmatrix} =
\begin{pmatrix}
  e & f \\
  g & h
\end{pmatrix}
$$

Quindi, affinché valga

$$
\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix}
= e \cdot E + f \cdot F + g \cdot G + h \cdot H
$$

deve valere

$$
\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix} =
\begin{pmatrix}
   e & f \\
   g & h
\end{pmatrix}
$$

quindi se e solo se

$e = 0,\ f = 0,\ g = 0,\ h = 0$

pertanto, l'unico modo di ottenere la matrice nulla come combinazione lineare delle matrici $E, F, G, H$, è prendere tutti e quattro i coefficienti nulli.

In questo caso diciamo che le quattro matrici sono **linearmente indipendenti**.  

Notiamo che tutti questi ragionamenti possono essere formulati anche per matrici $m \times n$.

**Osservazione**  
Se prendo

$$
A =
\begin{pmatrix}
   1 & 1 \\
   1 & 1
\end{pmatrix}
$$

$$
B =
\begin{pmatrix}
   2 & 2 \\
   2 & 2
\end{pmatrix}
$$

allora

$$
1 \cdot A + \Big(-\frac{1}{2} \Big) \cdot B =
\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix}
$$

abbiamo quindi ottenuto la matrice nulla come combinazione lineare delle matrici $A$ e $B$, cui coefficienti non sono tutti nulli, pertanto le matrici $A$ e $B$ non sono linearmente indipendenti.

Ritorniamo alla situazione delle matrici $2 \times 2$ e consideriamo il seguente insieme

$$
T_{2,2} (\mathbb{R}) := \{A \in M_{2,2} \in (\mathbb{R}) : a_{21} = 0\} = \left\lbrace
  \begin{pmatrix}
    a_{11} & a_{12} \\
    0 & a_{22}
  \end{pmatrix}
  \in M_{2,2}(\mathbb{R})
  : a_{11}, a_{12}, a_{22} \in \mathbb{R}
\right\rbrace
$$

Dunque
$\begin{pmatrix}
  1 & 2 \\
  0 & 1
\end{pmatrix}
\in T_{2,2} (\mathbb{R})$
, ma
$\begin{pmatrix}
  0 & 0 \\
  1 & 1
\end{pmatrix}
\notin T_{2,2} (\mathbb{R})$.

L'insieme $T_{2,2} (\mathbb{R})$ è l'insieme delle matrici $2 \times 2$ a coefficienti in $\mathbb{R}$ triangolari superiori. Notiamo che $T_{2,2} (\mathbb{R}) \subseteq M_{2,2} (\mathbb{R})$.

Vale che:

1: $\begin{pmatrix}
   0 & 0 \\
   0 & 0
\end{pmatrix}
\in T_{2,2} (\mathbb{R})$

2: Se $A,B \in T_{2,2} (\mathbb{R})$, allora

$$A =
\begin{pmatrix}
   a_{11} & a_{12} \\
   0 & a_{22}
\end{pmatrix},\ B =
\begin{pmatrix}
   b_{11} & b_{12} \\
   0 & b_{22}
\end{pmatrix}
$$

quindi

$$A + B =
\begin{pmatrix}
   a_{11} + b_{11} & a_{12} + b_{12} \\
   0 & a_{22} + b_{22}
\end{pmatrix}
$$

pertanto $A + B \in T_{2,2} (\mathbb{R})$.

3: Se $A \in T_{2,2} (\mathbb{R})$ e $\lambda \in \mathbb{R}$, allora

$$A =
\begin{pmatrix}
   a_{11} & a_{12} \\
   0 & a_{22}
\end{pmatrix}
$$

quindi

$$\lambda \cdot A =
\begin{pmatrix}
   \lambda \cdot a_{11} & \lambda \cdot a_{12} \\
   0 & \lambda \cdot a_{22}
\end{pmatrix}
$$

pertanto $\lambda \cdot A \in T_{2,2} (\mathbb{R})$.

Abbiamo verificato quindi che $T_{2,2} (\mathbb{R})$ è un sottoinsieme vettoriale di $M_{2,2} (\mathbb{R})$.

Notiamo che l'analogo di $T_{2,2} (\mathbb{R})$ per matrici $3 \times 3$ è

$$
T_{3,3} (\mathbb{R}) =
\left\lbrace
  \begin{pmatrix}
    a_{11} & a_{12} & a_{13} \\
    0 & a_{22} & a_{23} \\
    0 & 0 & a_{33}
  \end{pmatrix},
  \forall i, \forall j, a_{ij} \in \mathbb{R}
\right\rbrace
$$

**Definizione**  
Sia $A \in M_{n} (\mathbb{R})$; allora la **diagonale principale** è la parte di $A$ data dalle entrate di posto $i,i$ per $i \in \{1,2, \dots, n\}$.

**Definizione**
Siano $A,B \in M_{m,n} (\mathbb{R})$, definiamo la **trasposta** di $A$ come quella matrice, che indichiamo con ${}^tA$, che è un elemento di $M_{n,m} (\mathbb{R})$ determinato dalla seguente proprietà: l'entrata di posto $i,j$ di ${}^tA$ è uguale alla entrata di posto $j,i$ di $A$, ovvero

$({}^tA)_{ij} := A_{ji}$  

$\forall i \in \{1, \dots, n\}$  
$\forall j \in \{1, \dots, m\}$  

**Esempio**  
$$A =
\begin{pmatrix}
   1 & 2 & 3 \\
   -3 & -2 & -1
\end{pmatrix}
$$

$${}^tA =
\begin{pmatrix}
   1 & -3 \\
   2 & -2 \\
   3 & -1
\end{pmatrix}
$$

**Proposizione**  
Siano $A,B \in M_{m,n} (\mathbb{R})$, allora

1. $^t(A+B) =\ ^tA +\ ^tB$
2. $^t(\ ^tA) = A$

**Dimostrazione 1.**  
Notiamo che

$^t(A + B) \in M_{n,m} (\mathbb{R})$

$^tA \in M_{n,m} (\mathbb{R})$

$^tB \in M_{n,m} (\mathbb{R})$

Abbiamo dunque che sia a sinistra che a destra dell'uguale abbiamo matrici dello stesso tipo, dunque ha senso chiedersi se esse sono uguali.

per vedere che le due matrici sono uguali dimostriamo che tutte le loro entrate sono uguali, ovvero che

$\forall i \in \{1, \dots, n\}$  
$\forall j \in \{1, \dots, m\}$  

$(^t(A+B))_{ij} = (^tA +\ ^tB)_{ij}$

fissiamo $\forall i \in \{1, \dots, n\}$ e $\forall j \in \{1, \dots, m\}$, allora

$(^t(A+B))_{ij} = (A + B)_{ji} = A_{ji} + B_{ji}$

$(^tA +\ ^tB)_{ij} = (^tA)_{ij} + (^tB)_{ij} = A_{ji} + B_{ji}$

quindi le due quantità sono uguali.

$\square$

**Dimostrazione 2.**  
Notiamo

$^t(\ ^tA) \in M_{m,n} (\mathbb{R})$

$^tA \in M_{m,n} (\mathbb{R})$

dunque ha senso chiedersi se $^t(\ ^tA) = A$; per mostrarlo, dimostriamo che tutte le entrate di queste due matrici sono uguali, ovvero

$\forall i \in \{1, \dots, n\}$  
$\forall j \in \{1, \dots, m\}$  

$^t(\ ^tA)_{ij} = A_{ij}$

fissiamo $\forall i \in \{1, \dots, n\}$ e $\forall j \in \{1, \dots, m\}$, allora

$^t(\ ^tA)_{ij} = (^tA)_{ji} = A_{ij}$

$\square$

**Osservazione**  
Non ha sempre senso chiedersi se vale $A =\ ^tA$ perché queste due matrici in generale sono di tipo diverso; ha però senso chiederselo se la matrice è quadrata.

**Esempio**  
$$
\begin{pmatrix}
  1 & 2 & 3 \\
  2 & 4 & 5 \\
  3 & 5 & 6 \\
\end{pmatrix}
$$

Questa matrice soddisfa $A =\ ^tA$.

**Definizione**  
Sia $A \in M_{n} (\mathbb{R})$ (matrice quadrata); la matrice $A$ si dice **simmetrica** se vale $A =\ ^tA$; la matrice si dice **antisimmetrica** se vale  $A = -\ ^tA$.

**Esempio**  
$$
\begin{pmatrix}
  \begin{array}{rrr}
    0 & 2 & 3 \\
    -2 & 0 & 4 \\
    -3 & -4 & 0 \\
  \end{array}
\end{pmatrix}
$$

**Osservazione**  
Ogni matrice antisimmetrica ha la diagonale costituita da entrate tutte nulle.

**Nuova operazione**  
Ora introduciamo una nuova operazione fra matrici.

Consideriamo questa situazione:

costo unitario della pasta: $c_P = 1\$$  
costo unitario del latte: $c_L = 2\$$  
costo unitario delle uova: $c_U = 3\$$  

Supponiamo di dover acquistare $n_P, n_L, n_U$ unità di pasta, latte e uova.

Qual è il costo totale?

$c_P \cdot n_P + c_L \cdot n_L + c_U \cdot n_U$  

Facciamo una matrice $1 \times 3$ con i costi unitari e una matrice $3 \times 1$ con il numero delle unità.

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P & c_L & c_U \\
  \end{array}
\end{pmatrix},\
\begin{pmatrix}
  \begin{array}{rrr}
    n_P \\
    n_L \\
    n_U \\
  \end{array}
\end{pmatrix}
$$

Più in generale, se abbiamo una matrice riga $1 \times n$ e una matrice colonna $n \times 1$, definiamo il loro prodotto righe per colonne come:

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P & c_L & c_U
  \end{array}
\end{pmatrix}
\cdot
\begin{pmatrix}
  \begin{array}{rrr}
    n_P \\
    n_L \\
    n_U \\
  \end{array}
\end{pmatrix}
:=
c_p \cdot n_p + c_l \cdot n_l + c_u \cdot n_u
$$

Più in generale, se abbiamo una matrice riga $1 \times n$ e una matrice colonna $n \times 1$, definiamo il loro prodotto righe per colonne come:

$$
\begin{pmatrix}
  a_{11} & a_{12} & \dots & a_{1n}
\end{pmatrix}
\cdot
\begin{pmatrix}
  b_{11} \\
  b_{21} \\
  \vdots \\
  b_{n1}
\end{pmatrix}
:=
a_{11} \cdot b_{11} + a_{12} \cdot b_{21} + \dots + a_{1n} \cdot b_{n1} =
\displaystyle\sum_{k=1}^{n} a_{k1} \cdot b_{k1}
$$

Supponiamo che in un altro negozio valga

$c'_P = -3 \$$  
$c'_L = -2 \$$  
$c'_U = -1 \$$  

Per tenere sotto controllo i due totali di spesa potrei impacchettare le due righe dei costi unitari in un unica matrice.

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P & c_L & c_U \\
    c'_P & c'_L & c'_U \\
  \end{array}
\end{pmatrix}
\in M_{2,2} (\mathbb{R})
$$

Potrebbe essere ragionevole definire il prodotto di

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P & c_L & c_U \\
    c'_P & c'_L & c'_U \\
  \end{array}
\end{pmatrix}
\cdot
\begin{pmatrix}
  \begin{array}{rrr}
    n_P \\
    n_L \\
    n_U \\
  \end{array}
\end{pmatrix}
$$

come la matrice $2 \times 1$:

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P \cdot n_P + c_L \cdot n_L + c_U \cdot n_U \\
    c'_P \cdot n_P + c'_L \cdot n_L + c'_U \cdot n_U \\
  \end{array}
\end{pmatrix}
\in M_{2,1} (\mathbb{R})
$$

Ricapitolando, abbiamo moltiplicato una matrice $2 \times 3$ per una matrice $3 \times 1$ e abbiamo ottenuto una matrice $2 \times 1$. In altre parole, la matrice ottenuta dalla moltiplicazione è quella matrice le cui entrate sono date dalla moltiplicazione di ciascuna delle due righe della prima matrice con la colonna della seconda matrice.

In questo modo, se volessimo aggiungere una seconda colonna di quantitativi

$$
\begin{pmatrix}
  \begin{array}{rrr}
    n'_P \\
    n'_L \\
    n'_U \\
  \end{array}
\end{pmatrix}
$$

quella che andremo a ottenere è una situazione del tipo:

$$
\begin{pmatrix}
  \begin{array}{rrr}
    c_P & c_L & c_U \\
    c'_P & c'_L & c'_U \\
  \end{array}
\end{pmatrix}
\cdot
\begin{pmatrix}
  \begin{array}{rrr}
    n_P & n'_P \\
    n_L & n'_L \\
    n_U & n'_U \\
  \end{array}
\end{pmatrix} =
\begin{pmatrix}
  (c_P \cdot n_P + c_L \cdot n_L + c_U \cdot n_U) & (c_P \cdot n'_P + c_L \cdot n'_L + c_U \cdot n'_U) \\
  (c'_P \cdot n_P + c'_L \cdot n_L + c'_U \cdot n_U) & (c'_P \cdot n'_P + c'_L \cdot n'_L + c'_U \cdot n'_U) \\
\end{pmatrix}
$$

**Definizione**  
Sia $A \in M_{1,n} (\mathbb{R})$ e sia $B \in M_{n,1} (\mathbb{R})$; allora definiamo il prodotto $A \cdot B$ come il numero (o equivalentemente la matrice $1 \times 1$) dato da

$A \cdot B = a_{11} \cdot b_{11} + \dots + a_{1n} \cdot b_{n1} = \displaystyle\sum_{k=1}^{n} a_{k1} \cdot b_{k1}$

(questo è il prodotto di una riga per una colonna)

in generale, se $A \in M_{m,p} (\mathbb{R})$ e $B \in M_{p,n} (\mathbb{R})$, allora il prodotto $A \cdot B$ è la matrice $m \times n$ la cui entrata di posto $i,j$ è data da

$(A \cdot B)_{ij} = A_{(i)} \cdot B^{(j)} = a_{i1} \cdot b_{1j} + \dots + a_{ip} \cdot b_{pj} = \displaystyle\sum_{k=1}^{p} a_{ik} \cdot b_{kj}$

**Osservazione**  
Il prodotto tra due matrici $A$ e $B$ è definito solo se il numero di colonne di $A$ coincide con il numero di righe di $B$.

> Esempio moltiplicazione due matrici ($2 \times 3$ per $3 \times 2$ e $3 \times 3$ per $3 \times 2$).

**Definizione**  
Sia $n \in \mathbb{N}, n>0$, allora la matrice unità è quella matrice quadrata $n \times n$ le cui entrate sono tutte nulle, fuorché quella della diagonale principale, che sono tutte uguali a $1$; denotiamo questa matrice con $1_n$ oppure $I_n$ oppure $Id_n$.

quindi vale che

$(1_n)_{ij} := 0\ se\ i \neq j,\ 1\ se\ i = j$

> Esempio per vedere che $A \cdot B \neq B \cdot A$

**Proposizione**  
Siano $A, B \in M_{m,p}(\mathbb{R})$ e sia $C, D \in M_{p,n}(\mathbb{R})$,  
allora valgono le seguenti uguaglianze:

1. $(A+B) \cdot C = A \cdot C + B \cdot C$ (**proprietà distributiva a destra**)
2. $A \cdot (C + D) = A \cdot C + A \cdot D$ (**proprietà distributiva a sinistra**)

**Proposizione**  
Sia $A \in M_{m,p}(\mathbb{R})$, $B \in M_{p,q}(\mathbb{R})$ e $C \in M_{q,n}(\mathbb{R})$,  
allora vale che

$(A \cdot B) \cdot C = A \cdot (B \cdot C)$ (**proprietà associativa del prodotto**)

**Proposizione**  
Sia $A \in M_{m,p}(\mathbb{R})$ e $B \in M_{p,n}(\mathbb{R})$,  
allora

$\underbrace{{}^t(A \cdot B)}_{n \times m} \neq \underbrace{{}^t A}_{p \times m} \cdot \underbrace{{}^tB}_{n \times p}$

Le matrici ${}^tA \cdot {}^tB$ **non** si possono moltiplicare tra loro in generale (ne $m \neq n$).

Vale invece che

$\underbrace{{}^t(A \cdot B)}_{n \times m} = \underbrace{{}^tB}_{n \times p} \cdot \underbrace{{}^tA}_{p \times m}$

**Dimostrazione**  
Per mostrare che ${}^t (A \cdot B)$ è uguale a ${}^tB \cdot {}^tA$, mostriamo che tutte le loro entrate sono uguali: sta dunque $i \in \{1, \dots, n\}$ e sia $j \in \{1, \dots, m\}$; allora

$({}^t(A \cdot B))_{ij} = (A \cdot B)_{ji} = A_{(j)} \cdot B^{(i)}$

$({}^t B \cdot {}^tA)_{ij} = ({}^t B)_{(i)} \cdot ({}^t A)^{(j)} = A_{(j)} \cdot B^{(i)}$

questo mostra che le due matrici sono uguali.

**Proposizione**  
Sia $A \in M_{m,n}(\mathbb{R})$, allora  

$1_m \cdot A = A$ e $A \cdot 1_m = A$

**Osservazione**  
Nel caso delle matrici quadrate, la matrice unità $1_n$ funge dunque da elemento neutro per il prodotto righe per colonne:

per ogni $A \in M_{n}(\mathbb{R})$ vale che

$1_n \cdot A = A$ e $A \cdot 1_n = A$

**Osservazione**  
Nei numeri reali, dato $a \in \mathbb{R}$, diciamo che $b$ è inverso di $a$ se vale che $a \cdot b = b \cdot a = 1$; ogni numero reale non nullo ammette un unico inverso; l'inverso di $a \in \mathbb{R} \smallsetminus 0$ si denota $a^{-1}$.

**Definizione**  
Sia $A \in M_n(\mathbb{R})$; A si dice invertibile se esiste $B \in M_n(\mathbb{R})$ tale che valga:

$A \cdot B = B \cdot A = 1_n$

**Proposizione**  
Sia $A, B \in M_n (\mathbb{R})$, allora

1. se $A$ è invertibile, allora l'inversa di $A$ è unica
2. se $A$ e $B$ sono invertibili, allora anche $A \cdot B$ è invertibile e la sua inversa è $B^{-1} \cdot A^{-1}$

**Dimostrazione**  
1- siano $B, C$ entrambe inverse di $A$, allora

$A \cdot B = B \cdot A = 1_n$  
$A \cdot C = C \cdot A = 1_n$  

allora

$B = B \cdot 1_n = B \cdot (A \cdot C) = (B \cdot A) \cdot C = 1_n \cdot C = C$

2- mostriamo che $B^{-1} \cdot A^{-1}$ è inversa di $A \cdot B$ :

$(A \cdot B) \cdot (B^{-1} \cdot A^{-1}) = A \cdot (B \cdot B^{-1}) \cdot A^{-1} =
A \cdot 1_n \cdot A^{-1} = A \cdot A^{-1} = 1_n$

analogamente

$(B^{-1} \cdot A^{-1}) \cdot (A \cdot B) = B^{-1} \cdot (A^{-1} \cdot A) \cdot B = B^{-1} \cdot 1_n \cdot B = B^{-1} \cdot B = 1_n$

**Osservazione**
L'analogia tra invertibilità rispetto al prodotto di due numeri reali e l'invertibilità rispetto al prodotto righe per colonne di matrici *non* si estende fino al punto di dire che ogni matrice non nulla è invertibile.

**Esempio**  
Consideriamo la matrice $A \in M_{2}(\mathbb{R})$,

$$
A=
\begin{pmatrix}
  1 & 1 \\
  1 & 1
\end{pmatrix}
$$

mostriamo che $A$ non è invertibile; supponiamo che esiste un'inversa $B$

$$
B =
\begin{pmatrix}
  b_{11} & b_{12} \\
  b_{21} & b_{22}
\end{pmatrix}
$$

dovrebbe essere che

$$
A \cdot B =
\begin{pmatrix}
  \underline{1} & 0 \\
  \underline{0} & 1
\end{pmatrix}
$$

quindi in particolare

$$
(1 , 1) \cdot
\begin{pmatrix}
  b_{11} \\
  b_{21} \\
\end{pmatrix}
= 1
$$

ovvero $b_{11} + b_{21} = 1$

$$(1 , 1) \cdot
\begin{pmatrix}
  b_{11} \\
  b_{21} \\
\end{pmatrix}
= 0
$$

ovvero $b_{11} + b_{21} = 0$

e questo è impossibile perché implicherebbe $1 = 0$.

Fermiamoci un attimo! Se ci guardiamo indietro, vediamo che ogniqualvolta abbiamo usato i numeri reali, abbiamo solamente utilizzato le loro proprietà rispetto a somma e moltiplicazione. Queste  sono infatti le proprietà che lo rendono un campo.

**Definizione**  
Sia K un insieme su cui siano definite un'operazione di somma e una operazione di moltiplicazione, ovvero

$+ : K \times K \rightarrow K$  
$(a,b) \mapsto a + b$

$\cdot : K \times K \rightarrow K$  
$(a,b) \mapsto a \cdot b$

tale per cui siano soddisfatte le seguenti proprietà:

K1: commutatività:  
$\forall a, b \in K, a + b = b + a, a \cdot b = b \cdot a$  

K2: associatività:  
$\forall a, b, c \in K, (a + b) + c = a + (b + c), (a \cdot b) \cdot c = a \cdot (b \cdot c)$  

K3: esistenza dell'elemento neutro:  
$\exists 0 \in K$, tale che $\forall a \in K, a + 0 = 0 + a = a$  
$\exists 1 \in K$, tale che $\forall a \in K, a \cdot 1 = 1 \cdot a = a$  
e inoltre $0 \neq 1$

K4: esistenza di opposto e inverso:  
$\forall a \in K, \exists b \in K$, tale che $a + b = b + a = 0$  
(denotiamo $b$ con $-a$)  
$\forall a \in K \smallsetminus \{0\}, \exists c \in K$, tale che $a \cdot c = c \cdot a = 1$  
(denotiamo $c$ con $a^{-1}$ o con $1/a$)

K5: distributività: $\forall a, b, c \in K, a \cdot (b + c) = (a \cdot b) + (a \cdot c)$

un tale insieme si dice **campo**.

**Esempio**  
$\mathbb{Q}$ è un **campo**  
$\mathbb{R}$ è un **campo**  
$\mathbb{C}$ è un **campo**  
$\mathbb{N}$ non è un campo  
$\mathbb{Z}$ non è un campo  

**Osservazione**  
L'insieme delle funzioni razionali

$\{\frac{p}{q}, \text{p e q sono polinomi in una variabile}\}$

può essere dotata di somma e prodotto in modo da renderlo un campo.

**Esempio**  
L'insieme $\mathbb{Z}_2 = \{0, 1\}$ su cui definiamo una somma e un prodotto nel modo seguente

$+ : \mathbb{Z}_2 \times \mathbb{Z}_2 \rightarrow \mathbb{Z}_2$  
$(a,b) \mapsto a + b$

$\cdot : \mathbb{Z}_2 \times \mathbb{Z}_2 \rightarrow \mathbb{Z}_2$  
$(a,b) \mapsto a \cdot b$

| + | 0 | 1 |
| --- | --- | --- |
| 0 | 0 | 1 |
| 1 | 1 | 0 |

| $\cdot$ | 0 | 1 |
| --- | --- | --- |
| 0 | 0 | 0 |
| 1 | 0 | 1 |

è un campo.

Pertanto la precedente nozione di $\mathbb{R}$-spazio vettoriale sarà d'ora in poi sostituita da quella di $K$-spazio vettoriale, con $K$ un campo.

# Sistemi lineari

**Definizione**  
Sia $K$ un campo; un sistema di $m$ equazioni in $n$ incognite a coefficienti in $K$ è un sistema di equazioni della forma seguente

$a_{11}x_1 + a_{12}x_2 + \dots + a_{1n}x_n = b_1$  
$a_{21}x_1 + a_{22}x_2 + \dots + a_{2n}x_n = b_2$  
$\vdots$  
$a_{m1}x_1 + a_{m2}x_2 + \dots + a_{mn}x_n = b_m$  

dove ogni $a_{ij}$ è un elemento di $K$ per ogni $i \in \{1, \dots, m\}$, $j \in \{1, \dots, n\}$ e ogni $b$ è un elemento di $K$ per ogni $i \in \{1, \dots, m\}$; $x_1, \dots, x_n$ sono dette **incognite**, mentre gli elementi $b_1, \dots, b_m$ sono detti i **termini noti** e gli elementi $a_{ij}$ sono detti i **coefficienti** del sistema; una soluzione del sistema è una $n$-upla ordinata (che rappresentiamo come vettore colonna) $s \in K^n$, ovvero $s = \begin{pmatrix} s_1 \\ \vdots \\ s_n \end{pmatrix}$ con $s_i \in K$ tale per cui se per ogni $i \in \{1, \dots, n\}$ sostituiamo $x_i$ con $s_i$, allora tutte le uguaglianze del sistema saranno vere; il sistema si dice **omogeneo** se $b_1 = \dots = b_m = 0$, ovvero tutti i termini noti sono nulli; un sistema si dice **non omogeneo** se non è omogeneo; un sistema di dice **compatibile** se ammette almeno una soluzione; altrimenti si dice **incompatibile**.

**Osservazione**  
La $n$-upla nulla $\begin{pmatrix} 0 \\ \vdots \\ 0 \end{pmatrix}$ è sempre soluzione di un sistema omogeneo; pertanto ogni sistema omogeneo è compatibile.

**Definizione**  
Dato un sistema lineare come nella definizione precedente, denotiamo

$A = (a_{ij}) \in M_{m,n}(K)$  

$X = \begin{pmatrix} x_1 \\ \vdots \\ x_n \end{pmatrix}$

$b = \begin{pmatrix} b_1 \\ \vdots \\ b_m \end{pmatrix} \in M_{m,1}(K)$

allora il sistema precedente può essere scritto nella forma

$\underbrace{A}_{m \times n} \cdot \underbrace{X}_{n \times 1} = \underbrace{b}_{m \times 1}$

**Esempio**  
Consideriamo il sistema

$$
\left\lbrace
  \begin{array}{l}
    x_1 +2x_2 = 3 \\
    x_1 +2x_2 = 5 \\
  \end{array}
\right.
$$

$$
A =
\begin{pmatrix}
  1 & 2 \\
  1 & 2
\end{pmatrix}
,\
x =
\begin{pmatrix}
  x_1 \\
  x_2
\end{pmatrix}
,\
b =
\begin{pmatrix}
  3 \\
  5
\end{pmatrix}
$$

Il sistema **non è omogeneo**: almeno un termine noto non è nullo.  
Il sistema **è incompatibile**: infatti esso non ha soluzioni.

Se
$$
s = \begin{pmatrix}
  s_1 \\
  s_2 \\
\end{pmatrix}
$$
fosse una soluzione, allora verrebbe che:

$$
\left\lbrace
  \begin{array}{l}
    s_1 + 2s_2 = 3 \\
    s_1 + 2s_2 = 5 \\
  \end{array}
\right.
\Rightarrow
3 = 5
$$

Che è impossibile.

**Esempio**  
Consideriamo il sistema

$$
\left\lbrace
  \begin{array}{l}
    x_1 +2x_2 = 3\\
    x_1 -x_2 = 1 \\
  \end{array}
\right.
$$

Non è chiaro a priori se il sistema sia compatibile o meno.

Per sostituzione ottengo

$$
\left\lbrace
  \begin{array}{l}
    x_1 = \frac{5}{3} \\
    x_2 = \frac{2}{3} \\
  \end{array}
\right.
$$

Il sistema ha dunque un'unica soluzione

$$
s =
\begin{pmatrix}
  \frac{5}{3} \\
  \frac{2}{3}
\end{pmatrix}
$$

esso è quindi compatibile (è non omogeneo).

Il motivo per il quale siamo certi che ci sia un'unica soluzione è che per ottenere il sistema finale abbiamo trasformato il sistema iniziale tramite operazioni che non cambiano l'insieme delle soluzioni.

**Definizione**  
Due sistemi lineari si dicono **equivalenti** se ammettono le medesime soluzioni (ovvero gli insiemi delle soluzioni sono uguali).

**Esempio**  
Consideriamo il sistema:

$$
\left\lbrace
  \begin{array}{l}
    x_1 +2x_2 = 3 \\
    2x_1 + 4x_2 = 6 \\
  \end{array}
\right.
$$

$$
A =
\begin{pmatrix}
  1 & 2 \\
  2 & 4
\end{pmatrix}
,\
x =
\begin{pmatrix}
  x_1 \\
  x_2
\end{pmatrix}
,\
b =
\begin{pmatrix}
  3 \\
  6
\end{pmatrix}
$$

$x_1 = 3 - 2x_2$  
$2(3 - 2x_2) = 6 - 4x_2$  
$6 - 4x_2 + 4x_2 = 6$  
$6 = 6$ sempre vera per ogni $x_2$

Il sistema è pertanto equivalente ad un'unica equazione

$x_1 = 3 - 2x_2$

Le soluzioni di questa equazione si possono esprimere cosi:

se a $x_2$ assegno il valore $t \in \mathbb{R}$ allora a $x_1$ devo assegnare il valore $3 - 2t$, ovvero le soluzioni sono della forma

$$
\left\lbrace
  \begin{array}{l}
    \begin{pmatrix}
      3 -2t \\
      t
    \end{pmatrix}
    : t \in \mathbb{R}
  \end{array}
\right\rbrace
$$

vediamo che le soluzioni sono infinite;

$$
\begin{pmatrix}
  3 \\
  0
\end{pmatrix}
+
t
\begin{pmatrix}
  -2 \\
  1
\end{pmatrix}
$$

graficamente queste soluzioni corrispondono ai punti di una retta che passa per il punto $(3, 0)$.

## Teorema di Cramer

Consideriamo un sistema lineare con $n$ equazioni ad $n$ incognite

$AX = b$

ovvero la matrice $A$ è quadrata, $A \in M_{n}(K)$, supponiamo inoltre che $A$ sia invertibile, allora esiste un'unica soluzione del sistema ed essa è data da $s = A^{-1} \cdot b$.

**Osservazione**  
Questo teorema non ci dice soltanto che una soluzione esiste, ma ci fornisce anche un modo per calcolarla.

**Dimostrazione**  
Per dimostrare il teorema, dimostriamo due cose:

1. che $A^{-1} \cdot b$ è soluzione del sistema.
2. che $A^{-1} \cdot b$ è l'unica soluzione del sistema.

1- $A^{-1} \cdot b$ è soluzione del sistema se e solo se, se sostituiamo $X$ con $A^{-1} \cdot b$, otteniamo una uguaglianza vera nel sistema (notiamo che la sostituzione ha senso dato che $X$ è una matrice $n \times 1$ e $A^{-1} \cdot b$ è una matrice $n \times 1$).

$A \cdot (A^{-1} \cdot b) \stackrel{?}{=} b$  
$(A \cdot A^{-1}) \cdot b \stackrel{?}{=} b$  
$1_n \cdot b \stackrel{?}{=} b$  
$b = b$  
vero!

$\square$

Abbiamo verificato che l'uguaglianza è vera, dunque $A^{-1} \cdot b$ è soluzione del sistema, il quale è quindi compatibile.

2- per dimostrare che $A^{-1} \cdot b$ sia l'unica soluzione del sistema, supponiamo che ve ne sia un'altra, ovvero che $s' \in M_{n,1}(K)$ sia soluzione del sistema e mostriamo che deve essere $s' = A^{-1} \cdot b$

(ovvero mostriamo che dal fatto che $s'$ è soluzione del sistema, discende che $s'$ deve essere uguale a $A^{-1} \cdot b$)

abbiamo quindi supposto che

$A \cdot s' = b$

ora moltiplico entrambi i membri a sinistra per $A^{-1}$

$A^{-1} \cdot (A \cdot s') = A^{-1} \cdot b$  
$(A^{-1} \cdot A) \cdot s' = A^{-1} \cdot b$  
$1_n \cdot s' = A^{-1} \cdot b$  
$s' = A^{-1} \cdot b$  

Quindi $s' = A^{-1} \cdot b$.

$\square$

**Notazione**  
D'ora in poi andremo ad identificare i seguenti due spazi vettoriali:

$$
\begin{pmatrix}
  b_1 \\
  \vdots \\
  b_m
\end{pmatrix}
\in M_{m,1}(K),
\begin{pmatrix}
  b_1 \\
  \vdots \\
  b_m
\end{pmatrix}
\in K^m
$$

(**isomorfi**)

in questo senso, diremo ad esempio che un elemento $s \in K^n$ è soluzione di un sistema lineare $AX = b$.

## Teorema di struttura per sistemi lineari omogenei

Consideriamo un sistema lineare omogeneo di $m$ equazioni ad $n$ incognite

$AX = 0$

($0$ è la matrice $n \times 1$ con tutte le entrate nulle)

siano $s, s' \in K^n$ due soluzioni del sistema e sia $\lambda \in K$; allora

1. $s + s'$ è soluzione del sistema lineare
2. $\lambda s$ è soluzione del sistema lineare

pertanto ricordando che il vettore nullo $0 \in K^n$ è sempre soluzione del sistema omogeneo, otteniamo che l'insieme delle soluzioni di $AX = 0$, ovvero l'insieme

$\left\lbrace r \in K^n : A \cdot r = 0\right\rbrace$

è un sottospazio vettoriale di $K^n$.

**Osservazione**  
Vale che, se $A \in M_{n,m}(K)$ e $s \in K^n$ e $\lambda \in K$, allora $A \cdot (\lambda \cdot s) = \lambda \cdot (A \cdot s)$.

**Dimostrazione**  
1- Dato che $s, s'$ siano soluzioni, vale che

$A \cdot s = 0$ e $A \cdot s' = 0$

per mostrare che $s + s'$ è soluzione dobbiamo dimostrare che

$A \cdot (s + s') = 0$

$A \cdot (s + s') = A \cdot s + A \cdot s' = 0 + 0 = 0$

(il prodotto righe per colonne soddisfa la proprietà distributiva)

Quindi $s + s'$ è soluzione.

$\square$

2- Dato che $s$ è soluzione, vale che

$A \cdot s = 0$

per mostrare che $\lambda \cdot s$ è soluzione dobbiamo dimostrare che

A $\cdot (\lambda \cdot s) = 0$

A $\cdot (\lambda \cdot s) = \lambda \cdot (A \cdot s) = \lambda \cdot 0 = 0$

Quindi $\lambda \cdot s$ è soluzione.

$\square$

**Osservazione**  
Sia $A \in M_n (K)$ e $A$ invertibile;  
consideriamo il sistema lineare omogeneo

$AX = 0$

allora per il teorema di Cramer, $A^{-1} \cdot 0$ è l'unica soluzione del sistema  
e dato che $A^{-1} \cdot 0 = 0$ abbiamo che $0$ è l'unica soluzione di un tale sistema lineare omogeneo.

## Teorema di struttura per sistemi lineari qualsiasi/arbitrari

Consideriamo un sistema lineare  
$AX = b$ con $A \in M_{m,n}(K)$ e $b \in K^m$,  
e sia $\tilde{s}$ una sua soluzione;

allora un elemento $s \in K^n$ è soluzione di $AX = b$  
se e solo se possiamo scrivere $s = \tilde{s} + s_0$,  
dove $s_0$ è una soluzione del sistema lineare omogeneo $AX = 0$.

In altre parole, l'insieme delle soluzioni di $AX = b$ è l'insieme

$\left\lbrace s \in K^n : s = \tilde{s} + s_0\right\rbrace$ per $s_0$ soluzione di $AX = 0$

(il sistema $AX = 0$ si dice il sistema lineare omogeneo associato al sistema $AX = b$).

**Dimostrazione**  
$s \in K^n$ è soluzione di $AX = b$ $\iff$ $\exists s_0 \in K^n$ soluzione di $AX = 0$ tale che $s = \tilde{s} + s_0$

"$\Rightarrow$"  
supponiamo che $s$ sia soluzione di $AX = 0$

dobbiamo mostrare che esiste $s \in K^n$ soluzione di $AX = 0$ tale che $s = \tilde{s} + s_0$; definiamo $s_0 = s - \tilde{s}$; allora vale che $s = \tilde{s} + s_0$; ci resta da verificare che $s_0$ così ottenuto è soluzione del sistema lineare omogeneo associato; calcoliamo dunque $A \cdot s_0$ e verifichiamo che valga $0$:

$A \cdot s_0 = A(s - \tilde{s}) = As - A\tilde{s} = b - b = 0$

(per definizione; per la proprietà distributiva; per ipotesi)

$\square$

"$\Leftarrow$"  
supponiamo che $\exists s_0 \in K^n$ soluzione di $AX = 0$ tale che $s = \tilde{s} + s_0$; dobbiamo mostrare che $s$ è soluzione di $AX = b$; calcoliamo dunque $A \cdot s$ e verifichiamo che sia uguale a $b$.

$A \cdot s = A(\tilde{s} + s_0) = A\tilde{s} + A s_0 = b + 0 = b$

(per ipotesi; per la proprietà distributiva; per ipotesi)

$\square$

Quindi, data una soluzione particolare $\tilde{s}$ di $AX = b$, possiamo scrivere che l'insieme di tutte le soluzioni di $AX = b$ è

$\left\lbrace \tilde{s} + s_0 : s_0 \text{ soluzione di } AX = 0 \right\rbrace$

**Osservazione**  
Le soluzioni di $AX = b$ formano un sottospazio vettoriale di $K^n$ se e solo se $b = 0$. Infatti

"$\Rightarrow$"  
se le soluzioni di $AX = b$ sono un sottospazio vettoriale di $K^n$ allora $0 \in K^n$ è soluzione, dunque $A \cdot 0 = b$, pertanto $b = 0$.

"$\Leftarrow$"  
se $b = 0$, allora il sistema è omogeneo e la tesi segue dal teorema di struttura per sistemi lineari omogenei.

**Esempio**  
Consideriamo il sistema

$x + 2y -3z = -1$ con coefficienti in $\mathbb{Q}$

$$
A = \begin{pmatrix}
  1 & 2 & -3 \\
\end{pmatrix}
,\
X =
\begin{pmatrix}
  x \\
  y \\
  z \\
\end{pmatrix}
,\
b = (-1)
$$

consideriamo $\tilde{s} = \begin{pmatrix}
  -1 \\
  0 \\
  0 \\
\end{pmatrix}$ soluzione di $AX = b$

per calcolare tutte le soluzioni di $AX = b$,  
determiniamo tutte le soluzioni di $AX = b$, ovvero di  

$x +2y -3z = 0$

vediamo che il sistema $AX = 0$ è equivalente a

$x = -2y + 3z$

quindi possiamo assegnare un qualsiasi valore $u$ ad $y$ e un qualsiasi valore $v$ a $z$: quindi le soluzioni di $AX = 0$ si possono scrivere come

$$
\begin{pmatrix}
  -2u + 3v \\
  u \\
  v
\end{pmatrix}
$$

per $u, v \in \mathbb{Q}$

notiamo che

$$
\begin{pmatrix}
  -2u + 3v \\
  u \\
  v
\end{pmatrix} = u \cdot
\begin{pmatrix}
  -2 \\
  1 \\
  0
\end{pmatrix} + v \cdot
\begin{pmatrix}
  3 \\
  0 \\
  1
\end{pmatrix}
$$

Le soluzioni di $AX = b$ sono allora:

$$
\begin{pmatrix}
  -1 \\
  0 \\
  0
\end{pmatrix} + u \cdot
\begin{pmatrix}
  -2 \\
  1 \\
  0
\end{pmatrix} + v \cdot
\begin{pmatrix}
  3 \\
  0 \\
  1
\end{pmatrix}, u, v \in \mathbb{Q}
$$

Il nostro obbiettivo ora diventa essere in grado si risolvere un qualsiasi sistema lineare (omogeneo e non). Per cominciare, ci focalizziamo su un sottoinsieme particolare di sistemi lineari, i cosiddetti sistemi lineari a scala.

**Definizione**  
Sia $A \in M_{n,m}(K)$ e sia $r \in \left\{0, 1, \dots, m\right\}$ il numero di righe non nulle di $A$; diciamo che $A$ è una **matrice a scala** se:

- $r = 0$ (ovvero $A$ è una matrice nulla)
- $r > 0$ e vale che $A_{(i)} \neq (0, 0, \dots, 0), \forall i \in \left\lbrace 1, \dots, r\right\rbrace$ (ovvero le eventuali righe di $A$ sono "in basso") ed inoltre sia $\overline{j}$ l'indice della prima colonna non nulla e sia $\forall i \in \left\lbrace 1, \dots, r\right\rbrace$

$j_i = min \left\lbrace j : a_{ij}  \neq 0 \right\rbrace$

allora deve valere che $j_1 < j_2 < \dots < j_r$

(tutti questi valori sono maggiori o uguali di $\overline{j}$);  
gli elementi $a_{ij}$ sono detti elementi di **pivot**.

![esempi di matrici a scala](../img/esempi_matrice_a_scala.png){ width=350px }

**Proposizione**  
Sia $AX = b$ un sistema lineare dove $A \in M_{n,m}(K)$ e supponiamo che $A$ sia a scala, con $r$ righe non nulle; allora

$AX = b$ è compatibile (ovvero ammette almeno una soluzione) se e solo se $b_{r+1} = b_{r+2} = \dots = b_m = 0$

**Dimostrazione**  
"$\Rightarrow$"  
Sia $s \in K^n$ una soluzione, ovvero $s = \begin{pmatrix}
  s_1 \\
  s_2 \\
  \vdots \\
  s_m
\end{pmatrix}$ soddisfa $As = b$

per ipotesi, $A$ è a scala e dunque le righe $A_{(r + 1)},  \dots, A_{(m)}$ sono tutte nulle; le corrispondenti equazioni sono quindi

$$
\left\lbrace
  \begin{array}{l}
    0 \cdot x_1 + 0 \cdot x_2 + \dots + 0 \cdot x_n = b_{r+1} \\
    \vdots \\
    0 \cdot x_1 + 0 \cdot x_2 + \dots + 0 \cdot x_n = b_{m}
  \end{array}
\right. \Rightarrow
\left\lbrace
  \begin{array}{l}
    0 \cdot s_1 + 0 \cdot s_2 + \dots + 0 \cdot s_n = b_{r+1} \\
    \vdots \\
    0 \cdot s_1 + 0 \cdot s_2 + \dots + 0 \cdot s_n = b_{m}
  \end{array}
\right. \Rightarrow
\left\lbrace
  \begin{array}{l}
    b_{r+1} = 0 \\
    \vdots \\
    b_{m} = 0
  \end{array}
\right.
$$

"$\Leftarrow$"  
Supponiamo che $b_{r+1} = \dots = b_m = 0$, costruiamo una soluzione $s = \begin{pmatrix} s_1 \\ \vdots \\ s_n \end{pmatrix}$ di $AX = b$; dato che $A$ è a scala, le ultime righe di $A$ sono nulle e quindi le ultime equazioni del sistema sono del tipo $0 = 0$; l'ultima equazione non identicamente nulla è quella data dalla riga $r$-esima di $A$:

$0 \neq a_{r,j_{r}} \cdot x_{j_{r}} + a_{r,j_{r}+1} \cdot x_{j_{r}+1} + \dots + a_{r,n} \cdot x_{n} = b_{r}$

dove $a_{r,j_{r}} \neq 0$ perché abbiamo scelto $j_r$ e tale che  
$j_r = min \{j : a_{r,j} \neq 0\}$

![l'ultimo elemento di pivot](../img/ultimo_pivot.png){ width=300px }

a questo punto scegliamo valori $s_{j_{r + 1}}, \dots, s_n \in K$ a piacimento e definiamo

$s_{j_r} := \dfrac{b_{r} - (a_{r,j_{r}+1} \cdot s_{j_{r}+1} + \dots + a_{r,n} \cdot s_n)}{a_{r,j_r}}$

scegliendo i valori $s_{j_r}, \dots, s_n$ in questa, la soluzione che stiamo costruendo soddisferà l'ultima equazione:

consideriamo ora la penultima equazione non nulla:

$a_{r-1,j_{r-1}} \cdot x_{j_{r-1}} + a_{r-1,j_{r-1}+1} \cdot x_{j_{r-1}+1} + \dots + a_{r-1,n} \cdot x_{n} = b_{r-1}$

dato che $A$ è a scala. abbiamo che $j_{r-1} < j_{r}$

![il pivot della riga r-1 è minore di quello della riga r](../img/pivot_minore.png){ width=300px }

ora possiamo scegliere a nostro piacimento dei valori

$s_{j_{r-1}+1}, \dots, s_{j_{r}-1} \in K$

$s_{j_{r-1}} = \dfrac{b_{r-1} - (a_{r-1,j_{r-1}+1} \cdot s_{j_{r-1}+1} + \dots + a_{r-1,n} \cdot s_n)}{a_{r-1,j_{r-1}}}$

e in questa maniera abbiamo determinato valori $s_{j_{r-1}}, \dots, s_n$ in modo che la soluzione che otterremo soddisfi le ultime due equazioni non nulle.

A questo punto, ripetiamo lo stesso processo per tutte le altre righe.

$\square$

**Esempio**
$$
A = \begin{pmatrix}
  \begin{array}{rrrr}
    1 & -1 & 1 & 1 \\
    0 & -1 & 3 & 2 \\
    0 & 0 & 0 & 1 \\
    0 & 0 & 0 & 0 \\
  \end{array}
\end{pmatrix} \in M_{4,6}(\mathbb{R})
$$

$b_4$ deve essere $0$

$$
b = \begin{pmatrix}
  1 \\
  1 \\
  1 \\
  0
\end{pmatrix}
$$

Le equazioni non nulle sono:

$$
\left\lbrace
  \begin{array}{rrrrrrrl}
    x_1& - x_2& + x_3& + x_4& +2x_5& +x_6& =& 1 \\
    & - x_2& + 3x_3& + 2x_4& +x_5& -x_6& =& 1 \\
    & & & x_4& +2x_5& +x_6& =& 1
  \end{array}
\right.
$$

Partiamo dall'ultima equazione  
$x_4 = 1 - 2x_5 - x_6$

Scegliamo ad esempio $s_5 = 1$, $s_6 = 0$ e otteniamo  
$s_4 = 1 - 2s_5 - s_6 = -1$

Passiamo alla penultima equazione  
$x_2 = -1 + 3x_3 + 2x_4 + x_5 - x_6$

Scegliamo a piacere $s_3 = -1$, otteniamo  
$s_2 = -1 + 3s_3 + 2s_4 + s_5 - s_6 = -1 + 3(-1) + 2(-1) + 1 - 0 = -1 -3 -2 +1 = -5$

Ci resta la prima equazione  
$x_1 = 1 + x_2 - x_3 - x_4 - 2x_5 - x_6$

$s_1 = 1 + s_2 - s_3 - s_4 - 2s_5 - s_6 = 1 -5 -(-1) -(-1) -2(-1) - 0 = 1 -5 +1 +1 -2 = -4$

Perciò la soluzione del sistema $AX=b$ risulta

$$
s = \begin{pmatrix}
  -4 \\
  -5 \\
  -1 \\
  -1 \\
  1 \\
  0
\end{pmatrix}
$$

**Definizione**  
Siamo due sistemi lineari $AX = b$ e $A'X = b'$ con

$A \in M_{n,m}(K)$ e $b \in K^m$  
$A' \in M_{m',n}(K)$ e $b' \in K^{m'}$  

(quindi i due sistemi hanno lo steso numero di incognite, ma possono avere un numero diverso di equazioni)

si dicono **equivalenti** se hanno le medesime soluzioni.

**Definizione**  
Sia $AX = b$ un sistema lineare, allora la matrice ottenuta aggiungendo ad $A$ la colonna data da $b$, ovvero $(A|b)$ è detta la **matrice completa** del sistema $AX = b$.

**Esempio**  
Dato il sistema

$$
\left\lbrace
  \begin{array}{l}
    2x_1 + x_2 = 3 \\
    -x_1 + 2x_2 = 5
  \end{array}
\right.
$$

Le due matrici sono

$$
A = \begin{pmatrix}
  \begin{array}{rr}
    2 & -1 \\
    -1 & 2
  \end{array}
\end{pmatrix},\
b = \begin{pmatrix}
  3 \\
  5
\end{pmatrix}
$$

Quindi la matrice completa è

$$
(A|b) =
\begin{pmatrix}
  \begin{array}{rrr}
    2 & -1 & 3 \\
    -1 & 2 & 5
  \end{array}
\end{pmatrix}
$$

---

Introduciamo tre **operazioni elementari** che trasformano un sistema lineare in un sistema lineare equivalente:

**OE1**:  
Scambio di equazioni del sistema.  
Dati $i,j \in \{1, \dots, m\}$, scambiamo di posto la $i$-esima e l'equazione $j$-esima.
Equivale a scambiare due righe della matrice completa.

**OE2**:  
Moltiplicazione di un'equazione per uno scalare non nullo.  
Dati $i \in \{1, \dots, m\}$ e $\lambda \in K$, moltiplichiamo l'equazione $i$-esima per $\lambda$.  
Equivale a moltiplicare per $\lambda$ l'equazione $i$-esima della matrice completa.

**OE3**:  
Somma ad un'equazione un multiplo di un'altra equazione.  
Dati $i,j \in \{1, \dots, m\}$ e $\lambda \in K$, sommiamo all'equazione $i$-esima la $j$-esima equazione, dopo aver moltiplicato quest'ultima per $\lambda$.  
Equivale a sommare alla riga $i$-esima dalla matrice completa, $\lambda$ volte l'equazione $j$-esima.

**Proposizione**  
Se applichiamo a un sistema lineare $AX = b$ una delle tre operazioni elementari, OE1, OE2, OE3, otteniamo un sistema lineare equivalente.

Se mostriamo che possiamo trasformare un sistema lineare in uno equivalente a scala tramite queste tre operazioni, saremo quindi in grado si calcolare soluzioni di un qualsiasi sistema lineare.

## Algoritmo di Gauss (di gradinizzazione)

*Input*: matrice completa $(A|b)$ di un sistema lineare.  
*Output*: matrice completa $(\tilde{A}|\tilde{b})$ tale che $\tilde{A}$ è a scala e $\tilde{A}X = \tilde{b}$ è equivalente a $AX = b$.

$1)$ Determino $\overline{j}$ indice colonna minima per cui abbiamo una colonna non nulla di $A$.

$\overline{j} = min \left\lbrace j : A^{(j)} \neq 0\right\rbrace$

$$
A =
\begin{pmatrix}
  0 & 0 & \underline{*} & \dots & * \\
  0 & 0 & * & \dots & * \\
  0 & 0 & * & \dots & * \\
\end{pmatrix}
$$

$2)$ Determino un indice $\overline{i}$ tale per cui l'elemento $a_{ij}$ è non nullo (l'esistenza di un tale $\overline{i}$ dipende dalla scelta di $\overline{j}$).

$3)$ Scambio le righe $\overline{i}$ e $1$; in questo modo posso supporre che l'elemento $a_{1j}$ sia non nullo.

$$
\begin{pmatrix}
  0 & 0 & a_{1j} & * & * \\
  0 & 0 & \underline{*} & * & * \\
  0 & 0 & \underline{*} & * & * \\
\end{pmatrix}
$$

$4)$ Moltiplico la prima riga per $\frac{1}{a_{1j}}$.

$$
\begin{pmatrix}
  0 & 0 & 1 & * & * \\
  0 & 0 & \underline{*} & * & * \\
  0 & 0 & \underline{*} & * & * \\
\end{pmatrix}
$$

$5)$ Per ogni $i \in \{2, \dots, m\}$, sommo alla riga $i$-esima un opportuno multiplo della prima riga; più precisamente, sostituisco l'$i$-esima riga con

$A_{(i)} - a_{i\overline{j}} A_{(1)}$

$$
\begin{pmatrix}
  0 & 0 & 1 & * & * \\
  0 & 0 & 0 & * & * \\
  0 & 0 & 0 & * & * \\
\end{pmatrix}
$$

$6)$ Ripeto il procedimento precedente sulla sottomatrice con righe $\{2, \dots, m\}$ e colonne $\{\overline{j} + 1, \dots, n\}$.

$$
\begin{pmatrix}
  0 & 0 & 1 & * & * \\
  0 & 0 & 0 & \underline{*} & \underline{*} \\
  0 & 0 & 0 & \underline{*} & \underline{*} \\
\end{pmatrix}
$$

Questo algoritmo termina in un tempo finito e restituisce un risultato che rispetta le prescrizioni.della specificazione.

**Esempio**  

![esempio dell'algoritmo di Gauss](../img/esempio_gauss.png){width="500px"}

# Sistemi di generatori e indipendenza lineare

**Lemma**  
Sia $V$ uno spazio vettoriale su $K$; siano $U, W \in V$ sottospazi vettoriali; allora $U \cap W$ è uno sottospazio vettoriale di $V$.

**Dimostrazione**  
Verifichiamo che $U \cap W$ soddisfa le tre proprietà di sottospazio vettoriale:

1. mostriamo che $0 \in U \cap W$; dato che $U$ e $W$ sono sottospazi vettoriali, allora $0 \in U$ e $0 \in W$; quindi $0 \in U \cap W$.  
2. mostriamo che se $v_1, v_2 \in U \cap W$, allora $v_1 + v_2 \in U \cap W$; supponiamo che $v_1, v_2 \in U \cap W$; allora $v_1, v_2 \in U$ e $v_1, v_2 \in W$; dato che $U$ e $W$ sono sottospazi vettoriali, allora $v_1 + v_2 \in U$ e $v_1 + v_2 \in W$; quindi $v_1 + v_2 \in U \cap W$.
3. mostriamo che se $v \in U \cap W$ e $\lambda \in K$, allora $\lambda \cdot v \in U \cap W$; consideriamo quindi $\lambda \in K$ e $v \in U \cap W$; allora $v \in U$ e $v \in W$; dato che $U$ e $W$ sono sottospazi vettoriali, allora $\lambda \cdot v \in U$ e $\lambda \cdot v \in W$; quindi $\lambda \cdot v \in U \cap W$.

**Osservazione**  
Non è vero che se $V$ è spazio vettoriale su $K$ e $U, W \in V$ sono sottospazi vettoriali, allora $U \cup W$ è uno sottospazio vettoriale di $V$ (non soddisfa la somma).

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$; siano $U, W \in V$ sottospazi vettoriali; definiamo:

$U + W = \{u + w : u \in U, w \in W\}$

e chiamiamo questo insieme il sottospazio vettoriale somma di $U$ e $W$.

**Lemma**  
$U + W$ è uno sottospazio vettoriale di $V$.

**Dimostrazione**  
Per esercizio.

**Lemma**  
Con la notazione precedente, vale che $U \subseteq U + W$ e $W \subseteq U + W$.

**Dimostrazione**  
Mostrare che $U \subseteq U + W$ significa mostrare che $\forall u \in U$, vale che $u \in U + W$ (e analogamente per gli elementi di $W$); per farlo, dato $u \in U$, dobbiamo mostrare che $u$ si può scrivere come somma di un elemento di $U$ e di un elemento di $W$; ora $u = u + 0$ quindi $u \in U + W$.

**Corollario**  
$U \cup W \in U + W$; inoltre si può dimostrare che $U + W$ è il più piccolo sottospazio di $V$ che contiene $U \cup W$.

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$; siano $v_1, \dots, v_n \in V$; allora una **combinazione lineare** di $v_1, \dots, v_n$ è un qualsiasi vettore della forma $\lambda_1 \cdot v_1 + \dots + \lambda_n \cdot v_n$, dove $\lambda_1, \dots, \lambda_n \in K$.

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$ e siano $v_1, \dots, v_n \in V$; definiamo  
$span(v_1, \dots, v_n) := \{\lambda_1 \cdot v_1 + \dots + \lambda_n \cdot v_n : \lambda_1, \dots, \lambda_n \in K\}$ = {combinazioni lineari di $v_1, \dots, v_n$}

**Lemma**  
$span(v_1, \dots, v_n)$ è uno sottospazio vettoriale di $V$.

**Dimostrazione**  
$1)$ $0 = 0 \cdot v_1 + \dots + 0 \cdot v_n$, dunque $0 \in span(v_1, \dots, v_n)$

$2)$ siano $u, w \in span(v_1, \dots, v_n)$, dobbiamo mostrare che $u + w \in span(v_1, \dots, v_n)$; per ipotesi $u = \displaystyle\sum_{i = 1}^n \lambda_i v_i$, con $\lambda_i \in K$ e $W = \displaystyle\sum_{i = 1}^n \mu_i w_i$, con $\mu_i \in K$; allora $u + w = \displaystyle\sum_{i = 1}^n (\lambda_i + \mu_i) v_i$, dunque $u + w \in span(v_1, \dots, v_n)$

$3)$ siano $u \in span(v_1, \dots, v_n)$ e $\lambda \in K$, devo mostrare che $\lambda \cdot u \in span(v_1, \dots, v_n)$; per ipotesi $u = \lambda \cdot v_1 + \dots + \lambda \cdot v_n$, con $\lambda \in K$; allora $\lambda \cdot u = (\lambda \cdot \lambda_1) \cdot v_1 + \dots + (\lambda \cdot \lambda_n) \cdot v_n$, dunque $\lambda \cdot u \in span(v_1, \dots, v_n)$

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$ e sia $U \in V$ uno sottospazio vettoriale; un insieme di elementi $\{u_1, \dots, u_n\} \subseteq U$ si dicono un **sistema di generatori** di/per $U$ se ogni vettore $u \in U$ è combinazione lineare di $u_1, \dots, u_n$; equivalentemente $\{u_1, \dots, u_n\}$ è un sistema di generatori di $U$ se e solo se $span(u_1, \dots, u_n) = U$.

**Osservazione**  
Se $\{u_1, \dots, u_n\}$ è un sistema di generatori di uno sottospazio vettoriale $U$, allora per ogni $u \in U$ vale che $\{u_1, \dots, u_n, u\}$ è anch'esso un sistema di generatori di $U$.

**Definizione**  
Sia $V$ uno spazio vettoriale e siano $v_1, \dots, v_n \in V$; gli elementi $v_1, \dots, v_n$ si dicono **linearmente dipendenti** se possiamo scrivere $0 \in V$ come una combinazione lineare di $v_1, \dots, v_n$ in cui non tutti i coefficienti in $K$ sono nulli, ovvero se vale che $0 = \lambda_1 \cdot v_1 + \dots + \lambda_n \cdot v_n$, con $\lambda_1, \dots, \lambda_n \in K$ non tutti nulli.

**Proposizione**  
Sia $V$ uno spazio vettoriale su $K$ e siano $v_1, \dots, v_n \in V$; allora $v_1, \dots, v_n$ si sono **linearmente dipendenti** se e solo se uno di essi può essere scritto come combinazione lineare degli altri [equivalentemente, se e solo se esiste $j \in \{1, \dots, n\}$ tale che $v_j \in span(v_1, \dots, v_ {j - 1}, v_{j + 1}, \dots, v_n)$, indicato anche come $span(v_1, \dots, \hat{v}_j, \dots, v_n)$\].

**Dimostrazione**  
"$\Rightarrow$"  
Supponiamo che $v_1, \dots, v_n$ siano linearmente dipendenti; allora $\lambda_1 \cdot v_1 + \dots + \lambda_n \cdot v_n = 0$ con $\lambda_1, \dots, \lambda_n \in K$ non tutti nulli; allora esiste $j \in \{1, \dots, n\}$ tale che $\lambda_j \neq 0$, allora vale che  
$-\lambda_j \cdot v_j = \lambda_1 \cdot v_1 + \dots + \lambda_{j - 1} \cdot v_{j - 1} + \lambda_{j + 1} \cdot v_{j + 1} + \dots + \lambda_n \cdot v_n$  
e quindi  
$v_j = \Big(-\dfrac{\lambda_1}{\lambda_j}\Big) \cdot v_1 + \dots + \Big(-\dfrac{\lambda_{j - 1}}{\lambda_j}\Big) \cdot v_{j - 1} + \dots + \Big(-\dfrac{\lambda_{j + 1}}{\lambda_j}\Big) \cdot v_{j + 1} + \dots + \Big(-\dfrac{\lambda_n}{\lambda_j}\Big) \cdot v_n$  
ovvero $v_j \in span(v_1, \dots, \hat{v}_j, \dots, v_n)$

"$\Leftarrow$"  
Supponiamo che esista un $j \in \{1, \dots, n\}$ tale che $v_j \in span(v_1, \dots, \hat{v}_j, \dots, v_n)$; allora  
$v_j = \mu_1 \cdot v_1 + \dots + \mu_{j - 1} \cdot v_{j - 1} + \mu_{j + 1} \cdot v_{j + 1} + \dots + \mu_n \cdot v_n$  
allora  
$\mu_1 \cdot v_1 + \dots + \mu_{j - 1} \cdot v_{j - 1} + v_j + \mu_{j + 1} \cdot v_{j + 1} + \dots + \mu_n \cdot v_n = 0$  
e il coefficiente di $v_j$ è $1$, dunque è diverso da zero, pertanto $v_1, \dots, v_n$ sono linearmente dipendenti.

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$ e siano $v_1, \dots, v_n \in V$; diciamo che $v_1, \dots, v_n$ sono **linearmente indipendenti** se non sono linearmente dipendenti; equivalentemente $v_1, \dots, v_n$ sono linearmente indipendenti se e solo se l'unico modo di scrivere $0$ come combinazione lineare di $v_1, \dots, v_n$ è quello di usare tutti i coefficienti nulli; equivalentemente, $v_1, \dots, v_n$ sono linearmente indipendenti se, dal supporre che valga $\lambda_1 \cdot v_1 + \dots + \lambda_n \cdot v_n = 0$, discende che $\lambda_1 = 0, \dots, \lambda_n = 0$.

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$ e sia $U \subseteq V$ un sottospazio vettoriale; una **base** di $U$ è un insieme di vettori $u_1, \dots, u_n \in U$ tali che:  

1. $\{u_1, \dots, u_n\}$ sono un sistema di generatori di $U$
2. $\{u_1, \dots, u_n\}$ sono linearmente indipendenti

# Basi di spazi vettoriali

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$; se esiste un sistema di generatori $\{v_1\ \dots, v_n\}$ finito di $V$, allora $V$ si dice **finitamente generato**.

**Teorema**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato; un sottoinsieme $B \subseteq V$, $B = \{v_1\ \dots, v_n\}$ è una base di $V$ se e solo se $v \in V$ si può scrivere in modo unico come combinazione lineare di $B$.

**Dimostrazione**  
"$\Rightarrow$"  
Sia $B$ una base di $V$, devo dimostrare che ogni $v \in V$ si può scrivere come combinazione lineare di $B$ in modo unico; sia $v \in V$; dato che $B$ è in particolare un sistema di generatori per $V$, allora $v$ si scrive come combinazione lineare di $B$, $v = \lambda v_1 + \dots + \lambda v_n$, dobbiamo mostrare l'unicità di tale scrittura; supponiamo che ne esista un'altra

$v = \mu_1 v_1 + \dots + \mu_n v_n, \mu_i \in K$

allora $\lambda_1 v_1 + \dots + \lambda_n = \mu_1 v_1 + \dots + \mu_n v_n$, pertanto

$(\lambda_1 + \mu_1) v_1 + \dots + (\lambda_n + \mu_n) v_n = 0$

questa è una combinazione lineare nulla di $v_1, \dots, v_n$; dato che $B$ è linearmente indipendente, l'unica possibilità è che valga

$\lambda_1 - \mu_1 = \dots = \lambda_n - \mu_n = 0$ se e solo se $\lambda_1 = \mu_1, \dots, \lambda_n = \mu_n$

il che prova l'unicità della scrittura.

"$\Leftarrow$"

supponiamo che ogni $v \in V$ si scriva come unica combinazione lineare di $B$; allora in particolare $B$ è un sistema di generatori per $V$; dimostriamo che gli elementi di $B$ sono linearmente indipendenti; per farlo, supponiamo che esista una combinazione lineare nulla di $v_1, \dots, v_n$

$\lambda_1 v_1 + \dots + \lambda_n v_n = 0$

d'altra parte, possiamo scrivere $0 = 0 \cdot v_1 + \dots + 0 \cdot v_n$; dato che la scrittura di $0$ come combinazione lineare di $\{v_1, \dots, v_n\}$ è unica, discende che $\lambda_1 = \dots = \lambda_n = 0$, ovvero che $v_1, \dots, v_n$ sono linearmente indipendenti.

**Definizione**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato; sia $B = \{v_1\ \dots, v_n\}$ una base di $V$ e sia $v \in V$; allora possiamo scrivere $v = \lambda_1 v_1 + \dots + \lambda_n v_n$ in modo unico con $\lambda_1, \dots, \lambda_n \in K$; gli scalari $\lambda_1, \dots, \lambda_n$ sono detti le **coordinate** di $V$ rispetto a $B$.

**Esempi**  
In $K^n$ possiamo considerare

$$
B =
\left\lbrace
  \begin{pmatrix}
    1 \\
    0 \\
    \vdots \\
    0
  \end{pmatrix},
  \begin{pmatrix}
    0 \\
    1 \\
    \vdots \\
    0
  \end{pmatrix},
  \dots,
  \begin{pmatrix}
    0 \\
    0 \\
    \vdots \\
    1
  \end{pmatrix}
\right\rbrace
$$

si può dimostrare che $B$ è una base di $K^n$; tale base è chiamata la **base standard** di $K^n$; per ogni vettore

$$
v =
\begin{pmatrix}
  v_1 \\
  v_2 \\
  \vdots \\
  v_n
\end{pmatrix}
$$

le coordinate di $v$ rispetto alla base standard sono $v_1, \dots, v_n$

**Esempio**  
In $M_{m, n}(K)$ possiamo considerare

$$
B =
\left\lbrace
  \begin{pmatrix}
    1 & 0 & 0 & \dots \\
    0 & 0 & 0 & \dots \\
    0 & 0 & 0 & \dots \\
    \vdots & \vdots & \vdots & \ddots
  \end{pmatrix},
  \begin{pmatrix}
    0 & 1 & 0 & \dots \\
    0 & 0 & 0 & \dots \\
    0 & 0 & 0 & \dots \\
    \vdots & \vdots & \vdots & \ddots
  \end{pmatrix},
  \dots,
  \begin{pmatrix}
    \ddots & \vdots & \vdots & \vdots \\
    \dots & 0 & 0 & 0 \\
    \dots & 0 & 0 & 0 \\
    \dots & 0 & 0 & 1
  \end{pmatrix}
\right\rbrace
$$

si può dimostrare che $B$ è una base di $M_{m, n}(K)$.

**Osservazione**  
In $K^n$, l'essere un sistema di generatori può essere parafrasato in termini di sistemi lineari; infatti, se $\{v_1, \dots, v_n\} \subseteq K^n$ è un sistema di generatori,
allora per ogni $v \in K^n$ esistono $\lambda_1, \dots, \lambda_n \in K$ tali che $v = \lambda_1 v_1 + \dots + \lambda_n v_n$.

Scriviamo

$$
v_1 =
\begin{pmatrix}
  a_{11} \\
  a_{12} \\
  \vdots \\
  a_{1n}
\end{pmatrix},
\dots,
v_s =
\begin{pmatrix}
  a_{s1} \\
  a_{s2} \\
  \vdots \\
  a_{sn}
\end{pmatrix},
v =
\begin{pmatrix}
  b_1 \\
  b_2 \\
  \vdots \\
  b_n
\end{pmatrix}
$$

allora l'essere $v$ una combinazione lineare di $v_1 \dots, v_n$ equivale ad avere

$$
\left\lbrace
  \begin{array}{l}
    \lambda_1 a_{11} + \dots + \lambda_s a_{s1} = b_1 \\
    \vdots \\
    \lambda_1 a_{s1} + \dots + \lambda_n a_{sn} = b_n
  \end{array}
\right.
$$

quindi $v$ è una combinazione lineare di $v_1, \dots, v_n$ se e solo se il sistema lineare

$$
\begin{pmatrix}
  a_{11} & \dots & a_{s1} \\
  \vdots & \ddots & \vdots \\
  a_{1n} & \dots & a_{sn}
\end{pmatrix}
\begin{pmatrix}
  \lambda_1 \\
  \vdots \\
  \lambda_n
\end{pmatrix} =
\begin{pmatrix}
  b_1 \\
  \vdots \\
  b_n
\end{pmatrix}
$$

è compatibile, ovvero ammette una soluzione.

Analogamente, anche l'essere linearmente indipendenti può essere parafrasato in termini di sistemi lineari: con la notazione precedente, $v_1, \dots, v_n$ sono linearmente indipendenti se e solo se il sistema lineare omogeneo dato da:

$$
\begin{pmatrix}
  a_{11} & \dots & a_{s1} \\
  \vdots & \ddots & \vdots \\
  a_{1n} & \dots & a_{sn}
\end{pmatrix}
\begin{pmatrix}
  \lambda_1 \\
  \vdots \\
  \lambda_n
\end{pmatrix} =
\begin{pmatrix}
  0 \\
  \vdots \\
  0
\end{pmatrix}
$$

ammette come unica soluzione la soluzione nulla:

$$
\left\lbrace
  \begin{array}{l}
    \lambda_1 = 0 \\
    \vdots \\
    \lambda_s = 0
  \end{array}
\right.
$$

---

Consideriamo alcuni importanti risultati riguardo alle basi.

**Teorema (di estrazione di una base)**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato; sia $\{v_1, \dots, v_k\}$ un sistema di generatori di $V$; allora esiste $B \subseteq \{v_1, \dots, v_k\}$ tale che $B$ è una base di $V$.

**Dimostrazione**  
(idea) costruiamo questa base $B$ in maniera algoritmica e possiamo supporre che $V \neq \{0\}$ (perché il caso $V = \{0\}$ è di facile dimostrazione), useremo l'**algoritmo dello scarto**:

1. inizializziamo $B = \{\}$
2. consideriamo $v_1$; se $v_1 = 0$, non facciamo nulla; se $v_1 \neq 0$, aggiungiamo $v_1$ a $B$
3. consideriamo $v_2$; se $v_2 \in span(v_1)$, lo scartiamo; altrimenti lo aggiungiamo a $B$
4. consideriamo $v_3$; se $v_3 \in span(v_1, v_2)$, lo scartiamo; altrimenti lo aggiungiamo a $B$
5. $\dots$

otteniamo un sottoinsieme di $\{v_1, \dots, v_k\}$ che si può dimostrare essere una base di $V$.

**Teorema (del completamento o dell'estensione)**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato e siano $\{v_1, \dots, v_p\}$ vettori linearmente indipendenti; allora esiste una base $B$ di $V$ tale che $\{v_1, \dots, v_p\} \subseteq span(B)$ (ovvero $\{v_1, \dots, v_p\}$ possono essere completati a una base di $B$).

**Dimostrazione**  
(idea) dato che $B$ è finitamente limitato, esiste $\{w_1, \dots, w_r\}$ un sistema di generatori finito di $V$; allora $\{v_1, \dots, v_p\, w_1, \dots, w_r\}$ è anch'esso un sistema di generatori per $V$; ora applico a quest'ultimo insieme l'algoritmo dello scarto, ottenendo una base $B$ di $V$; per come è fatto l'algoritmo dello scarto e dato che $v_1, \dots, v_p$ sono linearmente indipendenti per ipotesi, essi saranno sempre scelti dall'algoritmo, e pertanto avremmo che $\{v_1, \dots, v_p\} \subseteq B$.

---

I due teoremi precedenti ci fanno capire perché le basi possono essere equivalentemente caratterizzate come sistemi di generatori minimali oppure come insiemi linearmente indipendenti massimali.

**Lemma (di Steinitz)**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato e sia $B = \{v_1, \dots, v_n\}$ una base di $V$; allora per ogni $k>n$ e per ogni scelta di vettori $w_1, \dots, w_k \in V$ vale che $w_1, \dots, w_k$ sono linearmente dipendenti.

**Dimostrazione**  
(idea) per ipotesi vale che

$w_1 = c_{11} v_1 + \dots + c_{n1} v_n$  
$w_2 = c_{12} v_1 + \dots + c_{n2} v_n$  
$\vdots$  
$w_k = c_{1k} v_1 + \dots + c_{nk} v_n$

si può dimostrare che, se definiamo

$$
C =
\left\lbrace
  \begin{pmatrix}
    c_{11} & \dots & c_{1k} \\
    \vdots & \ddots & \vdots \\
    c_{n1} & \dots & c_{nk}
  \end{pmatrix}
\right\rbrace
$$

allora $w_1, \dots, w_k$ sono linearmente dipendenti se e solo se il sistema lineare omogeneo $C \cdot X = 0$ ammette una soluzione non tutta nulla; osserviamo la matrice $C$; essa ha $n$ righe e $k$ colonne; per ipotesi $k>n$, quindi ci sono più colonne che righe; se, tramite l'algoritmo di gradinizzazione di Gauss portiamo $C$ nella forma a scala, otterremo dunque una matrice del tipo:

$$
\tilde{C} =
\begin{pmatrix} * & * & * & \dots & * \\
  0 & * & * & \dots & * \\
  0 & 0 & * & \dots & * \\
  0 & 0 & 0 & \dots & * \\
  \vdots & \vdots & \vdots & \ddots & \vdots \\
  0 & 0 & 0 & \dots & 0
\end{pmatrix}
$$

dato che si sono più colonne che righe, almeno uno di questi scalini sarà lungo più di $1$, il che significa che almeno un'incognita nel sistema lineare può essere scelta liberamente e quindi in particolare può essere scelta non nulla, determinando dunque una soluzione non tutta nulla dell'equazione.

**Teorema**  
Sia $V$ uno spazio vettoriale su $K$ finitamente generato; siano $\{v_1, \dots, v_n\}$ e $\{w_1, \dots, w_m\}$ due basi di $V$; allora $n = m$.

(equivalentemente due basi di uno spazio vettoriale su $K$ finitamente generato, hanno lo stesso numero di elementi)

**Dimostrazione**  
Dato che $\{v_1, \dots, v_n\}$ è una base di $V$, allora deve essere $m \leq n$ per il lemma di Steinitz (perché altrimenti $\{w_1, \dots, w_m\}$ non sarebbero linearmente indipendenti); dal momento che $\{w_1, \dots, w_m\}$ è una base di $V$, allora deve essere $n \leq m$ per il lemma di Steinitz (perché altrimenti $\{v_1, \dots, v_n\}$ non sarebbero linearmente indipendenti); quindi $n = m$.

# Dimensione e rango

**Definizione**
Sia $V$ uno spazio vettoriale su $K$ finitamente generato

- se $V = \{0\}$, definiamo la dimensione di $V$ come $0$
- se $V \neq \{0\}$ definiamo la dimensione di $V$ come il numero di elementi di una sua qualsiasi base

indichiamo la dimensione di $V$ con $dim_k V$ (o anche $dim V$).

**Esempio**  
$dimR^2 = 2$ (infatti $\left\lbrace \begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1\end{pmatrix}\right\rbrace$ è base di $R^2$)  
$dim_k K^2 = 2$  
$dim_k K^n = n$  
$dim_k M_{m,n}(K) = m \cdot n$ (una base è data dalle matrici con una sola entrata uguale a $1$ e tutte le altre uguali a $0$)

**Osservazione**  
Il concetto di dimensione si applica anche ai sottospazi vettoriali di uno spazio vettoriale.

**Proprietà**  
Sia $V$ uno spazio vettoriale finitamente generato; sia $W \subseteq V$ un sottospazio vettoriale allora:

1. $dim W \leq dim V$
2. $dim W = dim V \iff W = V$

---

Con la dimensione abbiamo associato un numero ad uno spazio vettoriale finitamente generato. Tramite questa nozione, associamo un numero a una matrice.

**Osservazione**  
Se $A \in M_{m,n}(K)$, allora le colonne di $A$ sono elementi di $K^m$.

$A^{(1)}, \dots, A^{(m)} \in K^m$

**Definizione**  
Sia $A \in M_{m,n}(K)$; definiamo il **rango** di $A$, e lo denotiamo $rg(A)$.

Il numero naturale

$rg(A) = dim(span(A^{(1)}, \dots, A^{(m)})$)

**Osservazione**  
Se $A \in M_{m,n}(K)$, allora

- $rg(A) \leq m$
- $rg(A) \leq n$

**Osservazione**  
Se $A \in M_{m,n}(K)$, allora

- $rg(A) \leq m$, infatti $A^{(1)}, \dots, A^{(m)} \in K^m$, dunque $span(A^{(1)}, \dots, A^{(m)}) \subseteq K^{m}$, dunque $dim(span(A^{(1)}, \dots, A^{(m)})) \leq dim(K^m)$
- $rg(A) \leq n$, infatti $A^{(1)}, \dots, A^{(n)}$ ha $n$ generatori, pertanto una base $span(A^{(1)}, \dots, A^{(n)})$ ha al più $n$ generatori, quindi $dim(span(A^{(1)}, \dots, A^{(n)})) \leq n$

quindi $rg(A) \leq min\{m, n\}$

**Esempio**  
Consideriamo

$$
A =
\begin{pmatrix}
  2 & 1 & 3 \\
  1 & 0 & -1
\end{pmatrix}
$$

$rg(A) = dim(span(\begin{pmatrix} 2 \\ 1 \end{pmatrix}, \begin{pmatrix} 1 \\ 0 \end{pmatrix}, \begin{pmatrix} 3 \\ -1 \end{pmatrix}))$

vale che $rg(A) \leq min\{2, 3\} = 2$

se fosse $rg(A) = 1$, allora tutte le colonne sarebbero proporzionali tra loro (ovvero ottenibili una dall'altra tramite moltiplicazione per uno scalare), ma questo non è il caso di $A$. pertanto $rg(A) = 2$.

**Esempio**  
Qual è il rango della matrice unità?

$rg(1_n) = dim(span(\begin{pmatrix} 1 \\ 0 \\ \vdots \\ 0 \end{pmatrix}, \begin{pmatrix} 0 \\ 1 \\ \vdots \\ 0 \end{pmatrix}, \dots, \begin{pmatrix} 0 \\ 0 \\ \vdots \\ 1 \end{pmatrix})) = dim(K^n) = n$

**Proposizione**  
Sia $A \in M_{m,n}(K)$ e sia $\tilde{A}$ una matrice ottenuta da $A$ applicando le $3$ operazioni elementari $OE1$, $OE2$ e $OE3$; allora

1. $rg(\tilde{A}) = rg(A)$
2. se $\tilde{A}$ è a scala, allora $rg(\tilde{A}) =$ numero di righe non nulle di $\tilde{A}$

**Proposizione**  
$rg(A) = rg({}^t A)$

Questo ci dà un algoritmo per calcolare il rango di una matrice.

**Esempio**  
$$
A =
\begin{pmatrix}
  1 & 2 & 3 \\
  4 & 5 & 6
\end{pmatrix}
$$

$rg(A) = 1$ perché le righe (o le colonne) sono proporzionali.

**Teorema (di dimensione per soluzioni di sistemi lineari)**  
Sia $A \in M_{m,n}(K)$; sia

$W = \left\lbrace s \in K^n : As = 0\right\rbrace \subseteq K^n$

ovvero $W$ è l'insieme delle soluzioni del sistema lineare omogeneo associato ad $A$; allora

$dim W = n - rg(A)$

**Dimostrazione**  
Seguirà dalla teoria delle applicazioni lineari.

**Teorema (di Rouchè - Capelli)**  
Sia $A \in M_{m,n}(K)$ e sia $B \in K^n$, allora il sistema lineare $A \cdot X = b$ è compatibile (ovvero ammette almeno una soluzione) se e solo se $rg(A) = rg(A|B)$; in tal caso la generica soluzione del sistema dipende da $n - rg(A)$ parametri liberi.

**Dimostrazione**  
Per mostrare la prima parte del teorema, notiamo che se $s \in K^n$, con $s = \begin{pmatrix} s_1 \\ \vdots \\ s_n \end{pmatrix}$, allora

$A \cdot s = b \iff s_1 \cdot A^{(1)} + \dots + s_n \cdot A^{(n)} = b$

(questa osservazione si ottiene scrivendo esplicitamente il prodotto righe per colonne di $A$ per $s$); dimostriamo la prima parte

"$\Rightarrow$"  
Supponiamo che $A \cdot X = b$ sia compatibile; allora esiste $s \in K^n$ soluzione del sistema, dunque $A \cdot s = b$; per quanto osservato, questo equivale a dire che $s_1 \cdot A^{(1)} + \dots + s_n \cdot A^{(n)} = b$, il che significa che $b$ è combinazione lineare di $A^{(1)}, \dots, A^{(n)}$, ovvero delle colonne di $A$, pertanto $b \in span(A^{(1)}, \dots, A^{(n)})$, questo implica che

$span(A^{(1)}, \dots, A^{(n)}) = span(A^{(1)}, \dots, A^{(n)}, b)$

infatti

"$\subseteq$"  
se $u \in span(A^{(1)}, \dots, A^{(n)})$, allora $u = \lambda_1 \cdot A^{(1)} + \cdot + \lambda_n \cdot A^{(n)}$, pertanto $u = \lambda_1 A^{(1)} + \dots + \lambda_n A^{(n)} + 0 \cdot b$, ovvero $u \in span(A^{(1)}, \dots, A^{(n)}, b)$

"$\supseteq$"  
se $u \in span(A^{(1)}, \dots, A^{(n)}, b)$, allora $u = \lambda_1 A^{(1)} + \dots + \lambda_n A^{(n)} + \lambda \cdot b$, ma $b = s_1 \cdot A^{(1)} + \dots + s_n \cdot A^{(n)}$, quindi $u = \lambda_1 A^{(1)} + \dots + \lambda_n A^{(n)} + \lambda \cdot (s_1 \cdot A^{(1)} + \dots + s_n \cdot A^{(n)}) = (\lambda_1 + \lambda \cdot s_1) A^{(1)} + \dots + (\lambda_n + \lambda \cdot s_n) A^{(n)}$, pertanto $u \in span(A^{(1)}, \dots, A^{(n)})$

allora

$dim(span(A^{(1)}, \dots, A^{(n)})) = dim(span(A^{(1)}, \dots, A^{(n)}, b))$  
$rg(A) = rg(A|b)$

"$\Leftarrow$"  
Supponiamo che valga $rg(A) = rg(A|B)$; allora per definizione

$dim(span(A^{(1)}, \dots, A^{(n)})) = dim(span(A^{(1)}, \dots, A^{(n)}, b))$

dato che vale *sempre* che lo $span(A^{(1)}, \dots, A^{(n)}) \subseteq span(A^{(1)}, \dots, A^{(n)}, b)$, il fatto che le dimensioni di questi due sottospazi sono uguali implica che gli sottospazi stessi siano uguali; dunque

$span(A^{(1)}, \dots, A^{(n)}) = span(A^{(1)}, \dots, A^{(n)}, b)$

pertanto, dato che $b \in span(A^{(1)}, \dots, A^{(n)}, b)$, segue che $b \in span(A^{(1)}, \dots, A^{(n)})$, ma abbiamo osservato che quest'ultima condizione è equivalente al fatto che esista una soluzione $s \in K^n$ del sistema $A \cdot X = b$, ovvero che quest'ultimo sia compatibile.

Abbiamo quindi mostrato la prima parte del teorema; ora mostriamo la seconda parte, ovvero che, quando il sistema $A \cdot X = b$ è compatibile, la sua generica soluzione dipende da $n - rg(A)$ parametri liberi; per farlo, usiamo il teorema di struttura per sistemi lineari e il teorema di dimensione per le soluzioni di un sistema lineare omogeneo, il primo ci dice che la generica soluzione $s$ del sistema $A \cdot X = b$ o della forma $s = \tilde{s} + s_o$ dove $\tilde{s}$ è una soluzione fissata di $A \cdot X = b$ ed $s_0$ è una soluzione del sistema omogeneo associato $AX = 0$; il teorema di dimensione ci dice che il sottospazio vettoriale $W$ delle soluzioni $AX = 0$ ha dimensione $n - rg(A)$; sia $k = n -rg(A)$; allora esiste una base $B$ di $W$ formata da $k$ elementi, $B = \{w_1, \dots, w_k\}$ e ogni elemento di $W$ è combinazione lineare in maniera unica di $B$; pertanto $s_0$ è della forma $s_0 = t_1 \cdot w_1 + \dots + t_k \cdot w_k$ per certe $t_1, \dots, t_k \in K$; in definitiva, la generica soluzione $s$ di $AX = b$ è della forma $s = \tilde{s} + t_1 \cdot w_1 + \dots + t_k \cdot w_k$ dove $t_1, \dots, t_k \in K$.

$\square$

**Esempio**  
Consideriamo il sistema lineare

$$
\left\lbrace
  \begin{array}{l}
    x_1 - 2x_2 + 3x_3 - x_4 = 1 \\
    x_2 - x_4 = 2
  \end{array}
\right.
$$

usiamo il teorema di Rouchè - Capelli per dimostrare che il sistema sia compatibile

$$
A =
\begin{pmatrix}
  1 & -2 & 3 & -1 \\
  0 & 1 & 0 & -1
\end{pmatrix},
B =
\begin{pmatrix}
  1 \\
  2
\end{pmatrix}
$$

$$
(A|B) =
\begin{pmatrix}
  1 & -2 & 3 & -1 & 1 \\
  0 & 1 & 0 & -1 & 2
\end{pmatrix}
$$

$rg(A) = 2$ perché $A$ a scala e ho $2$ righe non nulle $rg(A|b) = 2$ perché $(A|b)$ è a scala e ha $2$ righe non nulle, dunque $rg(A) = rg(A|b)$, pertanto il sistema è compatibile e la generica soluzione dipende da $4 - 2 = 2$ parametri liberi per determinare tutte le soluzioni, cominceremo col calcolare una soluzione particolare:

$$
\left\lbrace
  \begin{array}{l}
    x_1 - 2x_2 + 3x_3 - x_4 = 1 \\
    x_2 - x_4 = 2
  \end{array}
\right.
\iff
\left\lbrace
  \begin{array}{l}
    x_1 = 2x_2 - 3c_3 + x_4 + 1 \\
    x_2 = x_4 + 2
  \end{array}
\right.
$$

$$
\iff
\left\lbrace
  \begin{array}{l}
    x_1 = 2(x_4 + 2) - 3x_3 + x_4 + 1 \\
    x_2 = x_4 + 2
  \end{array}
\right.
\iff
\left\lbrace
  \begin{array}{l}
    x_1 = -3x_3 + 3x_4 + 5 \\
    x_2 = x_4 + 2
  \end{array}
\right.
$$

per determinare una soluzione particolare, assegno dei valori a $x_3$ e $x_4$ ottenendo $\tilde{s} = \begin{pmatrix} 5 \\ 2 \\ 0 \\ 0 \end{pmatrix}$; a questo punto determiniamo una base delle soluzioni del sistema $AX = 0$, ovvero

$$
\left\lbrace
  \begin{array}{l}
    x_2 - 2x_2 + 3x_3 - x_4 = 0 \\
    x_2 - x_4 = 0
  \end{array}
\right.
\iff
\left\lbrace
  \begin{array}{l}
    x_1 = 3x_4 - 3x_3 \\
    x_2 = x_4
  \end{array}
\right.
$$

le soluzioni sono della forma

$$
\begin{pmatrix}
  -3x_3 + 3x_4 \\
  x_4 \\
  x_3 \\
  x_4
\end{pmatrix} = x_3
\begin{pmatrix}
  -3 \\
  0 \\
  1 \\
  0
\end{pmatrix} + x_4
\begin{pmatrix}
  3 \\
  1 \\
  0 \\
  1
\end{pmatrix}
$$

verificare che questi due vettori formano una base delle soluzioni di $AX = 0$.

# Rango e determinante

**Corollario**  
Sia $A \in M_{n}(K)$, allora $rg(A) = n$ (ovvero il rango di $A$ è il massimo possibile) se e solo se per ogni $b \in K^n$, il sistema lineare $A \cdot X = b$ è compatibile.

**Dimostrazione**  
Abbiamo visto nella dimostrazione di Rouchè - Capelli che
$A \cdot X = b$ è compatibile se e solo se $b \in span(A^{(1)}, \dots, A^{(n)})$, nella nostra dimostrazione abbiamo che $span(A^{(1)}, \dots, A^{(n)}) \subseteq K^n$, e vale che $dim_k K^n = n$; pertanto

$rg(A) = n \iff dim\ span(A^{(1)}, \dots, A^{(n)}) = n \iff span(A^{(1)}, \dots, A^{(n)}) = K^n \iff \forall b \in K^n, b \in span(A^{(1)}, \dots, A^{(n)}) \iff \forall b \in K^n, AX = b$ è compatibile.

$\square$

Ritorniamo ora al teorema di Cramer, il quale ci dice che se $A \in M_{n}(K)$, ed $A$ è invertibile, allora $\forall b \in K^n$ il sistema lineare $A \cdot X = b$ è compatibile.

**Proposizione**  
Sia $A \in M_{n}(K)$, allora $rg(A) = n$ (ovvero il rango di $A$ è massimo) se e solo se $A$ è invertibile.

**Dimostrazione**  
"$\Leftarrow$"  
Sia $A$ invertibile, allora per il teorema di Cramer, $\forall b \in K^n$ il sistema $A \cdot X = b$ è compatibile, dunque per il corollario precedente $rg(A) = n$.

"$\Rightarrow$"  
Supponiamo che $rg(A) = n$, vogliamo mostrare che una certa $B \in M_{n}(K)$ tale che $AB = BA = 1_n$; è sufficiente costruire $B$ tale che $AB = 1_n$; ora, vale che

$AB = 1_n$ se e solo se $A \cdot B^{(i)} = \begin{pmatrix} 0 \\ \vdots \\ 1 & (i) \text{ cioè l'uno va in posizione i-esima}\\ \vdots \\ 0 & \end{pmatrix}$

chiamiamo $e_i$ il vettore $\begin{pmatrix} 0 \\ \vdots \\ 1 & (i)\\ \vdots \\ 0 & \end{pmatrix}$

se e solo se tutti i sistemi lineari $A \cdot B^{(i)} = e_i$, con $i \in \{1, \dots, n\}$, hanno soluzione; dato che $rg(A) = n$, sappiamo che tutti questi sistemi lineari sono compatibili e dunque le loro soluzioni determinano le colonne di $B$.

Da questo risultato otteniamo un algoritmo per determinare l'inversa di una matrice quadrata $A \in M_{n}(K)$ quando essa è invertibile.

Abbiamo visto che per risolvere l'inversa di $A$ dobbiamo risolvere tutti i sistemi lineari del tipo $AX = e_i$, con $i \in \{1, \dots, n\}$. Cerchiamo di risolverli tutti contemporaneamente, ovvero consideriamo la matrice

$$
\left(
\begin{array}{c|cccc}
  & 1 & 0 & \dots & 0 \\
  & 0 & 1 & \dots & 0 \\
A & 0 & 0 & \dots & 0 \\
  & \vdots & \vdots & \ddots & \vdots \\
  & 0 & 0 & \dots & 1
\end{array}
\right)
$$

Notiamo che dato che $A$ è invertibile, il suo rango è $n$, quindi la sua forma a scala dopo l'algoritmo di Gauss è

$$
\tilde{A} =
\begin{pmatrix} * & * & * & \dots & * \\
  0 & * & * & \dots & * \\
  0 & 0 & * & \dots & * \\
  0 & 0 & 0 & \dots & * \\
  \vdots & \vdots & \vdots & \ddots & \vdots \\
  0 & 0 & 0 & \dots & 1
\end{pmatrix}
$$

infatti $\tilde{A}$ è una matrice $n \times n$ e dato che $rg(A) = n$, $\tilde{A}$ deve avere $n$ righe non nulle.

Usando ancora operazioni elementari possiamo portare $\tilde{A}$ nella forma

$$
\begin{pmatrix}
  0 & * & * & \dots & 0 \\
  0 & 0 & * & \dots & 0 \\
  0 & 0 & 1 & \dots & 0 \\
  \vdots & \vdots & \vdots & \ddots & \vdots \\
  0 & 0 & 0 & \dots & 1
\end{pmatrix} \rightarrow
\begin{pmatrix}
  1 & 0 & 0 & \dots & 0 \\
  0 & 1 & 0 & \dots & 0 \\
  0 & 0 & 1 & \dots & 0 \\
  \vdots & \vdots & \vdots & \ddots & \vdots \\
  0 & 0 & 0 & \dots & 1
\end{pmatrix}
$$

Riassumendo, usando operazioni elementari possiamo portare $A$ nella matrice $1_n$.

Applichiamo ora queste operazioni elementari alla matrice $(A | 1_n)$

otterremo una matrice del tipo $(1_n | B)$, con $B$ una certa matrice $M_{n}(K)$.

Ora la matrice di partenza codificava i sistemi $AX = e_i$, le cui soluzioni sono le colonne dell'inversa di $A$. Le operazioni elementari non cambiano le soluzioni del sistema. L'ultima matrice codifica i sistemi lineari $1X = B^{(i)}$, pertanto le soluzioni di quest'ultimo sistema sono le colonne della matrice inversa di $A$. Le soluzioni di questo sistema sono proprio le colonne di $B$, il che ci mostra che $B$ è l'inversa di $A$.

**Esempio**  
Consideriamo

$$
A =
\begin{pmatrix}
  2 & 1 \\
  5 & 3
\end{pmatrix}
$$

abbiamo che $rg(A) = 2$, quindi $A$ è invertibile

calcoliamo l'inversa di $A$

$$
(A | 1_n) =
\begin{pmatrix}
  2 & 1 & | & 1 & 0 \\
  5 & 3 & | & 0 & 1
\end{pmatrix}
$$

$$
\begin{pmatrix}
  1 & \frac{1}{2} & | & \frac{1}{2} & 0 \\
  5 & 3 & | & 0 & 1
\end{pmatrix} \rightarrow
\begin{pmatrix}
  1 & \frac{1}{2} & | & \frac{1}{2} & 0 \\
  0 & \frac{1}{2} & | & -\frac{5}{2} & 1
\end{pmatrix} \rightarrow
\begin{pmatrix}
  1 & \frac{1}{2} & | & \frac{1}{2} & 0 \\
  0 & 1 & | & -5 & 2
\end{pmatrix} \rightarrow
\begin{pmatrix}
  1 & 0 & | & 3 & -1 \\
  0 & 1 & | & -5 & 2
\end{pmatrix}
$$

pertanto $\begin{pmatrix} 3 & -1 \\ -5 & 2 \end{pmatrix}$ è l'inversa di $\begin{pmatrix} 2 & 1 \\ 5 & 3 \end{pmatrix}$.

Andiamo ora ad associare ad ogni matrice quadrata $A \in M_{n}(K)$ un elemento di $K$ tramite il quale possiamo determinare se $A$ sua invertibile o meno.

Questo elemento si chiamerà il **determinante** di $A$.

Consideriamo $A \in M_2 (K)$, ovvero

$$
A =
\begin{pmatrix}
  a_{11} & a_{12} \\
  a_{21} & a_{22}
\end{pmatrix}
$$

Considero a questo punto la matrice:

$$
B =
\begin{pmatrix}
  a_{11} & -a_{12} \\
  -a_{21} & a_{11}
\end{pmatrix}
$$

Svolgiamo il prodotto righe per colonne:

$$
AB =
\begin{pmatrix}
  a_{11} & a_{12} \\
  a_{21} & a_{22}
\end{pmatrix}
\begin{pmatrix}
  a_{11} & -a_{12} \\
  -a_{21} & a_{11}
\end{pmatrix} =
\begin{pmatrix}
  a_{11}a_{22} - a_{12}a_{21} & -a_{11}a_{12} + a_{12}a_{11} \\
  a_{21}a_{22} - a_{21}a_{22} & -a_{21}a_{12} + a_{11}a_{21}
\end{pmatrix} =
\begin{pmatrix}
  a_{11}a_{22} - a_{12}a_{21} & 0 \\
  0 & a_{11}a_{12} - a_{12}a_{21}
\end{pmatrix}
$$

Notiamo quindi che

$A$ è invertibile $\iff$ $a_{11}a_{22} - a_{12}a_{21} \neq 0$

e in tal caso l'inversa di $A$ è data da

$$
\frac{1}{a_{11}a_{22} - a_{12}a_{21}} \cdot \begin{pmatrix}
  a_{22} & -a_{12} \\
  -a_{21} & a_{11}
\end{pmatrix}
$$

(moltiplicazione per uno scalare)

Infatti

$$
A \cdot (\frac{1}{a_{11} a_{22} - a_{12} a_{21}} B) = \frac{1}{a_{11}a_{22} - a_{12}a_{21}} \cdot (A \cdot B) = \frac{1}{a_{11}a_{22} - a_{12}a_{21}} \cdot \begin{pmatrix}
  a_{11} a_{22} - a_{12} a_{21} & 0 \\
  0 & a_{11}a_{12} - a_{12}a_{21}
\end{pmatrix} = 1_2
$$

**Definizione**  
Sia $A \in M_2 (K)$, $A = (a_{ij})$, definiamo il **determinante** di $A$ come lo scalare

$det(A) = a_{11}a_{22} - a_{12}a_{21}, det(A) \in K$

Questo abbiamo visto finora ci permette di enunciare.

**Proposizione**  
Sia $A \in M_2 (K)$, allora

$A$ è invertibile $\iff$ $rg(A) = 2$ $\iff$ $det(A) \neq 0$

in tal caso, se $A = \begin{pmatrix} a_{11} & a_{12} \\ a_{21} & a_{22} \end{pmatrix}$, vale che $A^{-1} = \frac{1}{det(A)} \cdot \begin{pmatrix} a_{22} & -a_{12} \\ -a_{21} & a_{11} \end{pmatrix}$.

**Esempio**  
$A = \begin{pmatrix} 2 & 1 \\ 5 & 3 \end{pmatrix}$, $det(A) = 2 \cdot 3 - 1 \cdot 5 = 1$

$A^{-1} = \frac{1}{det(A)} \begin{pmatrix} 3 & -1 \\ -5 & 2 \end{pmatrix} = \begin{pmatrix} 3 & -1 \\ -5 & 2 \end{pmatrix}$

**Osservazione**  
Se $A \in M_2 (\mathbb{R})$ e consideriamo i suoi due vettori colonna e supponiamo che valga $a_{ij} > 0,\ \forall i, j \in \{1, 2\}$, allora possiamo rappresentare i due vettori colonna nel piano:

![determinante come area](../img/determinante_come_area.png){ width=301px }

si può verificare che se $\mathcal{P}$ è il parallelogramma determinato dai due vettori di $A$, allora

$det(A) = area(\mathcal{P})$

Andiamo ora a definire il determinante di una qualsiasi matrice quadrata.

Lo faremo in maniera ricorsiva.

**Definizione**  
Sia $A \in M_n (K)$ e siano $i, j \in \{1, \ldots, n\}$ due indici fissati; definiamo la matrice $A_{ij} \in M_{n-1} (K)$ come la sottomatrice di $A$ ottenuta eliminando la $i$-esima riga e la $j$-esima colonna; tale matrice si dice il **minore** ij-esimo di $A$.

**Esempio**  
Se $A = \begin{pmatrix} a_{11} & a_{12} & a_{13} \\ a_{21} & a_{22} & a_{23} \\ a_{31} & a_{32} & a_{33} \end{pmatrix}$, allora $A_{13} = \begin{pmatrix} a_{21} & a_{22} \\ a_{31} & a_{32} \end{pmatrix}$

**Definizione**  
Sia $A \in M_n (K)$; definiamo il **determinante** di $A$ in maniera ricorsiva nel modo seguente:

- se $n = 1$, allora $A = (a_{11})$ e definiamo $det(A) = a_{11}$
- se $n > 1$, allora definiamo

$det(A) = \sum\limits_{i = 1}^n (-1)^{i + 1} \cdot a_{i1} \cdot det(A_{i1})$

**Esempio**  
notiamo che con la definizione precedente ritroviamo il determinante di una matrice $2 \times 2$:

$$\begin{aligned}
\text{det} \begin{pmatrix}
  a_{11} & a_{12} \\
  a_{21} & a_{22}
\end{pmatrix}
& = (-1)^{1 + 1} \cdot a_{11} \cdot \text{det}(A_{11}) + (-1)^{2 + 1} \cdot a_{21} \cdot \text{det}(A_{21}) = \\
& = 1 \cdot A_{11} \cdot \text{det}(a_{22}) - 1 \cdot A_{21} \cdot \text{det}(a_{12}) = \\
& = a_{11} \cdot a_{22} - a_{12} \cdot a_{21}
\end{aligned}$$

**Esempio**  
$$A = \begin{pmatrix}
  1 & 0 & 2 \\
  0 & 1 & 1 \\
  2 & 3 & 1 \\
\end{pmatrix}$$

$$\begin{aligned}
det(A) &=
1 \cdot det \begin{pmatrix} 1 & 1 \\ 3 & 1 \end{pmatrix} -
0 \cdot det \begin{pmatrix} 0 & 2 \\ 3 & 1 \end{pmatrix} +
2 \cdot det \begin{pmatrix} 0 & 2 \\ 1 & 1 \end{pmatrix} =\\
&=
1 \cdot (1 \cdot 1 - 1 \cdot 3) -
0 \cdot (0 \cdot 1 - 2 \cdot 3) +
2 \cdot (0 \cdot 1 - 2 \cdot 1) =\\
&= - 2 - 0 - 4 = -6
\end{aligned}
$$

**Teorema**  
Sia $A \in M_n (K)$; allora  

$A$ è invertibile $\iff$ $det(A) \neq 0$

**Formula di Sarrus**  
Solo per le matrici $3 \times 3$ vale la formula di Sarrus:

$A = \begin{pmatrix} a_{11} & a_{12} & a_{13} \\ a_{21} & a_{22} & a_{23} \\ a_{31} & a_{32} & a_{33} \end{pmatrix}$

$det(A) = a_{11} \cdot a_{22} \cdot a_{33} + a_{12} \cdot a_{23} \cdot a_{31} + a_{13} \cdot a_{21} \cdot a_{32} - \\ -
a_{13} \cdot a_{22} \cdot a_{31} - a_{11} \cdot a_{23} \cdot a_{32} - a_{12} \cdot a_{21} \cdot a_{33}$

![graficamente con Sarrus](../img/sarrus.png){ width=344px }

**Proposizione**  
Il determinante gode della seguenti 3 proprietà:

$D1$: (multilinearità)  

Sia $A \in M_n (K)$e supponiamo che $A_{(i)} = R_1 + R_2$ (la i-esima riga è la somma di due vettori riga), allora

$$det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  R_1 + R_2 \\
  \vdots \\
  A_{(n)}
\end{pmatrix} =
det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  R_1 \\
  \vdots \\
  A_{(n)}
\end{pmatrix} +
det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  R_2 \\
  \vdots \\
  A_{(n)}
\end{pmatrix}$$

inoltre se invece $A_{(i)} = c \cdot R$ per qualche $c \in K$ e qualche vettore riga $R$, allora

$$det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  c \cdot R \\
  \vdots \\
  A_{(n)}
\end{pmatrix} =
c \cdot det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  R \\
  \vdots \\
  A_{(n)}
\end{pmatrix}$$

analoghe proprietà valgono se al posto delle righe consideriamo le colonne.

$D2$: (alternanza o antisimmetria)

se scambiamo due righe o due colonne di posto, il determinante cambia di segno, ovvero

$$det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  A_{(i)} \\
  \vdots \\
  A_{(j)} \\
  \vdots \\
  A_{(n)}
\end{pmatrix} = -det \begin{pmatrix}
  A_{(1)} \\
  \vdots \\
  A_{(j)} \\
  \vdots \\
  A_{(i)} \\
  \vdots \\
  A_{(n)}
\end{pmatrix}$$

se ci sono $k$ scambi, il segno va dunque moltiplicato per $(-1)^k$.

$D3$: (normalizzazione)

$det\ 1_n = 1$

**Teorema (di caratterizzazione del determinante)**  
Il determinante è l'unica funzione $M_n (K) \rightarrow K$ che soddisfa le proprietà $D1$, $D2$ e $D3$.

**Corollario**  
$i)$ se $A$ ha due righe uguali, allora $det(A) = -det(A)$ (per $D2$)  
e dunque $det(A) = 0$; analogamente per le colonne.

$ii)$ se $A$ ha una riga nulla, allora $det(A) = 0$ (per $D1$)  

**Corollario**  
$i)$ se $\tilde{A}$ è ottenuta da $A$ con una operazione elementare $OE1$,  
allora $det(\tilde{A}) = -det(A)$

$ii)$ se $\tilde{A}$ è ottenuta da $A$ con una operazione elementare $OE2$,  
allora $det(\tilde{A}) = c \cdot det(A)$

$iii)$ se $\tilde{A}$ è ottenuta da $A$ con una operazione elementare $OE3$,  
allora $det(\tilde{A}) = det(A)$; infatti se

$$A = \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix}$$

allora

$$\tilde{A} = \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    A_{(i)} + c \cdot A_{(j)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix}$$

$$det \tilde{A} =
det \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    A_{(i)} + c \cdot A_{(j)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix} \stackrel{D1}{=}
det \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    A_{(i)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix} +
det \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    c \cdot A_{(j)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix} \stackrel{D1}{=}
det(A) +
c \cdot \underbrace{det \begin{pmatrix}
    A_{(1)} \\
    \vdots \\
    A_{(j)} \\
    \vdots \\
    A_{(n)}
\end{pmatrix}}_{\text{ha due righe uguali, quindi } det = 0} = det A$$

**Corollario**  
Se $A \in M_n(K)$ e $\tilde{A}$ è la matrice a scala ottenuta applicando l'algoritmo di gradinizzazione di Gauss a $A$, allora  
$det(\tilde{A}) = \lambda \cdot det(A)$ per un certo $\lambda \in K \smallsetminus \{0\}$  
in particolare  
$det(A) = 0 \Leftarrow det(\tilde{A}) = 0$  

inoltre se nell'algoritmo di gradinizzazione di Gauss non effettuiamo noi la normalizzazione dei pivot a $1$, allora $det(\tilde{A}) = (-1)^k \cdot det(A)$, dove $k$ è il numero di scambi di righe che abbiamo effettuato.

**Proposizione**  
Se $A \in M_n(K)$ è una matrice triangolare superiore, ovvero $a_{ij} = 0$ per $i > j$,  
allora $det(A) = a_{11} \cdot a_{22} \cdot \ldots \cdot a_{nn}$

**Dimostrazione**  
Dimostriamo questo risultato per induzione su $n$:

$\boxed{n = 1}$ in questo caso $A = a_{11}$ e $det(A) = a_{11}$ per definizione.  
Quindi vale la tesi.

$\boxed{\text{passo induttivo}}$ possiamo supporre $n > 1$, allora per definizione  
$det(A) = a_{11} \cdot det(A_{11}) - 0 \cdot det(A_{21}) + 0 \cdot det(A_{31}) + \dots + (-1)^{n + 1} \cdot det(A_{n-1}) = a_{11} \cdot det(A_{11})$

$$A_{11} = \begin{pmatrix}
    a_{22} & \dots & \dots & a_{2n} \\
    0 & \ddots & \ddots & \vdots \\
    \vdots & \ddots & \ddots & \vdots \\
    0 & \dots & 0 & a_{nn}
\end{pmatrix}$$

dunque $A_{11} \in M_{n-1}(K)$, ed è triangolare superiore,  
allora posso usare l'ipotesi induttiva su $A_{11}$ e ottengo  
$det(A) = a_{11} \cdot det(A_{11}) = a_{11} \cdot a_{22} \cdot \ldots \cdot a_{nn}$

pertanto $det(A) = a_{11} \cdot det(A_{11}) = a_{11} \cdot a_{22} \cdot \ldots \cdot a_{nn}$

$\square$

Con questi strumenti possiamo dimostrare il risultato secondo cui il determinante caratterizza l'invertibilità o meno di una matrice.

**Teorema**  
Sia $A \in M_n(K)$; vale che  
$rg(A) < n \iff det(A) = 0$  

equivalentemente  

$rg(A) = n \iff det(A) \neq 0$

**Dimostrazione**  
"$\Rightarrow$" supponiamo che $rg(A) < n$; sia $\tilde{A}$ la matrice ottenuta da $A$ applicando l'algoritmo di gradinizzazione di Gauss; allora $\tilde{A}$ ha una riga nulla, pertanto $det(\tilde{A}) = 0$ e ciò è equivalente a $det(A) = 0$.

$\Leftarrow$" supponiamo che $det(A) = 0$; sia $\tilde{A}$ la matrice ottenuta da $A$ applicando l'algoritmo di gradinizzazione di Gauss; allora $det(\tilde{A}) = 0$; $\tilde{A}$ è a scala e dunque è triangolare superiore, quindi il suo determinante è il prodotto dei suoi elementi della diagonale; pertanto almeno un elemento della diagonale è nullo, e quindi almeno un gradino di $\tilde{A}$ è lungo almeno $2$, il che implica che $rg(\tilde{A}) < n$, ovvero $rg(A) < n$.

**Corollario**  
Sia $A \in M_n(K)$; allora  
$A$ è invertibile $\iff$ $det(A) \neq 0$

**Dimostrazione**  
Vediamo ora che il determinante si può calcolare sviluppando rispetto a una qualsiasi colonna o a una qualsiasi riga. Questo risultati sono detti **sviluppo di Laplace** del determinante.

**Teorema**  
Sia $A \in M_n(K)$ e sia $k \in \{1, \dots, n\}$; allora  
$det(A) = \displaystyle\sum_{i = 1}^n (-1)^{i + k} \cdot a_{ik} \cdot det(A_{ik})$  
(sviluppo secondo la colonna $k$-esima)

**Teorema**  
Sia $A \in M_n(K)$ e sia $l \in \{1, \dots, n\}$; allora  
$det(A) = \displaystyle\sum_{j = 1}^n (-1)^{l + j} \cdot a_{lj} \cdot det(A_{lj})$  
(sviluppo secondo la riga $l$-esima)

**Corollario**  
Sia $A \in M_n(K)$; allora $det(A) = det({}^t A)$

**Dimostrazione**  
${}^t A =$ sviluppo lungo la prima colonna di ${}^t A =$  
$=$ sviluppo lungo la prima riga di $A = det(A)$

**Osservazione**  
Come capire come prendere i segni nello sviluppo di Laplace?  
Basta osservare che il segno di $(-1)^{i + j}$ è  

![segni nello sviluppo di Laplace](../img/segni_laplace.png){ width=352px }

**Teorema**  
Siano $A, B \in M_n(K)$; allora  
$det(A \cdot B) = det(A) \cdot det(B)$  
(teorema di Binet)

**Corollario**  
Sia $A \in M_n(K)$ invertibile, allora  
$det(A^{-1}) = \dfrac{1}{det(A)} = det(A)^{-1}$

**Dimostrazione**  
Vale che $A \cdot A^{-1} = 1_n$; allora per il teorema di Binet e per la proprietà $D3$ di normalizzazione vale che  
$det(A \cdot A^{-1}) = det(1_n) = 1$  
$det(A \cdot A^{-1}) = det(A) \cdot det(A)^{-1}$  
$det(A^{-1}) = \dfrac{1}{det(A)}$

Andiamo ora a determinare una formula esplicita per le entrate della matrice inversa di una matrice data.

**Definizione**  
Sia $A \in M_n(K)$ e siamo $i, j \in \{1, \dots, n\}$; il **cofattore $i,j$-esimo** di $A$ è lo scalare $(-1)^{i + j} \cdot det \ A_{ij}$

dove ricordiamo che $A_{ij}$ è il minore $i, j$-esimo della matrice $A$.  
Definiamo la **matrice dei cofattori** di $A$ come quella matrice  
$cofA \in M_n(K)$ il cui elemento di posto $(i, j)$ è il cofattore $i,j$-esimo di $A$.  
Dunque $(cofA)_{ij} = (-1)^{i + j} \cdot det \ A_{ij}$

**Proposizione**  
Sia $A \in M_n(K)$; allora

$A \cdot {}^t cof A = (det A) \cdot 1_n$

in particolare se $A$ è invertibile, allora

$A^{-1} = \dfrac{1}{det A} \cdot ({}^t cof A)$

**Dimostrazione**  
Calcoliamo l'entrata di posto $(i, j)$ della matrice $A \cdot {}^t cof A$:

$A_{(i)} \cdot ({}^t cof A)^{(j)} =$

$= \displaystyle\sum_{k = 1}^n a_{ik} \cdot ({}^t cof A)_{kj} =$

$= \displaystyle\sum_{k = 1}^n a_{ik} \cdot (cof A)_{kj} =$

$= \displaystyle\sum_{k = 1}^n a_{ik} \cdot (-1)^{j + k} \cdot det A_{jk}$

si verifica che  

- se $i = j$ allora quello precedente è l'espressione di $detA$
- se $i \neq j$ allora quello precedente è l'espressione del determinante di una matrice con due righe uguali, e quindi vale zero.

$\square$

# Applicazioni Lineari

**Definizione**  
Siano $V$ e $V'$ due spazi vettoriali su $K$; una funzione

$f : V \rightarrow V'$

si dice **applicazione lineare** se valgono:

$AL1.$ (**additività**)

$\forall v_1, v_2 \in V : f(v_1 + v_2) = f(v_1) + f(v_2)$

rispettivamente somma in $V$ e somma in $V'$

"l'immagine della somma è la somma delle immagini"

$AL2.$ (**omogeneità**)

$\forall v \in V, \forall \lambda \in K : f(\lambda v) = \lambda f(v)$

rispettivamente moltiplicazione per uno scalare in $V$ e moltiplicazione per uno scalare in $V'$

"l'immagine della moltiplicazione per uno scalare è la moltiplicazione per uno scalare delle immagini"

**Esempio**  
Sia $f : \mathbb{R}^2 \rightarrow \mathbb{R}$ definita da $f(\begin{pmatrix} x \\ y \end{pmatrix}) = x + 2y$

vale che $f\left(\begin{pmatrix} x_1 \\ y_1 \end{pmatrix} + \begin{pmatrix} x_2 \\ y_2 \end{pmatrix}\right) =$  
$= (x_1x_2) + (2y_1y_2) =$  
$= (x_1 + 2y_1)(x_2 + 2y_2) =$  
$= f\left(\begin{pmatrix} x_1 \\ 2y_1 \end{pmatrix}\right) + f\left(\begin{pmatrix} x_2 \\ 2y_2 \end{pmatrix}\right)$

quindi $f$ è additiva; similmente si dimostra che $f$ è omogenea.

**Definizione**  
Sia $A \in M_{m, n}(\mathbb{R})$; allora $A$ definisce una funzione

$L_A : K^n \rightarrow K^m$  
$v \mapsto Av$

**Proposizione**  
$\forall A \in M_{m, n}(\mathbb{R})$, la funzione $L_A$ è una applicazione lineare.

**Dimostrazione**  
$L_A (v_1 + v_2) = A \cdot (v_1 + v_2) = A \cdot v_1 + A \cdot v_2 = L_A(v_1) + L_A(v_2)$

similmente se $\lambda \in K$ e $v \in K^n$, vale $L_A(\lambda \cdot v) = \lambda \cdot L_A(v)$

**Esempio** (rotazione nel piano di un angolo $\alpha$ in senso antiorario)  
Sia $\alpha \in \mathbb{R}$ e considero la matrice

$$
R_{\alpha} = \begin{pmatrix}
  \cos \alpha & -\sin \alpha \\
  \sin \alpha & \cos \alpha
\end{pmatrix}
$$

l'applicazione lineare $L_{R_{\alpha}} : \mathbb{R}^2 \rightarrow \mathbb{R}^2$ è la rotazione di angolo $\alpha$ in senso antiorario

![rotazione di un angolo $\alpha$ in senso antiorario](../img/esempio_rotazione_vettori.png){width=700px}

$$
L_{R_{\alpha}}\left(\begin{pmatrix} 1 \\ 0 \end{pmatrix}\right) = \begin{pmatrix} \cos \alpha -\sin \alpha \\ \sin \alpha + \cos \alpha \end{pmatrix} \begin{pmatrix} 1 \\ 0 \end{pmatrix} = \begin{pmatrix} \cos \alpha \\ \sin \alpha \end{pmatrix}
$$

$$
L_{R_{\alpha}}\left(\begin{pmatrix} 0 \\ 1 \end{pmatrix}\right) = \begin{pmatrix} \cos \alpha & -\sin \alpha \\ \sin \alpha & \cos \alpha \end{pmatrix} \begin{pmatrix} 0 \\ 1 \end{pmatrix} = \begin{pmatrix} -\sin \alpha \\ \cos \alpha \end{pmatrix}
$$

**Definizione**  
(applicazioni lineare che "prendono le coordinate")  
Sia $V$ uno spazio vettoriale di dimensione finita, $dim V = n$; sia $B = \{v_1, \dots, v_n\}$ una base di $V$; definiamo la funzione che prende le **coordinate rispetto a $B$** in questo modo:  
essa è la funzione  

$F_B : V \rightarrow K^n$

che agisce nel modo seguente: se $v \in V$, allora possiamo scrivere in maniera unica $v$ come combinazione lineare $v_1 + \dots + v_n$:  
$v = \lambda_1 v_1 + \dots + \lambda_n v_n$ con $\lambda_1, \dots, \lambda_n \in K$  
allora definiamo $F_B(v) = \begin{pmatrix} \lambda_1 \\ \dots \\ \lambda_n \end{pmatrix}$;  
si può verificare che $F_B$ è biettiva (quindi è invertibile);  
si dice quindi che $F_B$ è un **isomorfismo** di spazi vettoriali.

**Definizione**  
Sia $f : V \rightarrow V'$ un'applicazione lineare; definiamo il **nucleo** di $f$ come il sottoinsieme:  

$ker f = \{v \in V : f(v) = 0\}$

quindi $ker f \subseteq V$; definiamo l'**immagine** di $f$ come il sottoinsieme:

$im f = \{v' \in V' : \text{ esiste } v \in V : f(v) = v'\}$

quindi $im f \subseteq V'$

**Proposizione**  
Sia $f : V \rightarrow V'$ un'applicazione lineare; allora $ker f$ è sottospazio vettoriale di $V$ e $im f$ è sottospazio vettoriale di $V'$.

**Dimostrazione**  
Consideriamo per primo $ker f$:

$i.$ verifichiamo che $f(0) = 0$; vale infatti che  
$f(0) = f(0 + 0) \stackrel{AL1}{=} f(0) + f(0)$  
$\Rightarrow f(0) = f(0) + f(0)$  
$\Rightarrow f(0) = 0$

quindi $0 \in ker f$

$ii.$ siano $v_1, v_2 \in ker f$, dobbiamo mostrare che $v_1 + v_2 \in ker f$, ovvero che $f(v_1 + v_2) = 0$; per ipotesi $f(v_1) = 0$ e $f(v_2) = 0$, allora

$f(v_1 + v_2) \stackrel{AL1}{=} f(v_1) + f(v_2) = 0 + 0 = 0$

$iii.$ Sia $v \in ker f$ e sia $\lambda \in K$, dobbiamo mostrare che $\lambda v \in ker f$, ovvero che $f(\lambda v) = 0$; per ipotesi $f(v) = 0$, allora

$f(\lambda v) \stackrel{AL2}{=} \lambda f(v) = \lambda \cdot 0 = 0$

quindi $ker f$ è sottospazio vettoriale.

Consideriamo ora $im f$:

$i.$ vale che $0 = f(0)$, dunque $0 \in im f$

$ii.$ siano $v'_1, v'_2 \in im f$, dobbiamo mostrare che $v'_1 + v'_2 \in im f$; per ipotesi esistono $v_1, v_2 \in V$ tali che $f(v_1) = v'_1$ e $f(v_2) = v'_2$, allora

$f(v_1 + v_2) = f(v_1) + f(v_2) = v'_1 + v'_2$

pertanto $v'_1 + v'_2$ è immagine di un elemento di $V$, quindi $v'_1 + v'_2 \in im f$

$iii.$ Sia $v' \in V'$ e sia $\lambda \in K$, sia $v' \in im f$, dobbiamo mostrare che $\lambda v' \in im f$; per ipotesi esiste $v \in V$ tale che $f(v) = v'$, allora

$f(\lambda v) = \lambda f(v) = \lambda v'$

pertanto $\lambda v'$ è immagine di un elemento di $V$, quindi $\lambda v' \in im f$

dunque $im f$ è sottospazio vettoriale.

---

Nucleo e immagine determinano due importanti proprietà di $f$ come funzione

**Proposizione**  
Sia $f : V \rightarrow V'$ un'applicazione lineare; allora  

1. $f$ è iniettiva $\Leftrightarrow ker f = 0$
2. $f$ è suriettiva $\Leftrightarrow im f = V'$

**Dimostrazione**  
$2.$ è una parafrasi del concetto di suriettività.

$1.$  
"$\Rightarrow$"  
Supponiamo $f$ iniettiva e dimostriamo che $ker f = 0$; per farlo consideriamo $v \in ker f$ e mostriamo che deve essere $v = 0$; dato che $v \in ker f$, abbiamo che $f(v) = 0$; d'altra parte $f(0) = 0$; dato che $f$ è iniettiva, ciò è possibile solo se $v = 0$.  
"$\Leftarrow$"  
Supponiamo $ker f = 0$ e mostriamo che $f$ è iniettiva; per farlo consideriamo $v_1, v_2 \in V$ tali che $f(v_1) = f(v_2)$ e mostriamo che $v_1 = v_2$; se vale $f(v_1) = f(v_2)$, allora $f(v_1) - f(v_2) = 0$, quindi (uso $AL1/2$) $f(v_1 - v_2) = 0$, dunque $v_1 - v_2 \in ker f$, pertanto, dato che $ker f$ è dato in questo caso dal solo elemento neutro, abbiamo $v_1 - v_2 = 0$, ovvero $v_1 = v_2$.

**Teorema (di struttura per applicazioni lineari)**  
Siano $V$ e $V'$ due spazi vettoriali su $K$ di dimensione finita (non è necessario che $V$ e $V'$ abbia la stessa dimensione); sia $B = \{b_1, b_2, \dots, b_n\}$ una base di $V$ e siano $v'_1, v'_2, \dots, v'_n \in V'$ vettori qualsiasi (non c'è alcuna restrizione, potrebbero essere anche tutti uguali o tutti nulli); allora esiste un'unica applicazione lineare $f : V \rightarrow V'$ tale che $f(v_i) = v'_i$ per ogni $i \in \{1, 2, \dots, n\}$.

**Dimostrazione**  
Supponiamo che una tale applicazione lineare esista ì; sia $v \in V$ (vogliamo capire chi sia $f(v)$); per ipotesi, $B$ è una base di $V$, quindi $v$ si scrive in maniera unica come $v = \lambda_1 v_1 + \dots + \lambda_n v_n$ con $\lambda_i \in K$; allora

$f(v) = f(\lambda_1 v_1 + \dots + \lambda_n v_n) \stackrel{AL1}{=} f(\lambda_1 v_1) + \dots + f(\lambda_n v_n) \stackrel{AL2}{=} \lambda_1 f(v_1) + \dots + \lambda_n f(v_n) = \lambda_1 v'_1 + \dots + \lambda_n v'_n$

quindi l'immagine di $v \in V$ è univocamente determinata dalle proprietà che abbiamo supposto essere vere per $f$; pertanto, se $f$ esiste, essa è unica; dobbiamo ora mostrare che $f$ esiste; per farlo usiamo il suggerimento che ci è dato dall'argomento usato appena qui sopra, ovvero, se $v \in V$, definiamo $f(v)$ nel modo seguente: scriviamo $v$ come combinazione lineare in modo unico di $B$, dunque $v = \lambda_1 v_1 + \dots + \lambda_n v_n$ e definiamo $f(v) = \lambda_1 v'_1 + \dots + \lambda_n v'_n$, avendola definita in questa maniera, segue immediatamente che $f(v_i) = v'_i$ per ogni $i \in \{1, 2, \dots, n\}$, infatti $v_i = 0 \cdot v_1 + \dots + \cdot v_i + \dots + 0 \cdot v_n$, quindi $f(v_i) = 0 \cdot v'_1 + \dots + \cdot v'_n = v'_i$; l'ultima cosa che dobbiamo mostrare è che $f$, così definita, è una applicazione lineare; siano quindi $u, v \in V$, dobbiamo mostrare che $f(u + v) = f(u) + f(v)$, scriviamo $u$ e $v$ come combinazioni lineari di $B$:  
$u = \mu_1 v_1 + \dots + \mu_n v_n$  
$v = \lambda_1 v_1 + \dots + \lambda_n v_n$  
da ciò segue che vale  
$f(u) = \mu_1 v'_1 + \dots + \mu_n v'_n$  
$f(v) = \lambda_1 v'_1 + \dots + \lambda_n v'_n$  
inoltre  
$(u + v) = (\mu_1 + \lambda_1) v_1 + \dots + (\mu_n + \lambda_n) v_n$  
quindi  
$f(u + v) = (\mu_1 + \lambda_1) v'_1 + \dots + (\mu_n + \lambda_n) v'_n =$  
$= (\mu_1 + v'_1 + \dots + \mu_n + v'_n) + (\lambda_1 + v'_1 + \dots + \lambda_n + v'_n) = f(u) + f(v)$

pertanto è additiva; analogamente si dimostra che $f$ è omogenea.

**Esempio**  
Consideriamo in $\mathbb{R}^2$ la base standard $\xi = \{e_1, e_2\}$,  

$e_1 = \begin{pmatrix} 1 \\ 0 \end{pmatrix}, \quad e_2 = \begin{pmatrix} 0 \\ 1 \end{pmatrix}$

consideriamo in $\mathbb{R}^2$ due elementi

$w_1 = \begin{pmatrix} 2 \\ 3 \end{pmatrix}, \quad w_2 = \begin{pmatrix} -1 \\ 4 \end{pmatrix}$

allora per il teorema di struttura delle applicazioni lineari esiste ed è unica un'applicazione lineare $f : \mathbb{R}^2 \rightarrow \mathbb{R}^2$ tale che  
$f(e_1) = w_1$ e $f(e_2) = w_2$  

chiediamoci: chi è l'immagine attraverso $f$ di un generico elemento $\begin{pmatrix} x \\ y \end{pmatrix} \in \mathbb{R}^2$?

vale che $\begin{pmatrix} x \\ y \end{pmatrix} =  x e_1 + y e_2$; allora $f\left(\begin{pmatrix} x \\ y \end{pmatrix}\right) = x w_1 + y w_2$

quindi $f\left(\begin{pmatrix} x \\ y \end{pmatrix}\right) = x \begin{pmatrix} 2 \\ 3 \end{pmatrix} + y \begin{pmatrix} -1 \\ 4 \end{pmatrix} = \begin{pmatrix} 2x -y \\ 3x + 4y \end{pmatrix}$

**Esempio**  
Non può esistere un'applicazione lineare $f : \mathbb{R}^2 \rightarrow \mathbb{R}^2$ tale che  

$f\left(\begin{pmatrix} 1 \\ 0 \end{pmatrix}\right) = \begin{pmatrix} 1 \\ 2 \end{pmatrix}, \quad f\left(\begin{pmatrix} 0 \\ 1 \end{pmatrix}\right) = \begin{pmatrix} -1 \\ 1 \end{pmatrix}, \quad f\left(\begin{pmatrix} 1 \\ 1 \end{pmatrix}\right) = \begin{pmatrix} 12 \\ 17 \end{pmatrix}$

**Osservazione**  
Sia $f : V \rightarrow V'$ una applicazione lineare tra spazi vettoriali di dimensione finita e sia $B = \{v_1, \dots, v_n\}$ una base di $V$; allora $f(v_1), \dots, f(v_n)$ sono un sistema di generatori di $im f$; infatti se $v' \in im f$, allora esiste $v \in V$ tale che $f(v) = v'$; dato che $B$ è una base, vale che $v = \lambda_1 v_1 + \dots + \lambda_n v_n$ per certi $\lambda_1, \dots, \lambda_n \in K$, quindi  
$f(v) = f(\lambda_1 v_1 + \dots + \lambda_n v_n) = f(\lambda_1 v_1) + \dots + f(\lambda_n v_n) = \lambda_1 f(v_1) + \dots + \lambda_n f(v_n)$

quindi $v'$ è combinazione lineare di $f(v_1), \dots, f(v_n)$; notiamo che abbiamo usato solo il fatto che $B$ è n sistema di generatori per $V$.  
Sintetizzando: "le immagini di un sistema di generatori sono run sistema di generatori per l'immagine dell'applicazione lineare".

**Osservazione**  
Consideriamo una matrice $A \in M_{m, n} (K)$; allora abbiamo  

$L_A : K^n \rightarrow K^m$  
$v \mapsto A \cdot v$

se in $K^n$ prendiamo la base standard $\xi = \{e_1, \dots, e_n\}$, dove  

$e_i = \begin{pmatrix} 0 \\ \vdots \\ 1 & (i) \text{ cioè l'uno va in posizione i-esima}\\ \vdots \\ 0 & \end{pmatrix}$

allora vale che $A \cdot e_i = A^{(i)}$; dato che $\xi$ è una base di $K^n$, abbiamo che $L_A = span \Big( L_A(e_1), \dots, L_A(e_n) \Big) = span \Big( A^{(1)}, \dots, A^{(n)} \Big)$

pertanto $dim \ im L_A = dim \ span \Big( A^{(1)}, \dots, A^{(n)} \Big) = rg A$

**Definizione**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi vettoriali di dimensione finita, definiamo il rango di $f$ come $dim im f$.

Data l'osservazione precedente, il rango di un'applicazione lineare è una generalizzazione del rango di una matrice.

**Teorema (di dimensione per applicazioni lineari)**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi vettoriali di dimensione finita, vale allora  
$dim V = dim \ ker f + dim \ im f$  
o, in altre parole  
$dim V = dim \ ker f + rg f$

**Dimostrazione**  
Sia $n = dim V$ e fissiamo una base $B_{ker}$ di $ker f$; sia $B_{ker} = \{v_1, \dots, v_k\}$, dunque $dim \ ker f = k$; ora, per costruzione $v_1, \dots, v_k$ sono linearmente indipendenti, dunque essi possono essere estesi a una base di $V$ (teorema di estensione); sia essa  

$B = \{v_1, \dots, v_k, v_{k+1}, \dots, v_n\}$  

raggiungiamo il nostro scopo se riusciamo a mostrare che $\{f(v_{k+1}), \dots, f(v_n)\}$ è una base di $im f$, perché in tal caso abbiamo che $dim \ im f = n - k$ e dunque $dim V = n = k + (n - k) = dim \ ker f + dim \ im f$; dimostriamo dunque che $\{f(v_{k+1}), \dots, f(v_n)\}$ è una base di $im f$;  
cominciamo mostrando che tali elementi sono linearmente indipendenti; supponiamo quindi che esista una loro combinazione lineare nulla:  
$a_{k+1} f(v_{k+1}) + \dots + a_n f(v_n) = 0$ per certi $a_{k+1}, \dots, a_n \in K$  
allora, dato che $f$ è lineare  
$f(a_{k+1} v_{k+1} + \dots + a_n v_n) = 0$  
allora $a_{k+1} v_{k+1} + \dots + a_n v_n \in ker f$, quindi  
$a_{k+1} v_{k+1} + \dots + a_n v_n = b_1 v_1 + \dots + b_k v_k$ per certi $b_1, \dots, b_k \in K$ dato che $\{v_1, \dots, v_k\}$ è una base del nucleo, pertanto  
$-b_1 v_1 - \dots -b_k v_k + a_{k+1} v_{k+1} + \dots + a_n v_n = 0$  
e questa è una combinazione lineare nulla di $\{v_1, \dots, v_n\}$, la quale è una base di $V$ e pertanto l'unica possibilità è che sia  
$-b_1 = 0, \dots, -b_k = 0, a_{k+1} = 0, \dots, a_n = 0$  
quindi i particolare $a_{k+1} = 0, \dots, a_n = 0$, e dunque $f(v_{k+1}), \dots, f(v_n)$ sono linearmente indipendenti.  

Dimostriamo che $\{f(v_{k+1}), \dots, f(v_n)\}$ sono un sistema di generatori per $im f$; dall'osservazione precedente sappiamo che $\{f(v_1), \dots, f(v_n)\}$ è un sistema di generatori per $im f$ dato che $\{v_1, \dots, v_n\}$ è una base di $V$,  
d'altro canto, dato che $v_1, \dots, v_k \in ker f$:  
$\{f(v_1), \dots, f(v_k), f(v_{k+1}), \dots, f(v_n)\}$  
pertanto $span(f(v_1), \dots, f(v_n)) = span(f(v_{k+1}), \dots, f(v_n))$, pertanto  
$im f = span(f(v_{k+1}), \dots, f(v_n))$.

**Esempio**  
Supponiamo che $f : \mathbb{R}^3 \rightarrow \mathbb{R}^4$ sia un'applicazione lineare; allora supponiamo che sicuramente $f$ non può essere suriettiva; infatti per il teorema di dimensione abbiamo $dim \ im f = dim \ \mathbb{R}^3 - dim \ ker f \leq 3$, mentre $dim \ \mathbb{R}^4 = 4$ e quindi non potrà mai essere che $im f = \mathbb{R}^4$.

**Osservazione**  
Sia $A \in M_{m, n} (K)$ e considero il sistema lineare omogeneo $AX = 0$; interpretiamo le sue soluzioni in termini dell'applicazione lineare $L_A$:  
{soluzioni di $AX = 0$} = {$s \in K^n : A \cdot s = 0$} = {$s \in K^n : L_A(s) = 0$} = $ker L_A$

**Corollario**  
Sia $A \in M_{m, n} (K)$, allora la dimensione del sottospazio vettoriale $W \subseteq K^n$ delle soluzioni del sistema lineare omogeneo $AX = 0$ è uguale a $n - rg A$ (questo colma il vuoto lasciato nella dimostrazione del teorema di struttura per sistemi lineari qualsiasi).

**Dimostrazione**  
Abbiamo visto che $W = ker L_A$; per il teorema di dimensione, ricordando che $L_A : K^n \rightarrow K^m$, abbiamo $dim K^n = dim \ ker L_A + dim \ im L_A$  
$\Rightarrow n = dim W + rg L_A$
$= dim W + rg A$  
$\Rightarrow dim W = n - rg A$

**Osservazione**  
Sia $A \in M_{m, n} (K)$, consideriamo $L_A : K^n \rightarrow K^m$; dato che $b \in K^m$, interpretiamo che cosa significhi dire che $b \in im L_A$; vale che  
$b \in im L_A \iff$ esiste $s \in K^n$ tale che $L_A(s) = b$  
$\iff$ esiste $s \in K^n$ tale che $A \cdot s = b$  
$\iff$ il sistema lineare $AX = b$ è compatibile.

**Corollario**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi di dimensione finita e supponiamo $dim V = dim V?$; allora le seguenti condizioni sono equivalenti:

1. $f$ è iniettiva
2. $f$ è suriettiva

**Dimostrazione**  
$1. \Rightarrow 2.$  
Supponiamo $f$ iniettiva, allora $ker f = (0)$, allora dal teorema di dimensione  
$dim V = dim \ ker f + dim \ im f$  
quindi $dim \ im f = dim V = dim V'$, pertanto $im f = V'$ e dunque $f$ è suriettiva.

$2. \Rightarrow 1.$  
Supponiamo $f$ suriettiva, allora $im f = V'$, allora dal teorema di dimensione  
$dim V = dim \ ker f + dim \ im f = dim \ ker f + dim V'$  
$\Rightarrow$ $dim \ ker f = 0$  
$\Rightarrow$ $ker f = (0)$  
$\Rightarrow$ $f$ è iniettiva.

**Corollario**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi di dimensione finita, e sia $dim V = dim V'$, allora  
$f$ iniettiva $\iff$ $f$ suriettiva $\iff$ $f$ è biettiva $\iff$ $f$ è invertibile

## Matrici associate

Introduciamo ora un'operazione che associa a un'applicazione lineare (tra spazi di dimensione finita) una matrice.

**Definizione**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi vettoriali di dimensione finita, sia $B$ una base di $V$ e sia $C$ una base di $V'$; siano $B = \{v_1, \dots, v_n\}$, $C = \{w_1, \dots, w_m\}$,  
definiamo la **matrice associata** ad $f$ rispetto alle basi $B$ e $C$ come la matrice $M_C^B (f) \in M_{m, n} (K)$ ottenuta nella maniera seguente:  
per ogni $v_i \in B$, scriviamo $f(v_i)$ come combinazione lineare di $w_1, \dots, w_m$; i coefficienti di tale matrice formano la colonna $i$-esima di $M_C^B (f)$; in altre parole  

$M_C^B (f) = \begin{pmatrix}
  \vdots & & & & \vdots \\
  \vdots & & & & \vdots \\
  \text{coordinate di } f(v_1) \text{ rispetto a } C & \dots & \dots & \dots & \text{coordinate di } f(v_n) \text{ rispetto a } C \\
  \vdots & & & & \vdots \\
  \vdots & & & & \vdots
\end{pmatrix}$

> Esempi

**Teorema**  
Sia $f : V \rightarrow V'$ applicazione lineare tra spazi di dimensione finita; sia $B$ una base di $V$ e sia $C$ una base di $V'$; sia $v \in V$ e supponiamo che $\begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix}$ siano le coordinate di $v$ rispetto a $B$ (ovvero $B = \{v_1, \dots, v_n\}$ e $v = \alpha_1 v_1 + \dots + \alpha_n v_n$), quindi $\begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix} \in K^n$; allora le coordinate di $f(v)$ rispetto a $C$ sono date da $M_C^B (f) \begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix}$.

**Dimostrazione**  
Segue dalla definizione.

**Teorema**  
Siano $f : V \rightarrow V'$ e $g : V' \rightarrow V''$ applicazioni lineari tra spazi di dimensione finita e siano $B$ una base di $V$, $C$ una base di $V'$, $D$ una base di $V''$, allora possiamo considerare $g \circ f : V \rightarrow V''$ e abbiamo  

$M_D^B (g \circ f) = M_D^{\rlap{/}{C}} (g) \cdot M_{\rlap{/}{C}}^B (f)$

**Corollario**  
Sia $V$ uno spazio vettoriale di dimensione finita, siano $B$ e $C$ basi di $V$, allora  

$M_B^C (id_V) \cdot M_C^B (id_V) = M_B^B (id_V \cdot id_V) = M_B^B (id_V) = 1_n$

quindi $M_B^C (id_V)$ è l'inversa di $M_C^B (id_V)$.

---

Data $f : V \rightarrow V'$ applicazione lineare tra spazi di dimensione finita.  
Supponiamo $dim V = n$, $dim V' = m$, fissiamo basi $B$ di $V$$ e $C$ di $V'$,  
allora è determinata $M_C^B (f)$  
(le sue colonne sono le coordinate degli elementi di $B$ attraverso $f$ rispetto a $C$).  
Abbiamo $M_C^B (f) \in M_{m, n} (K)$

**Proprietà**  
$i.$ $M_B^B (id_V) = 1_n$ (attenzione $M_C^B (id)$ non è necessariamente $1_n$)  

$ii.$ $M_C^B (\text{applicazione nulla}) = \text{matrice nulla}$

$iii.$ Se $f : V \rightarrow V'$ e $g : V' \rightarrow V''$ sono lineari,  
con $B$ base di $V$, $C$ base di $V'$, $D$ base di $V''$, allora  
$M_D^B (g \circ f) = M_D^C (g) \cdot M_C^B (f)$  
(prodotto righe per colonne)

$iv.$ $M_C^B (id)$ è l'inversa di $M_B^C (id)$

$v.$ $M_C^B (f + g) = M_C^B (f) + M_C^B (g)$ per ogni $f, g : V \rightarrow V'$

$vi.$ $M_C^B (\lambda \cdot f) = \lambda \cdot M_C^B (f)$

**Osservazione**  
Se $f : V \rightarrow V$,con $dim V = n$, è un isomorfismo (ovvero $f$ è un'applicazione lineare ed è biettiva, quindi invertibile), allora $f^{-1} : V' \rightarrow V$ è anch'essa lineare ed abbiamo che, se $B$ è base di $V$, allora  

$M_B^B (f) \cdot M_B^B (f^{-1}) = M_B^B (f \cdot f^{-1}) = M_B^B (id) = 1_n$

quindi $M_B^B (f)$ è invertibile e la sua inversa è $M_B^B (f^{-1})$, ovvero  

$\Big( M_B^B (f) \Big)^{-1} = M_B^B (f^{-1})$

RIcordiamo inoltre che se $f : V \rightarrow V'$ e $B$ è base di $V$ e $C$ è base di $V'$, se $v \in V$ e $\begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix}$ è un vettore $m \times 1$ ed è il vettore delle coordinate di $v$ rispetto a $B$, abbiamo che $M_C^B (id_V) \cdot \begin{pmatrix} \alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix}$ è il vettore delle coordinate di $id_V (v) = v$ rispetto alla base $C$. Pertanto, $M_C^B (id_V)$ è la matrice del **cambio di base**.

Da tutti questi risultati deriviamo che, se $f : V \rightarrow V'$ è una applicazione lineare tra spazi vettoriali di dimensione finita e  
$B$ e $\tilde{B}$ sono basi di $V$  
$C$ e $\tilde{C}$ sono basi di $V'$  
allora abbiamo che  
$M_{\tilde{C}}^{\tilde{B}} (f) = M_{\tilde{C}}^{\tilde{B}} (id_{V'} \cdot f \cdot id_V) = M_{\tilde{C}}^C (id_{v'}) \cdot M_C^B (f) \cdot M_B^{\tilde{B}} (id_V)$  
Pertanto, se consideriamo $M_C^B (f)$, possiamo ottenere $M_{\tilde{C}}^{\tilde{B}} (f)$ moltiplicando a destra e a sinistra $M_C^B (f)$ per die matrici di cambio di base.  
In particolare, se $f : V \rightarrow V$ (attenzione, dominio e codominio qui coincidono) e se $B$ e $C$ sono due basi di $V$, allora  
$M_C^C (f) = M_C^B (id_V) \cdot M_B^B (f) \cdot M_B^C (id_V)$  
Notiamo che se $P = M_B^C (id_V)$, allora $M_C^B (id_V) = M_B^C (id_V)^{-1} = P^{-1}$  
Quindi l'uguaglianza precedente si può scrivere come  
$M_C^C (f) = P^{-1} \cdot M_B^B (f) \cdot P$

**Definizione**  
Due matrici quadrate $A, B \in M_n (K)$ si dicono **simili** se esiste una matrice invertibile $P \in M_n (K)$ tale che $B = P^{-1} \cdot A \cdot P$

Pertanto possiamo riassumere quanto ottenuto finora dicendo che se $f : V \rightarrow V$ è un'applicazione lineare con $dim V = n$ e $B$ e $C$ sono basi di $V$, allora $M_B^B (f) = M_C^C (f)$ sono simili e vale  
$M_C^C (f) = P^{-1} \cdot M_B^B (f) \cdot P$  
dove $P = M_B^C (id_V)$.

Questo risultato ci consente quindi di determinare la matrice associata ad una applicazione lineare rispetto a una base differente da quella che potremmo aver considerato in partenza. La speranza è di riuscire a trovare basi rispetto alle quali l'applicazione lineare abbia una forma abbastanza semplice.  
Prima di passare a questo argomento, concludiamo con un risultato generale.

**Definizione**  
Siano $V, V'$ due spazi vettoriali su $K$ di dimensione, $dim V = n$, $dim V' = m$, definiamo  

$\mathscr{L} (V, V') =$ {applicazioni lineari da $V$ in $V'$}

abbiamo che, definendo la somma tra applicazioni in maniera "puntuale" [$(f + g)(v) = f(v) + g(v)$] e analogamente la moltiplicazione di una applicazione lineare per uno scalare [$(\lambda f)(v) = \lambda f(v)$], allora $\mathscr{L} (V, V')$ diventa uno spazio vettoriale su $K$.

**Teorema**  
Nelle ipotesi della definizione precedente, fissato $B$ una base di $V$ e $C$ una base di $V'$, abbiamo che  

$\mathscr{L} (V, V') \to M_{m, n} (K)$  
$f \mapsto M_C^B (f)$

è un'applicazione lineare ed è biettiva, ovvero è un isomorfismo.

## Diagonalizzazione

**Esempio**  

Consideriamo nel piano $\mathbb{R}^2$ la riflessione rispetto all'asse delle ordinate, ovvero:  

![riflessione rispetto all'asse delle ordinate](../img/riflessione_rispetto_ordinate.png){width=400px}

la riflessione $\rho$ è un'applicazione lineare e se $\xi = \{e_1, e_2\}$ è la base standard di $\mathbb{R}^2$, allora  

$M_{\xi}^{\xi} (\rho) = \begin{pmatrix} -1 & 0 \\ 0 & 1 \end{pmatrix}$

se ora considerassimo una retta $\ell$ che passa per $(0, 0)$ e la riflessione $\rho_{\ell}$, rispetto alla retta $\ell$, abbiamo che  

![riflessione rispetto alla retta $\ell$](../img/riflessione_rispetto_retta.png){width=500px}

dal disegno possiamo notare che non è immediato comprendere come sia fatta $M_{\xi}^{\xi} (\rho_{\ell})$; possiamo interpretare questa difficoltà nel determinare $M_{\xi}^{\xi} (\rho_{\ell})$ come il fatto di non aver scelto una base "adeguata" all'applicazione lineare; considero ora una base "personalizzata" rispetto all'applicazione lineare:

![base personalizzata](../img/cambio_base_retta.png){width=500px}

allora se $B = \{v_1, v_2\}$, abbiamo che $B$ è una base di $\mathbb{R}^2$ e cha vale $M_B^B (\rho_{\ell}) = \begin{pmatrix} 1 & 0 \\ 0 & -1 \end{pmatrix}$

Notiamo pertanto che cambiare base può essere efficace nell'ottenere una matrice associata sufficientemente semplice. Notiamo inoltre che la base che "ha funzionato" è costituita da vettori che sono mandati dall'applicazione lineare in multipli di se stessi. Vediamo che questa si rivelerà l'idea chiave.

**Definizione**  
Sia $f : V \rightarrow V$ un'applicazione lineare con $dim V$ finita; uno scalare $\lambda \in K$ si dice **autovalore** (eigenvalue in inglese) per $f$ se esiste $v \in V, v \neq 0$, tale che $f(v) = \lambda v$

**Osservazione**  
Considerando $\rho_{\ell}$ come nell'esempio precedente, abbiamo che $1$ e $-1$ sono autovalori di $\rho_{\ell}$ (infatti $\rho_{\ell} (v_1) = 1 \cdot v_1$ e $\rho_{\ell} (v_2) = (-1) \cdot v_2$ ed entrambi $v_1$ e $v_2$ sono non nulli).

**Definizione**  
Data $f$ come sopra, l'insieme degli autovalori di $f$ si dice **spettro** di $f$ e si indica $Sp (f)$.

**Definizione**  
Sia $f$ come sopra e sia $\lambda$ un autovalore di $f$; diciamo che $v \in V$ è un **autovettore** (eigenvector in inglese) di $f$ relativo a $\lambda$ se $f(v) = \lambda v$; definiamo l'**autospazio** (eigenspace in inglese) di $\lambda$ l'insieme degli autovettori di $\lambda$ e lo denotiamo $Aut (\lambda)$.

**Osservazione**  
Affinché $\lambda$ sia autovalore, deve esistere $v \in V$, $v \neq 0$, tale che $f(v) = \lambda v$; se $\lambda$ è autovalore; consideriamo autovettore relativo a $\lambda$ ogni vettore $w \in V$ tale che $f(w) = \lambda w$; in particolare $f(0) = \lambda \cdot 0 = 0$, dunque vale che $0 \in Aut (\lambda)$ per ogni autovalore $\lambda$.

**Proposizione**  
Sia $f : V \rightarrow V$ applicazione lineare, con $dim V$ finita, sia $\lambda$ un autovalore di $f$; allora l'autospazio di $\lambda$, $Aut (\lambda)$, è un sottospazio vettoriale di $V$.

**Dimostrazione**  
$1.$ Sia $v \in V$, sia $\mu \in K$ e sia $v \in Aut (\lambda)$; dobbiamo mostrare che $\mu \cdot v \in Aut (\lambda)$; per ipotesi $f(v) = \lambda v$; ora  
$\mu \cdot v \in Aut (\lambda) \iff f(\mu \cdot v) = \lambda \cdot (\mu \cdot v)$  
d'altra parte $f(\mu \cdot v) = \mu \cdot f(v) = \mu \lambda v = \lambda \cdot (\mu \cdot v)$

$2.$ Siano $v_1, v_2 \in V$, e supponiamo $v_1, v_2 \in Aut (\lambda)$; dobbiamo mostrare che $v_1 + v_2 \in Aut (\lambda)$; per ipotesi $f(v_1) = \lambda v_1$ e $f(v_2) = \lambda v_2$, pertanto  
$f(v_1 + v_2) = f(v_1) + f(v_2) = \lambda v_1 + \lambda v_2 = \lambda (v_1 + v_2)$  
dunque $v_1 + v_2 \in Aut (\lambda)$

**Proposizione**  
Sia $f : V \rightarrow V$ applicazione lineare, con $dim V$ finita e siano $\lambda$ e $\mu$ due autovalori definiti di $f$; siano $v_1 \in Aut (\lambda)$ e $v_2 \in Aut (\mu)$; e supponiamo che $v_1 \neq 0$ e $v_2 \neq 0$; allora $v_1$ e $v_2$ sono linearmente indipendenti.

L'obiettivo delle nostre considerazioni sarà capire se, data una applicazione lineare, $f : V \rightarrow V$ sia possibile determinare una base $B$ di $V$ tutta costituita da autovettori. In tal caso, infatti, la matrice $M_B^B (f)$ è **diagonale**.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita; $f$ si dice **diagonalizzabile** se esiste una base $B$ di $V$ tale che $M_B^B (f)$ sia diagonale.

## Diagonalizzabilità

**Osservazione**  
Ricordiamo che se $f : V \rightarrow V$ è applicazione lineare, $dim V$ finita  e
e $N = M_B^B (f)$ ed $N' = M_C^C (f)$, allora

$N' = P^{-1} \cdot N \cdot P$

dove $P$ è una matrice invertibile; pertanto possiamo dire che $f$ è diagonalizzabile se e solo se, presa una sua matrice associata $M_B^B (f)$ rispetto ad una base $B$ di $V$, tale matrice è simile a una matrice diagonale, ovvero se esiste $P$ invertibile tale che $P^{-1} \cdot M_B^B (f) \cdot P$ è diagonale.

**Proposizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita, allora è diagonalizzabile se e solo se esiste una base $B$ di $V$ costituita tutta da autovettori.

**Dimostrazione**  
Se $B = \{v_1, \dots, v_n\}$ è una base costituita da autovettori; e per ogni $i \in \{1, \dots, n\}$, $v_i$ è un autovettore associato all'autovalore $\lambda_i$ (ovvero vale che $f(v_i) = \lambda \cdot v_i$), allora  

$M_B^B (f) = \begin{pmatrix} \lambda_1 & 0 & \dots & 0 \\ 0 & \lambda_2 & \dots & 0 \\ \vdots & \vdots & \ddots & \vdots \\ 0 & 0 & \dots & \lambda_n \end{pmatrix}$

ovvero tale matrice è diagonale (notiamo che non abbiamo supposto che i $\{\lambda_i\}$ siano tutti distinti).

Per comprendere se una tale base può esistere, andiamo a ripensare agli autospazi in maniera differente. In particolare, andiamo a ridimostrare che gli autospazi sono sottospazi vettoriali in una maniera alternativa.

Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e sia $\lambda \in K$ un autovalore di $f$. Allora per definizione esiste $v \in V$ con $v \neq 0$ tale che $f(v) = \lambda \cdot v$. Ora  
$f(v) = \lambda \cdot v \Longleftrightarrow f(v) - \lambda v = 0 \Leftrightarrow f(v) - \lambda \cdot id_v (v) = 0 \Leftrightarrow (f - \lambda \cdot id) (v) = 0$.

Per definizione $(f - \lambda \cdot id) := f_{\lambda}$

Allora $f_{\lambda} : V \rightarrow V$ e $v \in ker f_{\lambda}$. Pertanto $ker f_{\lambda} \neq (0)$, perché $v \neq 0$. Ciò significa che $f_{\lambda}$ non è iniettiva. Pertanto $f_{\lambda}$ non è invertibile e dunque per qualsiasi base $B$ di $V$ vale che

$M_B^B (f_{\lambda})$ non è invertibile  
$\Leftrightarrow$ $det M_B^B (f_{\lambda}) = 0$  
$\Leftrightarrow det M_B^B (f - \lambda \cdot id) = 0$  
$\Leftrightarrow det \Big(M_B^B (f)- \lambda \cdot M_B^B (id) \Big) = 0$  
$\Leftrightarrow det \Big(M_B^B (f) - \lambda \cdot 1_n \Big) = 0$

Pertanto gli autovalori di $f$ sono tutti e soli i valori $\lambda \in K$ tali che $det \Big(M_B^B (f) - \lambda \cdot 1_n \Big) = 0$ per qualsiasi base $B$ di $V$.  
Inoltre $Aut(\lambda) = \{v \in V : f(v) = \lambda \cdot v\} = \{v \in V : (f - \lambda \cdot id)(v) = 0\} = \{v \in V : f_{\lambda}(v) = 0\} = ker f_{\lambda}$

Pertanto, essendo $Aut(\lambda)$ il nucleo di una applicazione lineare, riotteniamo il risultato tale che $Aut(\lambda)$ è un sottospazio vettoriale di $V$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita, sia $\lambda \in K$ un autovalore di $f$, il numero $dim_k\ Aut(\lambda)$ è detto la **molteplicità generica** dell'autovettore $\lambda$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e consideriamo ora $\lambda$ come un parametro, una variabile; forniamo il determinante

$det (M_B^B (f) - \lambda \cdot id)$

dove $B$ è una qualsiasi base di $V$; questa quantità è un polinomio in $\lambda$ a coefficienti in $K$ ed è detto il **polinomio caratteristico** di $f$ ed è denotato $P_f (\lambda)$.

**Esempio**  
Consideriamo $f : \mathbb{R}^2 \rightarrow \mathbb{R}^2$

$$
f =
\left(
  \begin{pmatrix}
    x \\
    y
  \end{pmatrix}
\right) =
\begin{pmatrix}
  x + y \\
  2x + 2y
\end{pmatrix}
$$

se consideriamo la base standard $\xi$ di $\mathbb{R}^2$, $\xi = \{e_1, e_2\}$, allora

$$
M_{\xi}^{\xi} (f) =
\begin{pmatrix}
  1 & 1 \\
  2 & 2
\end{pmatrix}
$$

il polinomio caratteristico è dunque

$$
P_f (\lambda) = det \Big( M_{\xi}^{\xi} (f) - \lambda \cdot 1_2 \Big) =
$$

$$
= det \left(
  \begin{pmatrix}
    1 & 1 \\
    2 & 2
  \end{pmatrix} -
  \lambda \begin{pmatrix}
    1 & 0 \\
    0 & 1
  \end{pmatrix}
\right) =
$$

$$
= det \begin{pmatrix}
  \begin{pmatrix}
    1 - \lambda & 1 \\
    2 & 2 - \lambda
  \end{pmatrix}
\end{pmatrix} =
$$

$$
= (1 - \lambda)(2 - \lambda) - 1 \cdot 2 =
$$

$$
= 2 - \lambda - 2 \lambda + \lambda^2 - 2 = \lambda^2 - 3 \lambda
$$

**Osservazione**  
Per come abbiamo caratterizzato gli autovalori, abbiamo che gli autovalori di $f$ sono tutti e solo quei $\overline{\lambda} \in K$ tali per cui $P_f (\overline{\lambda}) = 0$, ovvero sono tutte e sole le radici del polinomio caratteristico dell'applicazione $f$.

**Esempio**  
(continuando da quello prima)

$P_f (\lambda) = \lambda^2 - 3 \lambda = \lambda \cdot (\lambda - 3)$

quindi le radici di $P_f$ sono $\{0, 3\}$, otteniamo quindi che $0$ e $3$ sono gli autovalori di $f$; esistono dunque autovettori non nulli $v_1$ (rispetto a $0$) e $v_2$ (rispetto a $3$), dato che autovettori non nulli rispetto ad autovettori distinti sono linearmente indipendenti, otteniamo che $\{v_1, v_2\}$ sono vettori linearmente indipendenti, e pertanto $B = \{v_1, v_2\}$ è una base di $\mathbb{R}^2$ e quindi $f$ ammette una base di autovettori, ovvero è diagonalizzabile; possiamo calcolare $v_1$ e $v_2$ determinando $ker (f_0) = ker (f - 0 \cdot id) = ker f$ e $ker (f_3) = ker (f - 3 \cdot id)$ che sono rispettivamente $Aut(0)$ e $Aut(3)$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e sia $P_f (\lambda)$ il suo polinomio caratteristico, supponiamo che $\overline{\lambda} \in K$ sia un autovalore per $f$, ovvero $P_f (\overline{\lambda}) = 0$; per il teorema di Ruffini vale che $P_f (\lambda) = (\lambda - \overline{\lambda}) \cdot g(\lambda)$; definiamo la **molteplicità algebrica** di $\overline{\lambda}$ come quel numero $m$ tale per cui $P_f (\lambda) = (\lambda - \overline{\lambda})^m \cdot \tilde{g}(\lambda)$ e $\lambda - \overline{\lambda}$ non divide $\tilde{g}(\lambda)$.

**Esempio**  
Se $P_f (\lambda) = (\lambda - 5)^2 \cdot (\lambda + 1)^3$, allora le radici di $P_f (\lambda)$ sono $5$ e $-1$ e la molteplicità algebrica di $5$ è $2$, mente la molteplicità algebrica di $-1$ è $3$.

**Notazione**  
Denotiamo la molteplicità geometrica di $\overline{\lambda} = m_g(\overline{\lambda})$.
Definiamo la molteplicità algebrica di $\overline{\lambda} = m_a(\overline{\lambda})$.

**Proposizione**  
Se $f : V \rightarrow V$ è applicazione lineare con $dim V$ finita e $\overline{\lambda}$ è un autovalore per $f$, allora $m_g(\overline{\lambda}) \leq m_a(\overline{\lambda})$.

**Osservazione**  
Se $f : V \rightarrow V$ è applicazione lineare con $dim V = n$, allora $P_f (\lambda)$ è un polinomio di grado esattamente $n$; pertanto la somma delle molteplicità algebriche degli autovalori di $f$ è al più $n$.

Supponiamo di avere un'applicazione lineare $f : V \rightarrow V$ con $dim V = n$ tale per cui il polinomio caratteristico si scompone nel prodotto di $n$ fattori lineari distinti, ovvero $P_f (\lambda) = (\lambda - \alpha_1) \cdot (\lambda - \alpha_2) \cdot \ \ldots \ \cdot (\lambda - \alpha_n)$, con $\alpha_1, \alpha_2, \dots, \alpha_n$ tutti distinti. Allora $\alpha_1, \alpha_2, \dots, \alpha_n$ sono le radici di $P_f (\lambda)$ e dunque sono autovalori per $f$. Per ciascuno di tali autovalori esiste almeno un autovettore non nullo. In questo modo determiniamo $v_1, v_2, \dots, v_n$ con $v_i$ autovettore relativo ad $\alpha_i$. Ora, $v_1, v_2, \dots, v_n$ sono autovettori non nulli relativi ad autovalori differenti, quindi sono linearmente indipendenti; essendo essi $n$ vettori in uno spazio vettoriale di dimensione $n$, essi sono una base di $V$. Pertanto in questo caso $f$ è diagonalizzabile. Notiamo inoltre che $m_a (\alpha_i) = 1,\ \forall i$ e dunque deve essere $m_g (\alpha_i) = 1,\ \forall i$, il che implica che $dim \ Aut(\alpha_i) = 1,\ \forall i$, e dato che $v_1 \in Aut (\alpha_i)$ e $v_i \neq 0$, quindi $Aut (\alpha_i) = span(v_i)$.

Vale un teorema più generale:

**Teorema (criterio di diagonalizzazione)**  
Sia $f : V \rightarrow V$ applicazione lineare con $dim V$ finita. Allora $f$ è diagonalizzabile se e solo se valgono le seguenti proprietà:

1. $P_f (\lambda)$ si scompone completamente in fattori di primo grado (non necessariamente distinti).
2. per ogni autovalore $\overline{\lambda}$ (ovvero per ogni radice di $P_f (\lambda)$) vale che $m_g(\overline{\lambda}) = m_a(\overline{\lambda})$.

(quindi $1.$ dice che $P_f (\lambda) = (\lambda - \alpha_1)^{m_1} \cdot (\lambda - \alpha_2)^{m_2} \cdot \dots \cdot (\lambda - \alpha_n)^{m_k}$ e $2.$ dice che $m_i = dim \ Aut(\alpha_i)$ per ogni $i \in \{1, 2, \dots, k\}$)

**Esempio**  
Consideriamo la seguente applicazione lineare  

$f : \mathbb{R}^3 \rightarrow \mathbb{R}^3$

$f \left(\begin{pmatrix} x \\ y \\ z \end{pmatrix} \right) = \begin{pmatrix} 2x -3z \\ -y \\ -3x +2z \end{pmatrix}$

allora se $\xi$ è la base standard di $\mathbb{R}^3$, vale che  

$M_{\xi}^{\xi} (f) = \begin{pmatrix} 2 & 0 & -3 \\ 0 & -1 & 0 \\ -3 & 0 & 2 \end{pmatrix}$

vogliamo comprendere se $f$ sia diagonalizzabile o meno; calcoliamo $P_f (\lambda)$

$P_f (\lambda) = det \Big( M_{\xi}^{\xi} - \lambda \cdot 1_3 \Big) =$

$= det \begin{pmatrix} 2 - \lambda & 0 & -3 \\ 0 & -1 -\lambda & 0 \\ -3 & 0 & 2 - \lambda \end{pmatrix} =$

$= (-1 - \lambda) det \begin{pmatrix} 2 - \lambda & -3 \\ -3 & 2 - \lambda \end{pmatrix} =$

$= -(1 + \lambda) \cdot \Big[ (2 - \lambda)^2 - 9 \Big] =$

$= -(1 + \lambda) \cdot \Big[ \lambda^2 -4 \lambda -5 \Big] =$

$= -(1 + \lambda) (\lambda + 1) (\lambda - 5) =$

$= -(1 + \lambda)^2 (\lambda - 5)$

abbiamo quindi che le radici di $P_f (\lambda)$ sono $-1$ e $-5$, ovvero $Sp (f) = \{ -1, -5 \}$; abbiamo che $P_f (\lambda)$ si scompone completamente in fattori di grado $1$, e vale che  
$m_a (-1) = 2, \quad m_a (5) = 1$  
per vedere se $f$ sia diagonalizzabile o meno, dobbiamo verificare se  
$m_g (-1) = 2, \quad m_g (5) = 1$  
sicuramente $m_g (5) = 1$ perché dal fatto che $5$ è autovalore segue che $m_g (5) \geq 1$ e in generale $m_g (5) \leq m_a (5) = 1$; resta da verificare se $m_g (-1) = 2 \iff dim \ Aut(-1) = 2$  
per calcolare $Aut (-1)$ consideriamo  

$M_{\xi}^{\xi} (f) - (-1) 1_3 =$

$M_{\xi}^{\xi} (f) + 1_3 =$

$= \begin{pmatrix} 3 & 0 & -3 \\ 0 & 0 & 0 \\ -3 & 0 & 3 \end{pmatrix}$

$ker \begin{pmatrix} 3 & 0 & -3 \\ 0 & 0 & 0 \\ -3 & 0 & 3 \end{pmatrix} = span \left(\begin{pmatrix} 0 \\ 1 \\ 0 \end{pmatrix}, \begin{pmatrix} 1 \\ 0 \\ 1 \end{pmatrix} \right)$

pertanto $dim \ ker (f - (-1) \cdot id) = 2$, ovvero $mg (-1) = 2$; quindi per il teorema precedente $f$ è diagonalizzabile.

# Geometria Affine

---

Grazie per l'attenzione e spero che questi appunti siano stati utili.  
Se trovi errori, ti prego di inviarmi un'email a <a href="mailto:norbedo@proton.me?subject=Errore%20Appunti%20Analisi%201%20(2023-2024)">norbedo@proton.me</a>.  
Buono studio e buona fortuna!

Giovanni Norbedo

norbedo@proton.me  
[norbedo.xyz](https://norbedo.xyz)  
[github.com/giovanni-norbedo](https://github.com/giovanni-norbedo)  
[www.linkedin.com/in/norbedo](https://www.linkedin.com/in/norbedo)
