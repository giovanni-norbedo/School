#include <stdio.h>
#include <stdlib.h>


int get_min(int a[], int dim, int index) {
    int min_index = index;
    for (int i = index + 1; i < dim; i++){
        if (a[i] < a[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

void scambia(int a[], int x, int y) {
    int tmp = a[x];
    a[x] = a[y];
    a[y] = tmp;
}

void ordina_ric(int a[], int dim, int index) {
    if (index != dim - 1) {
        int min = get_min(a, dim, index);
        scambia(a, index, min);
        ordina_ric(a, dim, index + 1);
    }
}


int main() {
    int a[] = {4, 5, 2, 1, 4, 1};
    int dim = 6;

    ordina_ric(a, dim, 0);

    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}