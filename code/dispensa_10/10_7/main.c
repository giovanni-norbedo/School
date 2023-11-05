#include <stdio.h>


int si(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++) {
        r += i;
    }
    return r;
}

int sr(int n) {
    if (n == 0) return 0;
    return n + sr(n - 1);
}

int se(int n) {
    return (n * (n + 1)) / 2;
}


int main(void) {
    int uguale = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Somma ricorsiva/iterativa/esatta fino a %d: %d/%d/%d\n", i, sr(i), si(i), se(i));
        if ((sr(i) != si(i)) || (si(i) != se(i))) uguale = 1;
    }

    printf("\nUguale: %d\n", uguale);

    return 0;
}
