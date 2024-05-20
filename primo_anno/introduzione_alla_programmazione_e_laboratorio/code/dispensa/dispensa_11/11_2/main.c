#include <stdio.h>


float fr(int n, float p) {
    if (n == 1) return p;
    return 0.5 * (fr(n - 1, p) + (p / fr(n - 1, p)));
}


float fi(int n, float p) {
    float r = p;
    for (int i = 2; i <= n; i++) {
        r = 0.5 * (r + (p / r));
    }
    return r;
}


int main(void) {
    for (int i = 1; i <= 50; i++) {
        printf("%f/%f\n", fr(i, 81.0), fi(i, 81.0));
    }

    return 0;
}
