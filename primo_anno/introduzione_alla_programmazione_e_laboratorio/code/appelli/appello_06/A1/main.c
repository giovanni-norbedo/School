#include <stdio.h>
#include <stdlib.h>


int predicone(int a[], int dim) {
    int p = 1;
    for (int i = 1; i < dim; i++) {
        if (a[i] < a[i - 1]) {
            p = 0;
        }
    }

    return p;
}


int main() {
    int a[] = {1, 2, 3, 4, 5};
    int dim = 5;

    printf("%d\n", predicone(a, dim));
    
    return 0;
}