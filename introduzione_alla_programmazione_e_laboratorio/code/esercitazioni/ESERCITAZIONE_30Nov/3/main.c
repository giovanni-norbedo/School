#include <stdio.h>
#include <stdlib.h>


void f(int a[], int dim, int k) {
    int j = 0;

    for (int i = 0; i < dim; i++) {
        if (a[i] <= k) {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            j++;
        }
    }
}


int main() {
    int a[] = {2,3,4,5,2,1,9,2};
    int dim = 8;
    int k = 3;

    f(a, dim, k);

    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}