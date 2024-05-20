#include <stdio.h>


int si(int n) {
    int r = 0;
    for (int i = n; i != 0; i = i / 10) {
        r += i % 10;
    }
    return r;
}

int sr(int n) {
    if (n == 0) return 0;
    return (n % 10) + sr(n / 10);
}


int main(void) {
    int max_ite = 0;
    int max_ric = 0;
    int n_ite, n_ric;

    for (int i = 1; i <= 1000; i++) {
        printf("Somma cofre ricorsiva/iterativa %d: %d/%d\n", i, sr(i), si(i));
        if (sr(i) > max_ric) { max_ric = sr(i); n_ric = i; }
        if (si(i) > max_ite) { max_ite = si(i); n_ite = i; }
    }

    printf("Il valore massimo per la ricorsiva è %d per il numero %d\n", max_ric, n_ric);
    printf("Il valore massimo per la iterativa è %d per il numero %d\n", max_ite, n_ite);

    return 0;
}
