#include <stdio.h>


int fr(int n) {
    if (n == 0) return 0;
    if ((n == 1) || (n == 2)) return 1;
    return fr(n - 1) + fr(n - 2);
}

int fi(int n) {
    int f1 = 1;
    int f2 = 1;
    int tmp;

    if (n == 0) return 0;
    if ((n == 1) || (n == 2)) return 1;

    for (int i = 3; i <= n; i++) {
        tmp = f1 + f2;
        f1 = f2;
        f2 = tmp;
    }

    return tmp;
}


int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("Fibonacci ricorsivo/iterativo %d: %d/%d\n", i, fr(i), fi(i));
    }

    return 0;
}
