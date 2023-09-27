# Analisi Matematica 1

## Prerequisiti

### Proposizioni

$p,\ q,\ r,\ \dots$

Una proposizione è una parte del discorso a cui si può assegnare un valore di verità o di falsità $(V, F)$.

> Esempio:   
> $p: \text{Giorgio è più alto di 1,80m.} \rightarrow V$  
> $q: \text{Roma è la capitale della Francia.} \rightarrow F$   

---

### Connettivi logici

I connettivi logici servono a costruire nuove proposizioni dalle proposizioni di partenza.

- Connettivi UNARI
  - Negazione
- Connettivi BINARI
  - Congiunzione 
  - Disgiunzione
  - Implicazione
  - Doppia implicazione

### Negazione - NOT

$\neg p$   
"non p"

| $p$ | $\neg p$ |
| --- | :------: |
| V   |    F     |
| F   |    V     |

### Congiunzione - AND

$p \wedge q$  
"p e q"  

| $p$ | $q$ | $p \wedge q$ |
| --- | --- | :----------: |
| V   | V   |      V       |
| V   | F   |      F       |
| F   | V   |      F       |
| F   | F   |      F       |

### Disgiunzione - OR

$p \vee q$  
"p oppure q"  

| $p$ | $q$ | $p \vee q$ |
| --- | --- | :--------: |
| V   | V   |     V      |
| V   | F   |     V      |
| F   | V   |     V      |
| F   | F   |     F      |

> La disgiunzione non esclusiva $(XOR)$ si indica con $\veebar$ e la sua **tabella di verità** è:
> | $p$ | $q$ |  $p \veebar q$  |
> | --- | --- | :-------------: |
> | V   | V   |        F        |
> | V   | F   |        V        |
> | F   | V   |        V        |
> | F   | F   |        F        |
>
> $vel \rightarrow$ disgiunzione inclusiva  
> $aut \rightarrow$ disgiunzione esclusiva  

### Implicazione (materiale)

