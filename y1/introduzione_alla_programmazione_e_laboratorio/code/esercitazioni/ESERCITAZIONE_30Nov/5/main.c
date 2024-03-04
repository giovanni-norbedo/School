#include <stdio.h>
#include <stdlib.h>


void left(int a[], int n) {
    int tmp = a[0];
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = tmp;
}

void right(int a[], int n) {
    int tmp = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = tmp;
}

int * f(int a[], int n, int k) {
    if (k == 0) return a;
    int is_neg = 0;
    if (k < 0) {
        is_neg = 1;
        k *= -1;
    }
    for (int i = 0; i < k; i++) {
        if (is_neg) left(a, n);
        else right(a, n);
    }
    return a;
}


int main() {
    int a[] = {1,2,3,4,5};
    int n = 5;

    int k;
    printf("Inserire k: ");
    scanf("%d", &k);

    int * b = f(a, n, k);

    for (int i = 0; i < n; i++) {
        if (i != 0) printf(", ");
        printf("%d", b[i]);
    }
    printf("\n");

    return 0;
}