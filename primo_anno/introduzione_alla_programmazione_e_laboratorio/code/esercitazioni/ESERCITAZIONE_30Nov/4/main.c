#include <stdio.h>
#include <stdlib.h>

int * f(int a[], int n, int b[], int m, int *d) {
    int * c = malloc(sizeof(int) * (n + m));

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for (int j = 0; j < m; j++) {
        c[j + n] = b[j];
    }

    int non_ordinato = 1;
    int tmp;

    while (non_ordinato) {
        for (int k = 0; k < n + m - 1; k++) {
            if (c[k] > c[k + 1]) {
                tmp = c[k];
                c[k] = c[k + 1];
                c[k + 1] = tmp;
            }
        }

        non_ordinato = 0;

        for (int l = 0; l < n + m - 1; l++) {
            if (c[l] > c[l + 1]) {
                non_ordinato = 1;
            }
        }
    }

    for (int i = 0; i < n + m - 1; i ++) {
        if (c[i] == c[i + 1]) (*d)++;
    }

    int * r = malloc(sizeof(int) * (n + m - *d));

    int pos = 0;

    for (int i = 0; i < n + m ; i++) {
        if (c[i] != c[i + 1]) {
            r[pos] = c[i];
            pos++;
        }
    }

    return r;
}

int main() {
    int a[] = {2,3,4,5,2,1,9,2};
    int n = 8;

    int b[] = {0,1,10,6,3};
    int m = 5;

    int d = 0;
    int * c = f(a, n, b, m, &d);

    for (int i = 0; i < n + m - d; i++) {
        if (i != 0) printf(", ");
        printf("%d", c[i]);
    }

    printf("\n");

    return 0;
}
