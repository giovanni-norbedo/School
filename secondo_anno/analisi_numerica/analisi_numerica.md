# Analisi numerica

## Introduzione

### Tipi di errori

- **Errori di modellazione matematica** del problema reale ed **errori presenti nei dati** sperimentali.

- **Errori di troncamento**: da problema matematico (dimensione infinita) a problema numerico (dimensione finita).

- **Errori di arrotondamento**: sul calcolatore, posso rappresentare solo un sottoinsieme finito dei numeri reali.

### Sistema posizionale

**Definizione**: Fissata la *base* $B \in \mathbb{N}$, $B > 1$, e un numero $x \in \mathbb{R}$ finito di cifre $d_k, k = -m, -m + 1, \ldots, n - 1, n$, di definisce $x_B$ la **rappresentazione posizionale** di $x$ in base $B$:

$\displaystyle x_B = (-1)^s \cdot \sum_{k = -m}^n d_k \cdot B^k \quad d_n \neq 0$  

**Esempi**:  
$(867.0985)_{10} = (-1)^0 \left( 8 \cdot 10^2 + 6 \cdot 10^1 + 7 \cdot 10^0 + 0 \cdot 10^{-1} + 9 \cdot 10^{-2} + 8 \cdot 10^{-3} + 5 \cdot 10^{-4} \right)$  
$(-10110.0001)_2 = (-1)^1 \left( 1 \cdot 2^4 + 1 \cdot 2^2 + 1 \cdot 2^1 + 1 \cdot 2^0 + 1 \cdot 2^{-4} \right)$

**Osservazione**:  
$\forall x \in \mathbb{R}$, fissata $B$,  

$\displaystyle x_B = (-1)^s \cdot \sum_{k = 0}^n d_k \cdot B^k + \sum_{k = 1}^{\infty} d_{-k} \cdot B^{-k}$

### Perché la serie della parte frazionaria converge?

**Dimostrazione**:  
Considero la serie geometrica di ragione $B^{-1}$ (criterio di confronto tra serie a termini non negativi).  
Poiché $d_{-k} \leq B - 1, \quad \forall k \in \mathbb{N}$, allora  

$\displaystyle \sum_{k = 1}^{\infty} (B - 1) \cdot B^{-k} = (B - 1) \cdot \sum_{k = 1}^{\infty} B^{-k} = (B - 1) \cdot \frac{B^{-1}}{1 - B^{-1}}$ convergente.  

**Nota**: $(0.999\ldots)_{10} = (0.111\ldots)_2 = 1$  
Un numero razionale può avere rappresentazione data da un numero finito di cifre in una base e infinito in un’altra:  
$\displaystyle \frac{1}{3} = 0.333\ldots = 0.1_3$

### Cambio di base da base 2 a base 10

**Definizione**: Dato un numero $x$ in base 2, si può convertire in base 10 tramite la formula

$\displaystyle x_{10} = \sum_{k = 0}^n d_k \cdot 2^k + \sum_{k = 1}^{\infty} d_{-k} \cdot 2^{-k}$

**Esempio**:
$(10001000.01)_2 = 2^7 + 2^3  + 2^{-2} = 128 + 8 + 0.25 = 136.25$  

### Cambio di base da base 10 a base 2

#### Parte intera

**Definizione**: Dato un numero $x$ in base 10, si può convertire in base 2 tramite le seguenti operazioni:

1. Divido la parte intera di $x$ per 2 e scrivo il resto.
2. Divido il quoziente precedente per 2 e scrivo il resto.
3. Continuo fino a che il quoziente è 0.
4. Leggo i resti in ordine inverso.

#### Parte decimale

**Definizione**: Dato un numero $x$ in base 10, si può convertire in base 2 tramite le seguenti operazioni:

1. Moltiplico la parte decimale di $x$ per 2 e scrivo la parte intera.
2. Continuo fino a che la parte decimale è 0 oppure se si ripetono periodicamente le stesse cifre.
3. Leggo le parti intere in ordine.

**Esempio**:
$389.1_{10}$  

Parte intera:

$\begin{array}{c|c}
389 & 1 \\
194 & 0 \\
97 & 1 \\
48 & 0 \\
24 & 0 \\
12 & 0 \\
6 & 0 \\
3 & 1 \\
1 & 1 \\
0 & 1 \\
\end{array}$
$\Rightarrow (110000101)_2$

Parte decimale:

