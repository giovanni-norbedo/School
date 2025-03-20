# Factors ----
# vettori per variabili categoriali. Ogni gruppo corrisponde ad un livello
country <- c("Italy","Germany","France","Germany","Germany","Germany",
             "France","Italy","Italy","France", "Italy")
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
table(countryf)
table(countryf2)
#ordered() # ordered factor

age <- c(47,44,44,40,38,36,42,34,34,44,42)
tapply(age, countryf, mean)
cbind(age, countryf)

gender <- c(1,1,2,1,1,2,1,2,2,2,1)
genderf <- factor(gender)
genderf
levels(genderf) 
levels(genderf) <- c("F","M")
str(genderf)

######## Esercizi #########
#1. Definisci un vettore x con gli elementi 5, 12, 13, 12. Converti questo vettore
# in factor e ispeziona la sua struttura. Come vengono definiti i livelli?

x <- c(5, 12, 13, 12)
x <- as.factor(x)
str(x)
levels(x)

#2. Crea un factor dalla sequenza di stringhe "1", "1", "0", "1",
# "1", "0". Cosa restituiscono length() e mode()?

x <- factor(c("1", "1", "0", "1", "1", "0"))
x
length(x)
mode(x)

#3. Converti la variabile factor del punto precedente in un factor
# con livelli "m" per 0 e "f" per 1. Cosa produce il comando table()?

levels(x) <- c("m", "f")
table(x)

#4. Eseguire le seguenti righe
v1 <- factor(letters[1:5])
v1
levels(v1) <- rev(levels(v1))
v1
v2 <- factor(letters[1:5], levels = rev(letters[1:5]))
v2
#Cosa succede a v1 quando modifichi i suoi livelli? In cosa differisce v2
# da v1?


# Data frames ----
# è una lista ma può essere considerata come una matrice con colonne possibilmente di diverso tipo
# le componenti devono essere vettori (numerici, caratteri o logici), fattori, matrici numeriche, liste o altri dataframe
# vettori e matrici devono avere la stessa dimensione
# di solito memorizziamo le variabili nelle colonne e le unità nelle righe
under40 <- age < 40
under40
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
dat$Italy <- dat$Country == "Italy"

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
#Age <- Age + 1 #not run
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
newdf <- data.frame(x = x, y = y, z = z)

newdf

#2. Crea un dataframe con 5 righe, utilizzando un elenco di caratteri
# che rappresenta i nomi e un vettore di numeri che rappresentano le età.

jack <- data.frame(
    name = c(letters[1:5]),
    age = c(12, 10, 40, 42, 25)
)

View(jack)

#3. Rinominare la seconda variabile del dataframe al punto precedente con il 
# nome "Age"

colnames(jack)[2] <- "age2"

#4. Stampare la dimensione del dataframe

dim(jack)
