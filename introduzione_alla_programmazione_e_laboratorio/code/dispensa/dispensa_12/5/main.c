#include <stdio.h>

void inverti(int a[], int dim) {
    int tmp;

    for (int i = 0; i < dim / 2; i++) {
        tmp = a[i];
        a[i] = a[dim - i - 1];
        a[dim - i - 1] = tmp;
    }

    for (int i = 0; i < dim; i++) {
        printf("%d\n", a[i]);
    }
}

int main() {
    int a[] = {9, 8, 3, 4};
    int dim = 4;

    inverti(a, dim);

    return 0;
}
