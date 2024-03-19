#include <stdio.h>


int fi(int n) {
    int r = 1;
    for (int i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}

int fr(int n) {
    if (n == 0) return 1;
    return n * fr(n - 1);
}


int main(void) {
    int uguali = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Fattoriale ricorsivo/iterativo di %d: %d/%d\n", i, fr(i), fi(i));
        if (fr(i) != fi(i)) uguali = 1;
    }

    if (uguali == 0) {
        printf("Le due funzioni danno lo stesso risultato? Vero\n");
    } else {
        printf("Le due funzioni danno lo stesso risultato? False\n");
    }

    return 0;
}
