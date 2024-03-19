#include <stdio.h>
#include <stdlib.h>


void print_array(int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");
}


void f(int a1[], int a2[], int a3[], int dim) {
    for (int i = 0; i < dim; i++) {
        a3[i] = a1[i] + a2[i];
    }
}


int main() {
    int a1[] = {6, 5, 1, 1, 8, 3, 7};
    int a2[] = {1, 2, 6, 6, -1, 4, 0};
    int a3[7];
    int dim = 7;

    f(a1, a2, a3, dim);

    print_array(a3, dim);

    return 0;
}