#include <stdio.h>


int gcd(int a, int b) {
    if (a == b) return a;
    if (a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}

int main(void) {
    printf("%d\n", gcd(180, 200));

    return 0;
}