> Abbiamo usato il simbolo $\Rightarrow$ (implicazione logica) invece del simbolo $\rightarrow$ (implicazione materiale). ???  
> [Materiale vs Logica](https://www.youmath.it/domande-a-risposte/view/6992-implicazione-matematica.html)

$p \Rightarrow q$  
**"p implica q"** oppure **"se p allora q"**

| $p$ | $q$ | $p \Rightarrow q$ |
| --- | --- | :---------------: |
| V   | V   |         V         |
| V   | F   |         F         |
| F   | V   |         V         |
| F   | F   |         V         |

> Esempio:  
> $p : piove$  
> $q : prendo\ l'ombrello$  
> $p \Rightarrow q : \text{se piove allora prendo l'ombrello.}$

INSERISCI LA DIMOSTRAZIONE DELLA NEGAZIONE CON ESEMPIO DEL LIMITE

### Doppia implicazione

$p \Leftrightarrow q$  
**"p è equivalente a q"** oppure **"p se e solo se q"**

> Esempio:  
> $p : \text{in un triangolo, 2 lati sono uguali.}$  
> $q : \text{in un triangolo, 2 angoli sono uguali.}$  
> $p \Leftrightarrow q$

| $p$ | $q$ | $p \Leftrightarrow q$ |
| --- | --- | :-------------------: |
| V   | V   |           V           |
| V   | F   |           F           |
| F   | V   |           F           |
| F   | F   |           V           |

---

### Tautologia

Una tautologia è una proposizione (composta) che è sempre vera.

#### tertium non datur  

$p \vee \neg p$  

| $p$ | $\neg p$ | $p \vee \neg p$ |
| --- | :------: | :-------------: |
| V   |    F     |        V        |
| V   |    F     |        V        |
| F   |    V     |        V        |
| F   |    V     |        V        |

#### non contradditio  

$\neg(p \wedge \neg p)$  

| $p$ | $\neg p$ | $p \wedge \neg p$ | $\neg(p \wedge \neg p)$ |
| --- | :------: | :---------------: | :---------------------: |
| V   |    F     |         F         |            V            |
| V   |    F     |         F         |            V            |
| F   |    V     |         F         |            V            |
| F   |    V     |         F         |            V            |

#### modus ponens  

$(p \wedge (p \Rightarrow q)) \Rightarrow p$  

| $p$ | $q$ | $p \Rightarrow q$ | $p \wedge (p \Rightarrow q)$ | $(p \wedge (p \Rightarrow q)) \Rightarrow p$ |
| --- | --- | :---------------: | :--------------------------: | :------------------------------------------: |
| V   | V   |         V         |              V               |                      V                       |
| V   | F   |         F         |              F               |                      V                       |
| F   | V   |         V         |              F               |                      V                       |
| F   | F   |         V         |              F               |                      V                       |

#### modus tollens  

$(\neg q \wedge (p \Rightarrow q)) \Rightarrow \neg p$  

| $p$ | $q$ | $\neg p$ | $\neg q$ | $p \Rightarrow q$ | $\neg q \wedge (p \Rightarrow q)$ | $(\neg q \wedge (p \Rightarrow q)) \Rightarrow \neg p$ |
| --- | --- | :------: | :------: | :---------------: | :-------------------------------: | :----------------------------------------------------: |
| V   | V   |    F     |    F     |         V         |                 F                 |                           V                            |
| V   | F   |    F     |    V     |         F         |                 F                 |                           V                            |
| F   | V   |    V     |    F     |         V         |                 F                 |                           V                            |
| F   | F   |    V     |    V     |         V         |                 V                 |                           V                            |

#### reductio ad absurdum

$\Big((p \wedge \neg q) \Rightarrow (r \wedge \neg r)\Big) \Leftrightarrow (p \Rightarrow q)$  

| $p$ | $q$ | $r$ | $\neg q$ | $\neg r$ | $p \wedge \neg q$ | $r \wedge \neg r$ | $\Big((p \wedge \neg q) \Rightarrow (r \wedge \neg r)\Big)$ | $p \Rightarrow q$ |
| --- | --- | --- | :------: | :------: | :---------------: | :---------------: | :---------------------------------------------------------: | :---------------: |
| V   | V   | V   |    F     |    F     |         F         |         F         |                            **V**                            |       **V**       |
| V   | V   | F   |    F     |    V     |         F         |         F         |                            **V**                            |       **V**       |
| V   | F   | V   |    V     |    F     |         V         |         F         |                            **F**                            |       **F**       |
| V   | F   | F   |    V     |    V     |         V         |         F         |                            **F**                            |       **F**       |
| F   | V   | V   |    F     |    F     |         F         |         F         |                            **V**                            |       **V**       |
| F   | V   | F   |    F     |    V     |         F         |         F         |                            **V**                            |       **V**       |
| F   | F   | V   |    V     |    F     |         F         |         F         |                            **V**                            |       **V**       |
| F   | F   | F   |    V     |    V     |         F         |         F         |                            **V**                            |       **V**       |

### Legge di De Morgan

$\neg (p \wedge q) = \neg p \vee \neg q$  
$\neg (p \vee q) = \neg p \wedge \neg q$  

| $p$ | $q$ | $p \wedge q$ | $\neg (p \wedge q)$ | $\neg p$ | $\neg q$ | $\neg p \vee \neg q$ |
| --- | --- | :----------: | :-----------------: | :------: | :------: | :------------------: |
| V   | V   |      V       |        **F**        |    F     |    F     |        **F**         |
| V   | F   |      F       |        **V**        |    F     |    V     |        **V**         |
| F   | V   |      F       |        **V**        |    V     |    F     |        **V**         |
| F   | F   |      F       |        **V**        |    V     |    V     |        **V**         |

---

### Predicati

"parte del nostro discorso che contenda una o più variabili"

- UNARIO (1 variabile): $\mathcal{P}(x)$
- BINARIO (2 variabili): $\mathcal{Q}(x,y)$
- TERZIARIO (3 variabili): $\mathcal{S}(x,y,z)$

#### Esempi:  
 
$\mathcal{P}(x) : \text{lo studente x è più alto di 1,7m.}$   
è un *predicato*

$\mathcal{P}(Pietro) = \text{Pietro è più alto di 1,7m.}$  
è una *proposizione*

$\mathcal{Q}(x,y) : \text{lo studente x è amico dello studente y.}$  
è un *predicato*

$\mathcal{Q}(Pietro,Giorgio) : \text{lo studente Pietro è amico dello studente Giorgio.}$  
è una *proposizione*

$\mathcal{S}(x,y,z) : \text{nell'ospedale x, il medico y, ha sbagliato la diagnosi z.}$

> $\underline{\text{Osservazione}}$: un modo per trasformare predicati in proposizioni è utilizzare i **quantificatori**.

---

### Quantificatori

$\forall$  
"per ogni"  
Quantificatore Universale

$\exists$
"esiste"
QUantificatore Esistenziale

#### Esempi:

$\forall x, \mathcal{P}(x)$ è una proposizione  
significa "ogni studente è più alto di 1,7m."

$\exists x, \mathcal{P}(x)$ è una proposizione  
significa "esiste uno studente più alto di 1,7m."

$\Big(\forall x, \mathcal{Q}(x,y)\Big) = \mathcal{R}(y)$  
significa "tutti gli studenti sono amici dello studente y"

> $\underline{\text{Idea}}$: la variabile $x$ non è più presente.

$\exists y : \Big(\forall x, \mathcal{Q}(x,y)\Big)$  
significa "esiste uno studente amico di tutti gli studenti"

$\forall x, \exists y : \mathcal{Q}(x,y)$  
significa "ogni studente ha almeno un amico"

Voglio tradurre formalmente la frase "in ogni ospedale, esiste almeno un medico che ha sbagliato tutte le diagnosi" 

Quindi scrivo

$\forall x, \exists y : \forall z, \mathcal{S}(x,y,z)$

> $\underline{\text{Osservazione}}$: come posso fare la negazione di una frase con i quantificatori.

Prendiamo  

$\forall x, \mathcal{P}(x)$  
"ogni studente è più alto di 1,7m."

dobbiamo negarla, perciò "non è vero che ..."

> **ATTENZIONE!**  
> **NON è vero che**  
> $\neg \Big(\forall x, \mathcal{P}(x)\Big) \neq \forall x, \neg \mathcal{P}(x)$  

