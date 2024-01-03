 #include <stdio.h>

// n' = n / 2
// r' = n % 2
// c0 = r' è la cifra più a destra
// n'' = n' / 2
// r'' = n % 2
// c1 = r'' è la seconda cifra più a destra
// ...
// se n'...' è

int pot(int b, int e) {
    int r = 1;
    if (e == 0) return 1;
    for (int i = 1; i <= e; i++) {
        r *= b;
    }
    return r;
}

int dec_to_bin(int n, int p) {
    if (n == 0) return 0;
    return dec_to_bin(n / 2, p * 10) + (n % 2) * p;
}

int bin_to_dec(int n) {
    int r = 0;
    int c = 0;
    for (int i = n; i != 0; i = i / 10) {
        r += (i % 10) * pot(2, c);
        c += 1;
    }
    return r;
}


int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("b10 -> b2 -> b10 = %d -> %d, -> %d\n", i, dec_to_bin(i, 1), bin_to_dec(dec_to_bin(i, 1)));
    }

    return 0;
}
