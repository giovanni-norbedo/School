#include <stdio.h>


float fr(int n) {
    if (n == 0) return 2;
    return 0.5 * (1 + 1/(fr(n-1)));
}


int main(void) {

    printf("%f\n", fr(2));

    return 0;
}
