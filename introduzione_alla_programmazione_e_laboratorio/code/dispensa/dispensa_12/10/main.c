#include <stdio.h>
#include <stdlib.h>


int f(int a[], int dim) {
    int is_div;

    for (int i = 0; i < dim; i++) {
        is_div = 1;
        for (int j = 0; j < dim; j++) {
            if ((a[j] % a[i] != 0) && i != j) {
                is_div = 0;
            }
        }
        if (is_div == 1) return 1;
    }

    return 0;
}


int main() {
    int a[] = {4, 2, 8, 4};
    int b[] = {2, 3, 5, 7};
    int c[] = {0};

    printf("a: %d\n", f(a, 4));
    printf("b: %d\n", f(b, 4));
    printf("c: %d\n", f(b, 1));

    return 0;
}