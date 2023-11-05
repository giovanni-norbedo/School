#include <stdio.h>


int gcd(int a, int b) {
    if (a == b) return a;
    if (a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(int a, int b) {
    int min = a;
    if (b < a) min = b;
    for (int i = min; i <= a * b; i++) {
        if ((i % a == 0) && (i % b == 0)) return i;
    }
}


int main(void) {
    printf("%d, %d\n", lcm(12, 16), (12 * 16) / gcd(12, 16));

    return 0;
}