$\begin{array}{c|c}
0.2 & 0 \\
0.4 & 0 \\
0.8 & 0 \\
1.6 & 1 \\
1.2 & 1 \\
0.4 & 0 \\
0.8 & 0 \\
1.6 & 1 \\
1.2 & 1 \\
\end{array}$
$\Rightarrow (00011001100110011\ldots)_2$

$\Rightarrow 389.1_{10} = (110000101.0 \overline{0011})_2$

### Rappresentazione in virgola mobile normalizzata

**Definizione**: Dato un numero $x \in \mathbb{R}$, si definisce la **rappresentazione in virgola mobile normalizzata** come

$\displaystyle x = (-1)^s \cdot B^e \cdot \sum_{k = 1}^{\infty} d_k \cdot B^{-k} \quad$ con $\begin{cases} d_1 > 0 \\ 0 \leq d_k < B - 1 \\ e \in \mathbb{Z} \end{cases}$  

oppure si può scrivere come

$x = \pm p \cdot B^e \quad$ con $B^{-1} \leq p < 1$  

dove $p$ è detto **mantissa** e $e$ è detto **esponente**.

**Esempi**:  
In base 10:  
$x = 0.00745 \Rightarrow x = 0.745 \cdot 10^{-2}$  
$x = 70408.102 \Rightarrow x = 0.70408102 \cdot 10^5$  

In base 2:
$x = 11001.111 \Rightarrow x = 0.11001111 \cdot 2^5$

### Numeri macchina

Nel calcolatore i numeri reali sono rappresentati in virgola mobile normalizzata, con $t$ cifre di mantissa e $e$ esponente, con $L \leq e \leq U$.

Fissata una base $B$ (di solito $B = 2$), fissati $t, L < 0, U > 0$, si definisce l'insieme dei numeri macchina $\mathbb{F}(B, t, L, U)$ come

$\mathbb{F}(B, t, L, U) = \{ x \vert x = (-1)^s \cdot B^e \cdot \sum_{k = 1}^t d_k \cdot B^{-k} \} \cup \{ 0 \},$ con $d_1 > 0, 0 \leq d_k < B - 1, e \in [L, U]$  

Lo **zero** è rappresentato come $0 = 0 \cdot B^0 \cdot 0$.

Un numero $x \in \mathbb{F}(B, t, L, U)$ è scritto come

$x = (-1)^s \cdot (0.d_1d_2d_3\ldots d_t)_B \cdot B^e$

### Numeri nel calcolatore

Base 2: $B = 2$, cifre $d_k \in \{0, 1\}$  

$x = (-1)^s \cdot (0.d_1d_2d_3\ldots d_t)_2 \cdot 2^e$  

- 1 bit per il segno
- $t$ bit per la mantissa
- l'esponent

#### Singola precisione

32 bit: 

- 1 bit per il segno
- 8 bit per l'esponente
- 23 bit per la mantissa (1 bit nascosto)

$F(2, 24, -126, 127)$

Dei $2^8 = 256$ esponenti, 2 sono riservati per i numeri speciali (infinito e NaN), quindi rimangono $2^8 - 2 = 254$ esponenti.

I numeri rappresentabili sono: $2 \cdot (U - L + 1) \cdot (B - 1) \cdot B^{t - 1} + 1 = 2 \cdot 254 \cdot 2^{23} + 1 \approx 4.3 \cdot 10^9$

#### Doppia precisione

64 bit:

- 1 bit per il segno
- 11 bit per l'esponente
- 52 bit per la mantissa (1 bit nascosto)

$F(2, 53, -1022, 1023)$  

Dei $2^{11} = 2048$ esponenti, 2 sono riservati per i numeri speciali (infinito e NaN), quindi rimangono $2^{11} - 2 = 2046$ esponenti.  

I numeri rappresentabili (cardinalità) sono: $2 \cdot (U - L + 1) \cdot (B - 1) \cdot B^{t - 1} + 1 = 2 \cdot 2046 \cdot 2^{52} + 1 \approx 1.8 \cdot 10^{19}$

**Nota**: $(B - 1)$ è il numero massimo di cifre rappresentabili in base $B$. $B^{t - 1}$ è il numero di cifre rappresentabili nella mantissa.

### Half precision

16 bit:

- 1 bit per il segno
- 5 bit per l'esponente
- 10 bit per la mantissa (1 bit nascosto)

$F(2, 11, -14, 15)$

