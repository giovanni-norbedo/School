#include <stdio.h>

void f(int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d\n", *(a + i));
    }
}

int main() {
    int a[] = {2, 3, 3, 4, 2, 6, 7, 2};
    int dim = 8;

    f(a, dim);

    return 0;
}
