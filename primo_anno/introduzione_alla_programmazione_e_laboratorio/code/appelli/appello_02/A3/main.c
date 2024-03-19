#include <stdio.h>
#include <stdlib.h>


int is_dupl(int a[], int dim, int x) {
    int d = 0;
    int c = 0;
    for (int i = 0; i < dim; i++) {
        if (a[i] == x) c++;
    }
    if (c > 1) d = 1;
    return d;
}

int * e(int a[], int dim) {
    int * b = (int *)malloc(sizeof(int) * dim);

    for (int i = 0; i < dim; i++) {
        b[i] = is_dupl(a, dim, a[i]);
    }

    return b;
}


int main() {
    int a[] = {1, 2, 3, 2, 3, 4, 6, 6, 8};
    int dim = 9;

    int * b = e(a, dim);

    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}