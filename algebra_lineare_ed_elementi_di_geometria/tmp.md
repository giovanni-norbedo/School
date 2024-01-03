Ricordiamo il teorema di Cramer ...

## Applicazioni lineari

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
Sia $f : \mathbb{R}^2 \rightarrow \mathbb{R}$ definita da $f(\begin{pmatrix} 1 \\ 0 \end{pmatrix}) = x + 2y$

vale che $f(\begin{pmatrix} x_1 \\ y_1 \end{pmatrix} \cdot \begin{pmatrix} x_2 \\ y_2 \end{pmatrix}) = x_1x_2 + 2y_1y_2$ ...


**Definizione**  
Sia $A \in M_{m, n}(\mathbb{R})$; allora $A$ definisce una funzione

$L_A : K^n \rightarrow K^m$  
$X \mapsto AX$

**Proposizione**  
$\forall A \in M_{m, n}(\mathbb{R})$, la funzione $L_A$ è una applicazione lineare.

**Dimostrazione**  
$L_A (v_1 + v_2) = A \cdot (v_1 + v_2) = A \cdot v_1 + A \cdot v_2 -= L_A(v_1) + L_A(v_2)$

similmente se $\lambda \in K$ e $v \in K^n$, vale $L_A(\lambda \cdot v) = \lambda \cdot L_A(v)$

**Esempio**  
Sia $\alpha \in \mathbb{R}$ e considero la matrice

...

l'applicazione lineare $L_{R_{\alpha}} : \mathbb{R}^2 \rightarrow \mathbb{R}^2$ è la rotazione di angolo $\alpha$ in senso antiorario

...

**Definizione**  
(applicazioni lineare che "prendono le coordinate")  

...

---


lezione del 28/11 !!!

---

### Diagonalizzabilità

**Osservazione**  
Ricordiamo che se $f : V \rightarrow V$ è applicazione lineare, $dim V$ finita  e
e $N = M_B^B (f)$ ed $N' = M_C^C (f)$, allora

$N' = P^{-1} \cdot N \cdot P$

dove $P$ è una matrice invertibile; pertanto possiamo dire che $f$ è diagonalizzabile se e solo se, presa una sua matrice associata $M_B^B (f)$ rispetto ad una base $B$ di $V$, tale matrice è simile a una matrice diagonale, ovvero se esiste $P$ invertibile tale che $P^{-1} \cdot M_B^B (f) \cdot P$ è diagonale.

**Proposizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita, allora è diagonalizzabile se e solo se esiste una base $B$ di $V$ costituita tutta da autovettori.

**Dimostrazione**  
Se $B = \{v_1, \dots, v_n\}$ è una base costituita da autovettori; e per ogni $i \in \{1, \dots, n\}$, $v_i$ è un autovettore associato all'autovalore $\lambda_i$ (ovvero vale che $f(v_i) = ...), ...

...

ovvero tale matrice è diagonale (...)

Per comprendere se una tale base può esistere, andiamo a ripensare agli autospazi in maniera differente. In particolare, andiamo a ridimostrare che gli autospazi sono sottospazi vettoriali in una maniera alternativa.

Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e sia $\lambda \in K$ un autovalore di $f$. Allora per definizione esiste $v \in V$ con $v \neq 0$ tale che $f(v) = \lambda \cdot v$. Ora $f(v) = \lambda \cdot v \Longleftrightarrow f(v) - \lambda v = 0 \Leftrightarrow f(v) - \lambda \cdot id_v (v) = 0 \Leftrightarrow (f - \lambda \cdot id) (v) = 0$.

Per definizione $(f - \lambda \cdot id) := f_{\lambda}$

Allora $f_{\lambda} : V \rightarrow V$ e $v \in ker f_{\lambda}$. Pertanto $ker f_{\lambda} = \{0\}$, perché $v \neq 0$. Ciò significa che $f_{\lambda}$ non è iniettiva. Pertanto $f_{\lambda}$ non è invertibile e dunque per qualsiasi base $B$ di $V$ vale che

