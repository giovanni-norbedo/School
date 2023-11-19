#include <stdio.h>


int p(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void fr(int n1, int n2, int a, int b) {
    if (n1 <= b && n2 <= b) {
        n1++;
        if (n1 == b) {
            n1 = a;
            n2++;
        }
        if (p(n1) == 1 && p(n2) == 1 && n2 - n1 == 2)
            printf("%d, %d\n", n1, n2);
        fr(n1, n2, a, b);
    }
}


int main(void) {
    int a = 1;
    int b = 100;

    fr(a, a, a, b);

    return 0;
}