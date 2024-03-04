#include <stdio.h>

float media(int a[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    return s / n;
}

float varianza(int a[], int n) {
    float mu = media(a, n);
    float s = 0;

    for (int i = 0; i < n; i++) {
        float t = a[i] - mu;
        s += t * t;
    }

    return s / n;
}

int main() {
    int a[] = {1, 4, 2, 7, 8, 10};
    int n = 6;

    printf("Varianza: %f\n", varianza(a, n));

    return 0;
}
