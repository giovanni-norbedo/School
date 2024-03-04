#include <stdio.h>


float fr(int n) {
    if (n == 0) return 1.0;
    return 1.0 / ((2.0 * n + 1.0) * (2.0 * n + 1.0)) + fr(n - 1);
}

float fi(int n) {
    float r = 0.0;
    for (int i = 1; i <= n; i++) {
        r += 1.0 / ((2.0 * i + 1.0) * (2.0 * i + 1.0));
    }
    return r;
}


int main(void) {
    float pi_ottavi = (3.141582 * 3.141582) / 8;

    for (int i = 1; i <= 100; i++) {
        printf("%f/%f : %f\n", fr(i), fi(i), pi_ottavi);
    }

    return 0;
}
