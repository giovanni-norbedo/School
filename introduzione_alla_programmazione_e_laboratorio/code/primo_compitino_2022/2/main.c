#include <stdio.h>


int primo(int x) {
    if (x == 1) return 0;
    if (x == 2) return 1;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int pi(int k, int n) {
    if (k > n) return 0;
    return k * primo(k) + pi(k + 1, n);
}


int main(void) {

    printf("%d\n", pi(3, 21));

    return 0;
}
