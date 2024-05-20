#include <stdio.h>


void f(int a, int b) {
    if (a < b) {
        printf("%d, ", a);
        f(a + 2, b);
    }
}


int main(void) {
    f(2, 11);

    return 0;
}
