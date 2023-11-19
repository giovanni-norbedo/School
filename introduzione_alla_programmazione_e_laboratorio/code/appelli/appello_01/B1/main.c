#include <stdio.h>


int d(int n);

int p(int n) {
    if (n == 0) return 1;
    if (n > 1) return d(n - 1);
    return 0;
}

int d(int n) {
    if (n == 1) return 1;
    if (n > 1) return p(n - 1);
    return 0;
}

int main(void) {

    for (int i = 1; i <= 10; i++) {
        printf("%d/%d\n", p(i), d(i));
    }

    return 0;
}
