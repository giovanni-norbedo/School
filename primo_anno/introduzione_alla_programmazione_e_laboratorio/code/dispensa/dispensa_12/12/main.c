#include <stdio.h>
#include <stdlib.h>


int is_palindrome(int a[], int dim) {
    int r = 1;
    for (int i = 0; i < dim / 2; i++) {
        if (a[i] != a[dim - 1 - i]) r = 0;
    }
    return r;
}


int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 2, 1};
    int c[] = {4, 3, 4 };
    int d[] = {0};

    printf("a: %d\n", is_palindrome(a, 4));
    printf("b: %d\n", is_palindrome(b, 4));
    printf("c: %d\n", is_palindrome(c, 3));
    printf("d: %d\n", is_palindrome(d, 1));

    return 0;
}