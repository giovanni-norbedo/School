# Area di lavoro e help ----
# R è orientato agli oggetti: possiamo creare entità denominate oggetti.
# Questi possono essere di diverso tipo, come numeri, vettori, matrici, funzioni,
# o strutture più complesse, come data frame o liste

## Operatori di assegnamento ---- 
# <- o =
# gli oggetti creati vengono raccolti nell'enviroment

a <- 1 
c = 1

# Ricorda: R fa distinzione tra maiuscole e minuscole

#A 

## Nomi degli oggetti ----
# possono essere usati solo lettere e numeri
# no spazi e simboli di punteggiatura, eccetto ('.', '_')

a.1 <- 1 

# ogni nome deve iniziare con una lettera alfabetica

#1a <- 1 

# qualche esempio corretto: 
a1 <- 1 
a <- 2 
b <- 1:10     #sequenza da:a by 1

ls()          #stampa il nome degli oggetti presenti nell'environment

rm(a)         #rimuove l'oggetto a
rm(a,a.1)
rm(list=ls()) #rimuove tutti gli oggetti nell'environment


## Comandi di base e funzioni ----
# valutare un'espressione e assegnare il risultato in un oggetto denominato
x <- 1+1
x   # Stampare l'oggetto  

#stampare oggetti di grandi dimensioni
p <- 1:2000

p
## Operatori aritmetici: +, -, *, /, ^ ----
1+2+3

2+3*4
2+(3*4)

3/2+1
1+3/2

2+3*4
(2 + 3) * 4

4*3^3

x <- 2; y <- 1 # ; permette di scrivere più di un comando su ogni riga
a <- b <- 1
c = d = 2
rm(c, d)
# alcuni esempi di funzioni 

x <- sqrt(2) # radice quadrata

z <- exp(x) #funzione esponenziale
z

w <- log(z)+x #funzione logaritmica
w

## Operatori relazionali: >, <, <=, >=, ==, != ----
# restituiscono un valore logico
TRUE
FALSE
x
x > 10
x <= 10
y <- x > 10
y
5!=5

## Operatori logici: OR |, AND & ----


## Help ----

?Arithmetic
help(Arithmetic)
??Arithmetic

########Wooclap#########