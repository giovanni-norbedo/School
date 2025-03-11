# Matrici ed array ----

x <- matrix(c(2,3,5,7,11,13), nrow=3)
x
x <- matrix(c(2,3,5,7,11,13), ncol=3)
x

mx <- matrix(x, ncol=3, byrow=TRUE) 
mx

nrow(mx)

ncol(mx)
dim(mx)
dim(mx)[1]

rownames(mx) <- c("A", "B")
colnames(mx) <- c("a", "b", "c")

x[1,]
x[,2]

x

x[,-2]
x[,c(1,3)]
x[,1:2]


## selezione degli elementi: analoga ai vettori ma su due dimensioni 
## [riga/righe, colonna/e]
mx[2,1]     
mx[2,2]     

# selezione di un'intera riga o colonna
mx[2, ]             
mx["B", ]

mx[ ,3]         
mx[ ,"c"]    

mx[, c("a", "b")] # possiamo utilizzare anche i nomi di riga o colonna

x <- matrix(1:16, ncol=4)
x
y <- x[c(1,4),2:4]
y

##array: le matrici sono array con due dimensioni,
## ma possono avere anche più di due dimensioni 
x <- 1:20
a.x <- array(x, dim=c(5,2,2))
a.x
dim(a.x)

a.x[3,2,1] #la selezione è analoga alle matrici
a.x[ ,2, ]
a.x[-1, ,1]


str(2:4)
y <- matrix(2:4, nrow = 1)    # vettore riga 
y
str(y) 

y <- matrix(2:4, ncol = 1)    # vettore colonna
y
str(y) 


## una matrice è un array
a <- matrix(1:6, ncol = 3, nrow = 2)

is.matrix(a); is.array(a)

## b è un vettore, non più una matrice. dim(b) #NULL
b <- a[,2]
str(b)
is.vector(b)
is.matrix(b)
dim(b)

# notare cosa si ottiene convertendo un vettore in matrice 
as.matrix(b)

## Operazioni di algebra lineare ----

y <- c(1.2, 3, 0.4, 10)
2*y

crossprod(c(1,2,3), c(0,12,13)) # prodotto scalare tra due vettori
m <- c(1,2,3) %*% c(0,12,13)
m
is.matrix(m)

## prodotto riga per colonna
a <- matrix(c(1,2,3,4), ncol = 2, byrow = T)
b <- matrix(c(1,-1,0,1), ncol = 2, byrow = T)
a; b
a*b
a%*%b
crossprod(a,b)     #t(a) %*% b
tcrossprod(a,b)    #a %*% t(b)
crossprod(t(a),b)  
tcrossprod(a,t(b)) 

X <- matrix(runif(100000),50)
system.time(crossprod(X))
system.time(t(X)%*%X)

a <- matrix(c(1,1,-1,1),nrow=2,ncol=2)
a
solve(a) ##inversa 
solve(b)

b <- c(2,4)
solve(a,b) #soluzione del sistema lineare Ax=b => x=A^-1 b

diag(a) #extract the diagonal
diag(b) #diagonal matrix with b elements on the diagonal
diag(3) #identity matrix 3x3

# chol()
# det()
# eigen()
# t()


# Liste -----
# collezione di oggetti anche di tipo differente
x <- vector("list", length = 3) # oppure list()
x <- list()
x

x1 <- 1:3
x2 <- c("A", "B", "C", "D", "E")
x3 <- matrix(1:12, nrow=3)

mylist <- list(x1, x2, x3)   #creiamo la lista popolandola con i 3 oggetti
str(mylist)

##selezione degli elementi della lista
mylist[[1]]
mylist[[2]][3]
mylist[[3]]
mylist[[3]][1,1]

l1 <- mylist[[1]]
l1
l1[2]     # o in alternativa:
mylist[[1]][2]

# selezioniamo le prime due righe e tre colonne della matrice in posizione 3 nella lista
# ...


x[[1]] <- x1 

x[[4]] <- "questo è il quarto elemento della lista x" #creiamo un nuovo elemento

mylist2 <- list(comp1 = x1, comp2 = x2, comp3 = x3)
mylist2$comp1
mylist2$comp2[3]


newlist <- c(mylist,mylist2)
is.list(newlist)
str(newlist)

names(mylist) <- c("A", "B", "C")
names(mylist2)
names(newlist) <- c("A", "B", "C")

newlist[[1]]
newlist$A
newlist[["A"]]

## valori speciali: NULL, TRUE (T), FALSE (F), NaN (not a number), NA (not available), Inf
0/0         #Not a Number
a <- -1/0
a           #-Inf
a-a         #Not a Number 
as.numeric("a")

