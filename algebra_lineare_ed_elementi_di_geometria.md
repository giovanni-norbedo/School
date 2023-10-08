# Algebra Lineare ed Elementi di Geometria

## Introduzione

### Equazioni e Soluzioni

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

**Osservazione**: nella prima equazione ci veniva chiesto di determinare *un numero* , nella seconda ogni sostituzione è costituita da *tre numeri* ; diciamo quindi che la prima equazione è in  *una variabile* , la seconda in *tre variabili*.

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

$$
\begin{cases}
    \begin{align*}
        3x + 1y - 2z &= 0 \\
    - 2x - 2y + 2z &= 0 \\  
        2x + 0y - 1z &= 0
    \end{align*}
\end{cases}
$$

Le proprietà A, B e C valgono anche in questo caso.

Ora vorrei calcolare le soluzioni di questo sistema. Per farlo usiamo un teorema chiamato "*eliminazione di Gauss*" o "*eliminazione gaussiana*".

> **AGGIUNTO**:
>
> **Definizione**:  
> L'**eliminazione gaussiana** è un metodo matematico algoritmico utilizzato per trasformare una matrice in una *matrice a scalini* o *matrice a scala*, semplificando così la risoluzione dei sistemi di equazioni lineari.
>
> [Wikipedia](https://it.wikipedia.org/wiki/Metodo_di_eliminazione_di_Gauss) | [YouMath](https://www.youmath.it/lezioni/algebra-lineare/matrici-e-vettori/831-eliminazione-di-gauss.html)
>
> **Esercizio**: data una matrice, ridurla in una matrice a scalini utilizzando il metodo di Gauss.
>
> **Definizione**:  
> Una **matrice a scalini** è una matrice $A$ avente le proprietà seguenti:
>
> - ogni riga, dopo la prima, inizia con almeno uno 0 in più della riga soprastante;
> - se una riga è nulla, allora ogni riga sottostante è nulla.

**Definizione**:  
Due sistemi si dicono **equivalenti** se hanno le stesse soluzioni.*

Andremo a manipolare il sistema al fine di trovarne uno equivalente (ovvero con le stesse soluzioni) più semplicemente da risolvere, ovvero nella forma :

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
    \begin{align*}
        1x + 1y - 1z &= 0 \\
        3x - 1y + 2z &= 0 \\  
        2x + 0y - 1z &= 0
    \end{align*}
\end{cases}
$$

Manipolo la seconda equazione per "eliminare la x", sottraendo tre volte la prima equazione

$(3x +y -2z) -3 \cdot (x + y -z) = 0 -3 \cdot 0$  

$\cancel{3x} +y -2z \ \cancel{-3x} -3y +3x = 0$  

$-2y + z = 0$

Facciamo la stessa cosa con la terza equazione

$(2x - z) -2 \cdot (x+y-z) = 0 - 2 \cdot 0$  

$\cancel{2x} -z \ \cancel{-2x} -2y +2z = 0$  

$-2y + z = 0$  

In definitiva il sistema è equivalente a

$$
\begin{cases}
    \begin{align*}
        x + y - z &= 0 \\
        -2y + z &= 0
    \end{align*}
\end{cases}
$$

Questo sistema ci dice che se $z$ assume un valore $\alpha \in \mathbb{R}$  
allora $y$ deve essere $\frac{1}{2} \alpha$ e $x$ deve essere $\frac{1}{2} \alpha$.

Quindi le soluzioni sono della forma

$(\frac{1}{2} \alpha, \frac{1}{2} \alpha, \alpha) = \alpha \cdot (\frac{1}{2}, \frac{1}{2}, 1)$

Se ora, a partite dal sistema iniziale, estraessimo i coefficienti e li ponessimo in una tabella, otterremmo

$$
\begin{cases}
    \begin{align*}
        3x + 1y - 2z &= 0 \\
    - 2x - 2y + 2z &= 0 \\  
        2x + 0y - 1z &= 0
    \end{align*}
\end{cases}
$$

$$
\begin{bmatrix*}[r]
    3  &  1 & -2 \\
    -2 & -2 &  2 \\
    2  &  0 & -1
\end{bmatrix*}
$$

Moltiplico per $- \frac{1}{2}$ la seconda equazione

$$
\begin{bmatrix*}[r]
    3  &  1 & -2 \\
    1  &  1 & -1 \\
    2  &  0 & -1
\end{bmatrix*}
$$

Inverto la prima equazione con la seconda

$$
\begin{bmatrix*}[r]
    1  &  1 & -1 \\
    3  &  1 & -2 \\
    2  &  0 & -1
\end{bmatrix*}
$$

Sottraggo dall'attuale seconda equazione la prima equazione moltiplicata per $3$

$$
\begin{bmatrix*}[r]
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    2  &  0 & -1
\end{bmatrix*}
$$

Sottraggo dalla terza equazione la prima moltiplicata per $2$

$$
\begin{bmatrix*}[r]
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    0  & -2 &  1
\end{bmatrix*}
$$

Sottraggo dalla terza equazione la seconda

$$
\begin{bmatrix*}[r]
    1  &  1 & -1 \\
    0  & -2 &  1 \\
    0  &  0 &  0
\end{bmatrix*}
$$

Sono riuscito a risolvere il sistema.  
Ho utilizzato una procedura algoritmica (un algoritmo può essere eseguito da un calcolatore).  

---

### Vettori applicati e vettori liberi

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

![somma di due vettori](./img/somma_vettori.png)

**Attenzione**:  
se $B \not ={C}$, allora non sappiamo come sommare $\overrightarrow{AB}$ e $\overrightarrow{CD}$

**Osservazione**:  
$\overrightarrow{AB} + \overrightarrow{BB} = \overrightarrow{AB}$ e $\overrightarrow{AA} + \overrightarrow{AB} = \overrightarrow{AB}$

**Proposizione**:  
La somma di vettori applicati, quando è possibile eseguirla, soddisfa la proprietà associativa.

Nei numeri reali, la proprietà associativa della somma dice che per ogni $a,b,c \in \mathbb{R}$ vale che  

$$(a+b) + c = a + (b+c)$$

per questo motivo possiamo scrivere $a+b+c$ senza ambiguità.

**Dimostrazione**:  
Dobbiamo dimostrare che per ogni vettore applicato $\overrightarrow{AB}, \overrightarrow{BC}, \overrightarrow{CD}$ vale che

$(\overrightarrow{AB} + \overrightarrow{BC}) + \overrightarrow{CD} = \overrightarrow{AB} + (\overrightarrow{BC} + \overrightarrow{CD})$

Ora, vale che

$(\overrightarrow{AB} + \overrightarrow{BC}) + \overrightarrow{CD} = \overrightarrow{AC} + \overrightarrow{CD} = \overrightarrow{AD}$  
$\overrightarrow{AB} + (\overrightarrow{BC} + \overrightarrow{CD}) = \overrightarrow{AB} + \overrightarrow{BD} = \overrightarrow{AD}$

![proprietà associativa dei vettori](./img/proprietà_associativa_dei_vettori.png)

$\square$

**Definizione**: dato un vettore applicato $\overrightarrow{AB}$ e un numero reale $a \in \mathbb{R}$, otteniamo $a \cdot \overrightarrow{AB}$ in questo modo:

- se $a=0,\ a \cdot \overrightarrow{AB} := \overrightarrow{AA}$
- se $a>0,\ a \cdot \overrightarrow{AB} :=$ vettore applicato in $A$ con *stessa direzione e stesso verso* di $\overrightarrow{AB}$ e modulo $a \cdot$ [modulo di $\overrightarrow{AB}$] (il modulo di $\overrightarrow{AB}$ si può indicare con $|\overrightarrow{AB}|$ e quindi possiamo scrivere "modulo uguale ad a $\cdot |\overrightarrow{AB}|$)
- se $a<0, a \cdot \overrightarrow{AB} :=$ vettore applicato in $A$ con stessa direzione e verso opposto di $\overrightarrow{AB}$ e modulo uguale ad $|a| \cdot |\overrightarrow{AB}|$, (ovvero in questo caso $(-a) \cdot (|\overrightarrow{AB}|)$).

Per ottenere una teoria "più comprensiva" introduciamo un nuovo oggetto, i vettori liberi.

**Definizione**: due vettori applicati $\overrightarrow{AB}$ e $\overrightarrow{CD}$ si dicono **equipollenti** se e solo se $\overrightarrow{AB}$ e $\overrightarrow{CD}$ hanno la medesima direzione, il medesimo verso e il medesimo modulo (cambia il PDA).

Si verifica che quella di equipollenza è una relazione di equivalenza, ovvero essa è riflessiva, simmetrica e transitiva.

**Definizione**: dato un vettore applicato $\overrightarrow{AB}$, si definisce la sua classe di equipollenza.

$[\overrightarrow{AB}] := \{\text{vettori applicati}\ \overrightarrow{CD}\ \text{tale che}\ \overrightarrow{AB} \equiv \overrightarrow{CD}\}$

**Proposizione**: dai risultati della geometria euclidea segue che dato un vettore applicato $\overrightarrow{AB}$ e un punto $C$, allora esiste sempre un vettore applicato $\overrightarrow{CD}$ equipollente ad $\overrightarrow{AB}$;  

da questo segue che data una classe di equipollenza denotata $\vec{V}$, e dato un punto $C$ nel piano, esiste dunque un vettore applicato che appartiene a $\vec{V}$ e che ha punto iniziale $C$.

**Osservazione**: se $\overrightarrow{AB} \equiv \overrightarrow{CD}$ allora $[\overrightarrow{AB}] = [\overrightarrow{CD}]$; si dice che $\overrightarrow{AB}$ e $\overrightarrow{CD}$ sono dei **rappresentanti** della medesima classe di equipollenza.

**Definizione**: una classe di equipollenza $\vec{V}$ di vettori applicati si dice **vettore libero**.

**Osservazione**: tutti i vettori applicati nulli sono equipollenti e dunque formano una sola classe di equipollenza che denotiamo $\overrightarrow{O}$.

**Definizione**: dati due vettori liberi $\vec{U}$ e $\vec{V}$ definiamo la loro somma $\vec{U} + \vec{V}$ nella maniera seguente:

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

- per ogni $\vec{V}$
  - $1 \cdot \vec{V} = \vec{V}$
- per ogni $\vec{V}$
  - $(-1) \cdot \vec{V} = - \vec{V}$
- per ogni $\lambda, \mu \in \mathbb{R}$, per ogni $\vec{V}$
  - $(\lambda \mu) \cdot \vec{V} = \lambda (\mu \cdot \vec{V})$
- per ogni $\lambda, \mu \in \mathbb{R}$, per ogni $\vec{V}, \vec{U}$
  - $(\lambda + \mu) \cdot \vec{V} = \lambda \cdot \vec{V} + \mu \cdot \vec{V}$
  - $\lambda \cdot (\vec{V} + \vec{U}) = \lambda \cdot \vec{U} + \lambda \cdot \vec{V}$

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
un $\mathbb{R}$-spazio vettoriale si dice anche uno spazio vettoriale di $\mathbb{R}$.

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

$v + (-1) \cdot v \xlongequal{V8} (-1) \cdot v + v \xlongequal{V6} (-1 +1) \cdot v = 0 \cdot v = 0$

Se sapessimo che $0 \cdot v = 0$ (vettore nullo), allora avremmo concluso la dimostrazione,  
però questo non ci è dato a sapere, stanti semplicemente le 8 proprietà definitasi degli spazi vettoriali; dimostriamo qui di seguito che questa ulteriore proprietà segue dalle 8 proprietà.

$\square$

**Proposizione**  
Sia $V$ uno spazio vettoriale; allora $\forall v \in V$, vale che

$0 \cdot v = 0$

**Dimostrazione**  
Sia $v \in V$; abbiamo che

$0 \cdot v = (0 + 0) \cdot v \xlongequal{V6} 0 \cdot v + 0 \cdot v$

quindi

$0 \cdot v = 0 \cdot v + 0 \cdot v$

ora sommiamo ad entrambi i membri dell'uguaglianza l'opposto di $0 \cdot v$

$-(0 \cdot v) + 0 \cdot v = -(0 \cdot v) + 0 \cdot v + 0 \cdot v$

per la proprietà $V4$, individuo i vettori nulli; pertanto

$0 = 0 + 0 \cdot v$  
$0 = 0 \cdot v$

che è quindi il vettore nullo.

$\square$

**Dimostrazione** X CASA  
Il vettore opposto è unico.

...

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

allora ...

**Definizione**  
Sia $V$ un $\mathbb{R}$-spazio vettoriale, un sottoinsieme $W \subseteq V$ si dice un **sottospazio vettoriale** di $V$ se valgono:

1. il vettore nullo di $V$ appartiene a $W$
...

**Esempio**  
$\mathbb{R}^2 \leftrightarrow$ {punti del piano}

...

---

### Matrici

**Definizione**  
Siano $m,n \in \mathbb{N}$; una matrice $m \times n$ a coefficienti reali è una tabella rettangolare di $m \cdot n$ numeri del tipo

!!! MATRICE TABELLA $a_{mn}$

dove $a_{ij}$ è un numero reale, ovvero

$a_{ij} \in \mathbb{R}$, $\forall i \in \{1, 2, \dots, m\}$ e $\forall j \in \{1, 2, \dots, n\}$

**Esempio**  
!!! MATRICE TABELLA dalla foto

**Definizione**  
Sia $A = (a_{ij})$ una matrice a coefficienti reali

per ogni $i \in \{1, 2, \dots, m\}$ la i-esima riga è la matrice

$A_j = (a_{i1}, a_{i2}, \dots, a_{in})$

per ogni $j \in \{1, 2, \dots, n\}$ la j-esima colonna la matrice

!!! MATRICE COLONNA FOTO
