#include <stdio.h>
#include <stdlib.h>


int predicone(int a[], int dim) {
    int p1 = 0;
    int sum = 0;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < i; j++) {
            sum += a[j];
        }
        if (a[i] < sum) {
            p1 = 1;
        }
        sum = 0;
    }

    int p2 = 1;
    for (int i = 2; i < dim; i++) {
        for (int j = i - 2; j <= i; j++) {
            if (a[i] < a[j]) {
                p2 = 0;
            }
        }
    }

    return p1 + p2 == 2;
}


int main() {
    int a[] = {1, 2, 3, 4, 5};
    int dim = 5;

    printf("%d\n", predicone(a, dim));
    
    return 0;
}