# Factors ----
# vettori per variabili categoriali. Ogni gruppo corrisponde ad un livello
country <- c("Italy","Germany","France","Germany","Germany","Germany",
             "France","Italy","Italy","France")
str(country)
countryf <- factor(country) # factor vs as.factor
str(countryf)
is.factor(countryf)
as.factor(country)
levels(countryf) 

cbind(country, countryf)

# scegliere la prima classe
?relevel
a <- relevel(countryf, "Italy")
a
#...o scegliere l'ordine delle classi
factor(country, levels = c("Italy", "Germany", "France"))


countryf2 <- countryf
levels(countryf) 
levels(countryf2) <- c("Italy", "Germany", "France")
cbind(countryf, countryf2)
cbind.data.frame(countryf, countryf2)
#ordered() # ordered factor

age <- c(47,44,44,40,38,36,42,34,34,44)
tapply(age, countryf, mean)
cbind(age, countryf)
gender <- c(1,1,2,1,1,2,1,2,2,2)
genderf <- factor(gender)
genderf
levels(genderf) 
levels(genderf) <- c("F","M")
str(genderf)

######## Esercizi #########
#1. Definisci un vettore x con gli elementi 5, 12, 13, 12. Converti questo vettore
# in factor e ispeziona la sua struttura. Come vengono definiti i livelli?

#2. Crea un factor dalla sequenza di stringhe "1", "1", "0", "1",
# "1", "0". Cosa restituiscono length() e mode()?

x <- c("1", "1", "0", "1", "1", "0")
x
length(x)
mode(x)
str(x)

#3. Converti la variabile factor del punto precedente in un factor
# con livelli "m" e "f". Cosa produce il comando table()?

levels(x) <- c("m", "f")
x2 <- factor(x, levels = c("1","0"), labels = c("f", "m"))
x2

#4. Eseguire le seguenti righe
v1 <- factor(letters[1:5])
levels(v1) <- rev(levels(v1))
v2 <- factor(letters[1:5], levels = rev(letters[1:5]))
#Cosa succede a v1 quando modifichi i suoi livelli? In cosa differisce v2
# da v1?



# Data frames ----
# è una lista ma può essere considerata come una matrice con colonne possibilmente di diverso tipo
# le componenti devono essere vettori (numerici, caratteri o logici), fattori, matrici numeriche, liste o altri dataframe
# vettori e matrici devono avere la stessa dimensione
# di solito memorizziamo le variabili nelle colonne e le unità nelle righe
under40 <- age < 40
dat <- data.frame(Country=countryf, Age=age, Sex=genderf,
                  Under40=under40)
dat$Country
dat[,1]
str(dat)
is.data.frame(dat)
head(dat) #print the first 6 rows

## View(dat)

# Subsetting

dat[3,2]
dat[1:3, 2:4]
dat[3, ]

x <- dat[, 2]
str(x)

dat[ , c("Age", "Sex")]
dat[ , c(2,3)]
dat[ , 2:3]

str(dat[ , c("Age", "Sex")])
dat["Age"] 
str(dat["Age"]) 
str(dat[,"Age"]) 

dat$Sex   #selezione di una sola colonna

dat$Under40 <-  NULL
#dat <- dat[, -2]
head(dat)
head(dat)

cbind.data.frame(dat, under40)
X <- cbind.data.frame(dat, under40)
cbind.data.frame(dat, Under40= under40*1)

#creare una nuova variabile logica uguale a TRUE se Country == Italy
dat$CountryTF <- dat$Country == "IT"

## convertire i character in factor automaticamente
df <- data.frame(x = 1:5, 
                 y = c("A", "B", "C", "D", "E"))
df <- data.frame(x = 1:5, 
                 y = c("A", "B", "C", "D", "E"),
                 stringsAsFactors = T)

Age #Le singole variabili non sono direttamente accessibili

attach(dat)
Age
dat$Age <- Age + 1 
Age <- Age + 1 #not run
dat$Age
Age #il nuovo valore della variabile Age non è visibile finché il data frame non viene scollegato
detach(dat)
Age
dat$Age

######## Exercizi #########
#1. Esegui il codice seguente
x <- runif(8)
y <- letters[1:8]
z <- sample(c(rep(T,5),rep(F,3)))
#Definisci un dataframe chiamato newdf con colonne z, y, x.


#2. Crea un dataframe con 5 righe, utilizzando un elenco di caratteri
# che rappresenta i nomi e un vettore di numeri che rappresentano le età.