$2^5 = 32$ esponenti, 2 sono riservati per i numeri speciali (infinito e NaN), quindi rimangono $2^5 - 2 = 30$ esponenti.

I numeri rappresentabili sono: $2 \cdot (U - L + 1) \cdot (B - 1) \cdot B^{t - 1} + 1 = 2 \cdot 30 \cdot 2^9 + 1 \approx 3.1 \cdot 10^4$

## Approssimazione di un numero reale

In $\mathbb{F}(B, t, L, U)$, dato un numero reale $x = p \cdot B^e \in \mathbb{R}$, se ha più di $t$ cifre nella mantissa, si approssima con il numero macchina $fl(x) \in \mathbb{F}(B, t, L, U)$ in due modi:  

- **Troncamento**: nella mantissa $p$ si cancellano le cifre oltre la $t$-esima.  
- **Arrotondamento**: nella mantissa $p$ si aggiunge $\frac{B}{2} \cdot B^{-(t + 1)}$ e poi si tronca a $t$ cifre.

**Esempio**: Considero $x = 0.745645897, t = 6$, per troncamento ho che $fl(x) = tr(x) = 0.745645$ e per arrotondamento $fl(x) = tr(x + 0.0000005) = tr(0.745646397) = 0.745646$.

**Osservazione**: Arrontondare equivale a sommare $1$ alla $t$-esima cifra della mantissa, $d_t$, se la successiva cifra, $d_{t + 1}$, è $\geq \frac{B}{2}$, altrimenti la cifra $t$-esima rimane invariata.

### Underflow e overflow

In $\mathbb{F}(B, t, L, U)$, nell'approssimare $x$ con $fl(x)$, si possono verificare due situazioni:  

- se l'esponente $e > U$, si ha **overflow**: $fl(x) = \infty$  
- se l'esponente $e < L$, si ha **underflow**: $fl(x) = 0$

## Errori assoluti e relativi

### Maggiorazione dell'errore assoluto

Sia $x \in \mathbb{R}$ e $x^*$ la sua approssimazione in $\mathbb{F}(B, t, L, U)$, si definiscono:  

- **Errore assoluto**: $\vert x - x^* \vert$  
- **Errore relativo**: $\displaystyle \frac{\vert x - x^* \vert}{\vert x \vert}, \quad x \neq 0$  

Nel caso si abbia a che fare con enti diversi da numeri real (funzioni, vettori, matrici) le definizioni sono le stesse a patto di sostituire il valore assoluto con un'opportuna norma.  

#### Errore assoluto per troncamento

$\vert x - fl(x) \vert = \vert p \cdot B^e - \bar{p} \cdot B^e \vert = \vert (p - \bar{p}) \cdot B^e \vert \leq B^{-t} B^e$

$p = 0.d_1d_2d_3\ldots d_t \vert d_{t + 1}d_{t + 2}\ldots$  
$\bar{p} = 0.d_1d_2d_3\ldots d_t$  
$\vert p - \bar{p} \vert = 0.00\ldots \vert d_{t + 1}d_{t + 2}\ldots$  

$\vert p - \bar{p} \vert = \displaystyle \sum_{k = t + 1}^{\infty} d_k \cdot B^{-k} \leq (B - 1) \cdot \sum_{k = t + 1}^{\infty} B^{-k} = (B - 1) \cdot \dfrac{B^{}}{}$ ...

**Esempio**: $x = 0.745645897, fl(x) = 0.745645, t = 6$  
$\vert x - fl(x) \vert = \vert 0.745645897 - 0.745645 \vert = 0.000000897 \leq 10^{-6}$  

#### Errore assoluto per arrotondamento

$\vert x - fl(x) \vert = \vert p \cdot B^e - \bar{p} \cdot B^e \vert \leq \frac{B}{2} \cdot B^{-(t + 1)} B^{e}$

Fra due numeri macchina consecutivi c'è una distanza di $\frac{B}{2} \cdot B^{-(t + 1)}$.

Caso A: $d_{t + 1} \geq \frac{B}{2}$

$\vert p - \bar{p} \vert = \dfrac{B}{2} \cdot B^{-(t + 1)}$

Caso B: $d_{t + 1} < \frac{B}{2}$  

$\vert p - \bar{p} \vert = \left( \dfrac{B}{2} - 1 \right) \cdot B^{-(t + 1)} + \displaystyle \sum_{k = t + 2}^{\infty} d_k \cdot B^{-k} \leq \left( \dfrac{B}{2} - 1 \right) \cdot B^{-(t + 1)} + (B - 1) \cdot \sum_{k = t + 2}^{\infty} B^{-k}$ = ...

