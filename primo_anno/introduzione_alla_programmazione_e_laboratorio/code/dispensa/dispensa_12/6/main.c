#include <stdio.h>
#include <stdlib.h>


int f(int a[], int dim) {
    int tutti_diversi = 1;

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            if (a[i] == a[j] && i != j) {
                tutti_diversi = 0;
            }
        }
    }

    return tutti_diversi;
}


int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 1};
    int c[] = {0};

    printf("a: %d\n", f(a, 4));
    printf("b: %d\n", f(b, 4));
    printf("c: %d\n", f(b, 1));

    return 0;
}