#include <stdio.h>

// il numero zero NON è considerato primo
// il numero uno NON è considerato primo
// il numero due è considerato primo

int pr(int n, int k) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n == (k + 1)) return 1;
    if (n % k == 0) return 0;
    return pr(n, k + 1);
}

int pi(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int main(void) {
    int n_primi = 0;
    int d_media;
    int last = 0;

    for (int i = 1; i <= 100; i++) {
        if ((pr(i, 2) == 1) && (pi(i) == 1)) printf("Test ricorsivo/iterativo primo %d: vero/vero\n", i);
        if ((pr(i, 2) == 1) && (pi(i) == 0)) printf("Test ricorsivo/iterativo primo %d: vero/falso\n", i);
        if ((pr(i, 2) == 0) && (pi(i) == 1)) printf("Test ricorsivo/iterativo primo %d: falso/vero\n", i);
        if ((pr(i, 2) == 0) && (pi(i) == 0)) printf("Test ricorsivo/iterativo primo %d: falso/falso\n", i);
        if (pi(i) == 1) {
            n_primi += 1;
            if (last == 0) { last = i; }
            else {
                d_media += i - last;
                last = i;
            }
        }
    }

    d_media = d_media / n_primi;

    printf("Ci sono %d numeri primi nell'intervallo [1, 100]\n", n_primi);
    printf("La distanza media tra essi è %d\n", d_media);

    return 0;
}
