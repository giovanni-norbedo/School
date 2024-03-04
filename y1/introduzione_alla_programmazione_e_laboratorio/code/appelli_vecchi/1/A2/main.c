#include <stdio.h>


int s(int a[], int dim) {
    dim--;
    if (dim == 1)
        return (a[0] + a[1]);
    return (a[dim - 1] + a[dim]) * s(a, dim);
}


int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int dim = 6;

    printf("%d\n", s(a, dim));

    return 0;
}