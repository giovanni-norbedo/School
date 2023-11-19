#include <stdio.h>


int f(int n) {
    if (n <= 0) return 1;
    return n + f(n - 2);
}


int main(void) {

    printf("%d, %d\n", f(4), f(1));

    return 0;
}