$M_B^B (f_{\lambda})$ non è invertibile $\Leftrightarrow$ $det M_B^B (f_{\lambda}) = 0 \Leftrightarrow det M_B^B (f - \lambda \cdot id) = 0 \Leftrightarrow det (M_B^B (f)- \lambda \cdot M_B^B (id)) = 0 \Leftrightarrow det (M_B^B (f) - \lambda \cdot 1_n = 0$

Pertanto gli autovalori di $f$ sono tutti e soli i valori $\lambda \in K$ tali che $det (M_B^B (f) - \lambda \cdot 1_n = 0$ per qualsiasi base $B$ di $V$.  
Inoltre $Aut(\lambda) = \{v \in V : f(v) = \lambda \cdot v\} = \{v \in V : (f - \lambda \cdot id)(v) = 0\} = \{v \in V : f_{\lambda}(v) = 0\} = ker f_{\lambda}$

Pertanto, essendo $Aut(\lambda)$ il nucleo di una applicazione lineare, riotteniamo il risultato tale che $Aut(\lambda)$ è un sottospazio vettoriale di $V$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita, sia $\lambda \in K$ un autovalore di $f$, il numero $dim_k\ Aut(\lambda)$ è detto la **molteplicità generica** dell'autovettore $\lambda$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e consideriamo ora $\lambda$ come un parametro, una variabile; forniamo il determinante

$det (M_B^B (f) - \lambda \cdot 1_n )$

dove $B$ è una qualsiasi base di $V$; questa quantità è un polinomio in $\lambda$ a coefficienti in $K$ ed è detto il **polinomio caratteristico** di $f$ ed è denotato $P_f (\lambda)$.

**Esempio**  
Consideriamo $f : \mathbb{R}^2 \rightarrow \mathbb{R}^2$

$$
f =
\begin{pmatrix}
  \begin{pmatrix}
    x \\
    y
  \end{pmatrix}
\end{pmatrix} =
\begin{pmatrix}
  x + y \\
  2x + 2y
\end{pmatrix}
$$

se consideriamo la base standard $\xi$ di $\mathbb{R}^2$, $\xi = \{...\}$, allora

$$
M_{\xi}^{\xi} (f) =
\begin{pmatrix}
  1 & 1 \\
  2 & 2
\end{pmatrix}
$$

il polinomio caratteristico è dunque

$$
P_{\lambda} (f) = det ( M_{\xi}^{\xi} (f) - \lambda ...) = ...
= det \begin{pmatrix}
  \begin{pmatrix}
    1 - \lambda & 1 \\
    2 & 2 - \lambda
  \end{pmatrix}
\end{pmatrix} =
(1 - \lambda)(2 - \lambda) - 1 \cdot 2 =
2 - \lambda - 2 \lambda + \lambda^2 - 2 = \lambda^2 - 3 \lambda
$$

**Osservazione**  
Per come abbiamo caratterizzato gli autovalori, abbiamo che gli autovalori di $f$ sono tutti e solo quei $\lambda \in K$ tali per cui $P_f (\overline{\lambda}) = 0$, ovvero sono tutte e sole le radici del polinomio caratteristico dell'applicazione $f$.

**Esempio**  
(continuando da quello prima)

$P_f (\lambda) = \lambda^2 - 3 \lambda = \lambda \cdot (\lambda - 3)$

quindi le radici di $P_f$ sono $\{0, 3\}$, otteniamo quindi che $0$ e $3$ sono gli autovalori di $f$; esistono dunque autovettori non nulli $v_1$ (rispetto a $0$) e $v_2$ (rispetto a $3$), dato che autovettori non nulli rispetto ad autovettori distinti sono linearmente indipendenti, otteniamo che $\{v_1, v_2\}$ sono vettori linearmente indipendenti, e pertanto $B = \{v_1, v_2\}$ è una base di $\mathbb{R}^2$ e quindi $f$ ammette una base di autovettori, ovvero è diagonalizzabile; possiamo calcolare $v_1$ e $v_2$ determinando $ker (f_0) = ker (f - 0 \cdot id) = ker f$ e $ker (f_3) = ker (f - 3 \cdot id)$ che sono rispettivamente $Aut(0)$ e $Aut(3)$.

**Definizione**  
Sia $f : V \rightarrow V$ applicazione lineare, $dim V$ finita e sia $P_f (\lambda)$ il suo polinomio caratteristico, supponiamo che $\overline{\lambda} \in K$ sia un autovettore per $f$, ovvero $P_f (\overline{\lambda}) = 0$; per il teorema di Ruffini vale che $P_f (\lambda) = (\lambda - \overline{\lambda}) \cdot g(\lambda)$; definiamo la **molteplicità algebrica** di $\overline{\lambda}$ come quel numero $m$ tale per cui $P_f (\lambda) = (\lambda - \overline{\lambda})^m \cdot \tilde{g}(\lambda)$ e $\lambda - \overline{\lambda}$ non divide $\tilde{g}(\lambda)$.

**Esempio**  
Se $P_f (\lambda) = (\lambda - 5)^2 \cdot (\lambda + 1)^3$, allora le radici di $P_f (\lambda)$ sono $5$ e $-1$ e la molteplicità algebrica di $5$ è $2$, mente la molteplicità algebrica di $-1$ è $3$.

!!! ??? algebrica o geometrica

**Notazione**  
Denotiamo la molteplicità geometrica di $\overline{\lambda} = m_g(\overline{\lambda})$.
Definiamo la molteplicità algebrica di $\overline{\lambda} = m_a(\overline{\lambda})$.

**Proposizione**  
Se $f : V \rightarrow V$ è applicazione lineare con $dim V$ finita e $\overline{\lambda}$ è un autovalore per $f$, allora $m_g(\overline{\lambda}) = m_a(\overline{\lambda})$.

**Osservazione**  
Se $f : V \rightarrow V$ è applicazione lineare con $dim V = n$, allora $P_f (\lambda)$ è un polinomio di grado esattamente $n$; pertanto la somma delle molteplicità algebriche degli autovalori di $f$ è al più $n$.

Supponiamo di avere un'applicazione lineare $f : V \rightarrow V$ con $dim V = n$ tale per cui il polinomio caratteristico si scompone nel prodotto di $n$ fattori lineari distinti, ovvero $P_f (\lambda) = (\lambda - \alpha_1) \cdot (\lambda - \alpha_2) \cdot \ldots \cdot (\lambda - \alpha_n)$, con $\alpha_1, \alpha_2, \ldots, \alpha_n$ tutti distinti. Allora $\alpha_1, \alpha_2, \ldots, \alpha_n$ sono le radici di $P_f (\lambda)$ e dunque sono autovalori per $f$. Per ciascuno di tali autovalori esiste almeno un autovettore non nullo. In questo modo determiniamo $v_1, v_2, \ldots, v_n$ con $v_i$ autovettore relativo ad $\alpha_i$. Ora, $v_1, v_2, \ldots, v_n$ sono autovettori non nulli relativi ad autovalori differenti, quindi sono linearmente indipendenti; essendo essi $n$ vettori in uno spazio vettoriale di dimensione $n$, essi sono una base di $V$. Pertanto in questo caso $f$ è diagonalizzabile. Notiamo inoltre che $m_a (\alpha_i) = 1,\ \forall i$ e dunque deve essere $m_g (\alpha_i) = 1,\ \forall i$, il che implica che $dim Aut(\alpha_i) = 1,\ \forall i$, e dato che $v_1 \in Aut (\alpha_i)$ e $v_i \neq 0$, quindi $Aut (\alpha_i) = span(v_i)$.

Vale un teorema più generale:

**Teorema (criterio di diagonalizzazione)**  
Sia $f : V \rightarrow V$ applicazione lineare con $dim V$ finita. Allora $f$ è diagonalizzabile se e solo se valgono le seguenti proprietà:

1. $P_f (\lambda)$ si scompone completamente in fattori di primo grado (non necessariamente distinti).
2. per ogni autovalore $\overline{\lambda}$ (ovvero per ogni radice di $P_f (\lambda)$) vale che $m_g(\overline{\lambda}) = m_a(\overline{\lambda})$.

(quindi 1. dice che $P_f (\lambda) = (\lambda - \alpha_1)^{m_1} \cdot (\lambda - \alpha_2)^{m_2} \cdot \ldots \cdot (\lambda - \alpha_n)^{m_k}$ e 2. dice che $m_i = dim Aut(\alpha_i)$ pe ogni $i \in \{1, 2, \ldots, k\}$ ...)

**Esempio**  
Consideriamo la seguente applicazione lineare  
...

manca la fine della lezione