**Esempio**: $x = 0.745645897, fl(x) = 0.745646, t = 6$  
$\vert x - fl(x) \vert = \vert 0.745645897 - 0.745646 \vert = 0.000000103 \leq 5 \cdot 10^{-7}$

### Maggiorazione dell'errore relativo

#### Errore relativo per troncamento

$\dfrac{\vert x - fl(x) \vert}{\vert x \vert} \leq \dfrac{\vert p - \bar{p} \vert \cdot B^e}{p \cdot B^e} = \dfrac{\vert p - \bar{p} \vert}{p} \leq \dfrac{B^{-t}}{B^{-1}} = B^{1 - t}$  

#### Errore relativo per arrotondamento

$\dfrac{\vert x - fl(x) \vert}{\vert x \vert} \leq \dfrac{\vert p - \bar{p} \vert \cdot B^e}{p \cdot B^e} = \dfrac{\vert p - \bar{p} \vert}{p} \leq \dfrac{\frac{B}{2} \cdot B^{-(t + 1)}}{B^{-1}} = \dfrac{B}{2} \cdot B^{-t} = \dfrac{1}{2} \cdot B^{1 - t}$  

Attualmente, la maggior parte dei sistemi implementa la tecnica di arrotondamento perché produce mediamente errori più piccoli.

## Precisione di macchina

**Definizione**: Si definisce **precisione di macchina** (unit roundoff) il più piccolo numero positivo rappresentabile in $\mathbb{F}(B, t, L, U)$, indicato con $u = \frac{1}{2} \cdot B^{1 - t}$.

La precisione di macchina rappresenta il massimo errore relativo che si commette nell’approssimare il numero reale $x$ con il suo corrispondente numero macchina $fl(x)$ per arrotondamento.

**Esempi**:

- $F(2, 24, -126, 127)$, $u = \frac{1}{2} \cdot 2^{1 - 24} = 2^{-24} \approx 6.0 \cdot 10^{-8}$  
- $F(2, 53, -1022, 1023)$, $u = \frac{1}{2} \cdot 2^{1 - 53} = 2^{-53} \approx 1.1 \cdot 10^{-16}$  
- $F(2, 11, -14, 15)$, $u = \frac{1}{2} \cdot 2^{1 - 11} = 2^{-11} \approx 4.9 \cdot 10^{-4}$

## Standard ANSI IEEE-754r

Scritto nel 1985 e modificato nel 1989 e, più recentemente, nel 2008  
costituisce lo standard ufficiale per la rappresentazione binaria dei numeri all’interno del calcolatore e l’aritmetica di macchina (il nome dello standard in inglese “Binary floating point arithmetic for microprocessor systems”).  

Secondo lo standard un numero non nullo normalizzato si scrive come  

$x = (-1)^s \cdot (1 + f ) \cdot 2^{e^* - \text{bias}}$ 

La mantissa si rappresenta dunque come $1.d_1d_2 \dots d_\tau$ essendo  

$f = 0.d_1d_2 \dots d_\tau$ 

$\tau$ identifica il numero di bit usato per codificare la parte frazionaria della mantissa. Il numero di cifre totali per la mantissa è $t = \tau + 1$.  

Il vero esponente del numero $e$ si immagazzina in traslazione come  
$e^* = e + \text{bias}.$ 

In questa maniera non serve un bit di segno per l’esponente.  

Il bias in singola precisione vale 127 mentre in doppia 1023.  

Lo standard riserva due dei possibili valori per l’esponente per codificare due situazioni speciali:  

- $e^* = 0$, viene riservato per la codifica dello zero ed eventuali numeri denormalizzati.  
- $e^* = 255$ (singola precisione) o $e^* = 2047$ (doppia precisione), 
  che corrisponde a un esponente vero pari a 128 (singola) o 1024 (doppia), viene riservato per la codifica di:  
  - **Inf (Overflow)**  
  - **NaN (Not a Number)**, ovvero operazioni del tipo  
    $\frac{0}{0}, \quad \infty - \infty, \quad \frac{\infty}{\infty}$  

Inf viene codificato con mantissa nulla, mentre NaN con mantissa $\neq 0$.  

## Massimo e minimo numero rappresentabile

...

## Distanza assoluta tra due numeri macchina consecutivi

...

## Distanza relativa tra due numeri macchina consecutivi

...

