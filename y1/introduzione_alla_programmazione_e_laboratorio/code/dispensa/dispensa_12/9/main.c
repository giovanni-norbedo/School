#include <stdio.h>
#include <stdlib.h>


void print_array(int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int * f(int *n) {
    int tmp = 0;
    printf("Inserire n: ");
    scanf("%d", n);
    int *a = (int *)malloc(sizeof(int) * (*n));
    for (int i = 0; i < *n; i++) {
        tmp += i + 1;
        a[i] = tmp;
    }
    return a;
}


int main() {
    int n;
    int * a = f(&n);

    print_array(a, n);

    return 0;
}