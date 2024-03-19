#include <stdio.h>
#include <stdlib.h>


void mysplit(int * a, int dim) {
    int p = 0;
    int sum_p = 0;
    int sum = 0;
    int prod = 1;

    int * tmp = (int *)malloc(sizeof(int) * dim);

    for (int i = 0; i < dim; i++){
        for (int j = i; j < dim; j++) {
            sum_p += a[j];
        }
        p = dim - 2;
        if (sum_p < dim - 2) p = sum_p;

        printf("p%d: %d\n", i, p);

        for (int j = 0; j <= p; j++) {
            sum += a[j] * a[j + 1];
        }

        printf("sum: %d\n", sum);

        for (int j = p; j < dim; j++) {
            printf("j: %d, a[j]: %d\n", j, a[j]);
            prod *= a[j];
        }

        printf("prod: %d\n", prod);

        tmp[i] = sum + prod;
        p = 0;
        sum_p = 0;
        sum = 0;
        prod = 1;
    }

    for (int i = 0; i < dim; i++) {
        a[i] = tmp[i];
    }

    free(tmp);
}


int main() {
    int a[] = {2, 1, 1, 1};
    int n = 4;

    mysplit(a, n);


    printf("\nArray finale:\n");
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(", ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}