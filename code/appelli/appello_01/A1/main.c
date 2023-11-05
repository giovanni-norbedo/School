#include <stdio.h>


float fr(int n) {
    if (n == 1) return -1;
    if (n == 2) return 0;
    if (n % 2 == 0) return 0.5*fr(n-2) - fr(n-1) + 1.0;
    return 2.0*n + fr(n-1) + 1.0 + 2.0*fr(n-2);
}

float fi(int n) {
    float f1 = -1.0;
    float f2 = 0.0;
    float tmp;

    if (n == 1) return f1;
    if (n == 2) return f2;

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) tmp = 0.5*f1 - f2 + 1.0;
        else tmp = 2.0*i + f2 +1 + 2*f1;
        f1 = f2;
        f2 = tmp;
    }

    return tmp;
}


int main(void) {

    for (int i = 1; i <= 10; i++) {
        printf("%f/%f\n", fr(i), fi(i));
    }

    return 0;
}
