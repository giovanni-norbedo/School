#include <stdio.h>


float sr(int n) {
    if (n == 0) return 1.0;
    if (n == 1) return 3.0;
    return (sr(n - 1) + 3.0) / (2.0 * n) + sr(n - 2);
}

float si(int n) {
    float s0 = 1.0;
    float s1 = 3.0;
    float tmp;

    if (n == 0) return s0;
    if (n == 1) return s1;

    for (int i = 2; i <= n; i++) {
        tmp = (s1 + 3.0) / (2.0 * i) + s0;
        s0 = s1;
        s1 = tmp;
    }

    return tmp;
}


int main(void) {

    for (int i = 0; i <= 10; i++) {
        printf("%f/%f\n", sr(i), si(i));
    }

    return 0;
}
