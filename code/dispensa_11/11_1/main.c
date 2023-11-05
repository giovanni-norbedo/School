#include <stdio.h>


float fr(int n) {
    if (n == 1) return 0.5;
    return (fr(n - 1) + 1) / 2.0;
}

float fi(int n) {
    float r = 0.5;
    for (int i = 2; i <= n; i++) {
        r = (r + 1) / 2.0;
    }
    return r;
}


int main(void) {
    for (int i = 1; i <= 50; i++) {
        printf("%f/%f\n", fr(i), fi(i));
    }

    return 0;
}
