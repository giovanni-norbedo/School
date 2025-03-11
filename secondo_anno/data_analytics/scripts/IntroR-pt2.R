# Tipi di dati e strutture -----
## tipi di dati: character, numeric, integer, logical, complex
## strutture: vector, factor, matrix, array, list, data frame

b <-1
?str
str(b)

## Scalari ----
### numeric ----
a <- 10
b <- 3 / 10
c <- (a + b) / b
c
str(b)
str(c)

### character ----
d <- "1"
e <- "2"
#d+e 

s <- "hello"
str(s)
str(d)

### integer ----
var <- 2
var.int <- 2L

str(var)
str(var.int)

### logical ----

x <- TRUE
y <- FALSE

x+y
2*x
str(x)

#### verificare o convertire il tipo di oggetto ----

# is.numeric/character/integer/logical...
is.integer(var)
is.integer(var.int)
is.numeric()

# as.numeric/character/integer/logical...
as.numeric(s) #s character
as.integer(b) #b numeric
as.numeric(FALSE) #valori logici
as.character(a)

## Vettori ----
# un vettore ammette solo elementi dello stesso tipo
# c(); vector()
db_v <- c(10, 15, 6.4, 3, 18) # definiamo il vettore x
db_v                          # stampiamo x
str(db_v)                     # verifichiamo la struttura di x 

int_v <- c(1L, 6L, 10L)
int_v
str(int_v)

log_v <- c(TRUE, FALSE, T, F)
log_v
str(log_v)

ch_v <- c("A", "B", "C")
ch_v
str(ch_v)

is.logical(log_v)
is.numeric(log_v)

### Creare una sequenza ----
v <- 1:10
v

seq(from=1, to=10)
seq(from=1, to=10, by=3)
seq(from=1, to=10, length=5)

rep(1,15) #un vettore di lunghezza 15 con tutti gli elementi uguali a 1

a <- c(rep(2,3),4,5,rep(1,5),11:15)
#
a

rep(c("a","b"), 5)
rep(c("a","b"), each = 5)
rep(c(a,"b"), 2)          #il vettore è convertito in character
rep(c(a,"b"), each=2) 

paste("file", 1:5, ".txt" , sep="")
paste("file", 1, ".txt" , sep="")

## Selezione di elementi ed operazioni
#selezione di elementi (la prima posizione ha indice 1)
y <- a[6]        
y
z <- a[2:4]      
z
w <- a[] # estrarre l'elemento 2 e 5
w

x <- c(1, 2, 4, 8, 16, 32)
x
x[-4] #!! non è assegnato ad un oggetto
x

# operazioni tra scalare e vettore
x <- 1:10
x*2   
x > 5 

## operazioni tra 2 vettori di lunghezza diversa
x <- rep(10,8)
y <- c(1,2)
x <- x[-1]
y
x*y   
x+y

#operatori logici: OR |, AND &
x <- 1:8

# selezioniamo gli elementi maggiori o 
# uguali a 7 o minori di 5
x
x >= 7
x < 5
x >= 7 | x < 5
x[c(x >= 7 | x < 5)]

x <- 0:7

all(x>0) 
any(x<0) 

# altre funzioni
x <- c(FALSE, FALSE, TRUE)

sum(x)
mean(x)
length(x)

as.numeric(x)

x <- 3:22


sort(x)
order(x)
max(x)
min(x)
range(x)
sum(x)
prod(x)
mean(x)

# nomi
x <- c(a = 1, b = 2, c = 3)
x
x <- 1:3
names(x)
names(x) <- c("a1","b1","c1")
x

######## Esercizio #########
#1. Definisci il vettore y con gli elementi 8, 3, 5, 7, 6, 6, 8, 9, 2.
# Gli elementi di y sono minori di 5? 
# Crea un nuovo vettore z con gli elementi di y minori di 5.

y <- c(8, 3, 5, 7, 6, 6, 8, 9, 2)

y < 5

z <- y[y < 5]

#2. Fornisci un esempio in cui valori logici sono convertiti in numerici 0-1
# utilizzando un operatore aritmetico

T + T

#3. Crea un vettore logico di lunghezza 3. Quindi, moltiplica questo vettore
# tramite runif(3). Cosa succede?

l <- c(T, F, T)
runif(3)
?runif

#4.
x <- sample(10) < 4
x
which(x)
which(sample(10) < 4)
#   Cosa fa questo codice?

#5. Definisci un vettore con valori 9, 2, 3, 9, 4, 10, 4, 11. Scrivi il
# codice per calcolare la somma dei tre valori più grandi (Suggerimento: usa
# la funzione rev).

#6. Crea un vettore x di lunghezza 4. Cosa restituisce il codice?
x[c(TRUE, TRUE, NA, FALSE)]

