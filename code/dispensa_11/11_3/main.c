#include <stdio.h>


int pot(int b, int e) {
    int r = 1;
    if (e == 0) return 1;
    for (int i = 1; i <= e; i++) {
        r = r * b;
    }
    return r;
}

int sr(int n, int x) {
    if (n == 0) return 1;
    return pot(x, n) + sr(n - 1, x);
}

int si(int n, int x) {
    int r = 0;
    for (int i = 0; i <= n; i++) {
        r += pot(x, i);
    }
    return r;
}

int se(int n, int x) {
    return (1 - pot(x, n + 1)) / (1 - x);
}


int main(void) {
    int x = 2;

    for (int i = 0; i <= 15; i++) {
        printf("%d/%d/%d\n", sr(i, x), si(i, x), se(i, x));
    }

    return 0;
}
