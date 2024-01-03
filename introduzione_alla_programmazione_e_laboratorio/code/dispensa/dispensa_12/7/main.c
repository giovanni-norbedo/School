#include <stdio.h>
#include <stdlib.h>


void print_array(int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");
}


void f(int a[], int dim) {
    int ordinato = 0;
    int tmp;
    while (!ordinato) {
        for (int i = 0; i < dim -1; i++) {
            if (a[i] > a[i + 1]) {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }

        ordinato = 1;

        for (int i = 0; i < dim -1; i++) {
            if (a[i] > a[i + 1]) {
                ordinato = 0;
            }
        }
    }
}


int main() {
    int a[] = {6, 5, 1, 1, 8, 3, 4};
    int dim = 7;

    f(a, dim);

    print_array(a, dim);

    return 0;
}