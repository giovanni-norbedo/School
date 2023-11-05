#include <stdio.h>


void seq(int n) {
    if (n != 1) {
        if (n % 2 == 0) seq(n / 2);
        seq(3 * n + 1);
    }
}

int lun(int n, int l) {
    if (n == 1) return l;
    if (n % 2 == 0) return lun(n / 2, l + 1);
    return lun(3 * n + 1, l + 1);
}

int main(void) {
    printf("%d\n", lun(12, 0));

    return 0;
}
