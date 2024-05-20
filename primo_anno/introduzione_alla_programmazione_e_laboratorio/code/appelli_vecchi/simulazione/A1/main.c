// Si scriva un programma C che calcola, dao un arrayain input di dimensionen, il vettore delle frequenzeftale per cui:•fha la stessa dimensione dia;•f[i] =vdoveve’ il numero di occorrenze del valorea[i]ina, solo se l’occorrenza in posizione i-esima e’la prima del valorea[i]ina; altrimentif[i] = 0;Esempio di calcolo: pera= [1,2,1,4,8,8]valef= [2,1,0,1,2,0]1

#include <stdio.h>
#include <stdlib.h>


int * e(int a[], int dim) {
    int * f = malloc(sizeof(int) * dim);

    for (int i = 0; i < dim; i++) {
        f[i] = 0;
    }

    int count = 0;

    for (int i = 0; i < dim; i++) {
        for (int j = i + 1; j < dim; j++) {
            if (a[i] == a[j] && a[i] != 0 && a[j] != 0) {
                count++;
                a[j] = 0;
            }
        }

        if (a[i] != 0) {
            if (count == 0) {
                f[i] = 1;
            } else {
                f[i] = count + 1;
            }
        }

        count = 0;
    }

    return f;
}


int main() {
    int a[] = {1, 2, 1, 8, 8, 8};
    int dim = 6;

    int * f = e(a, dim);

    for (int i = 0; i < dim; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");

    return 0;
}