#include <stdio.h>


void terne(int a, int b) {
    for (int x = a; x <= b; x++) {
        for (int y = a; y <= b; y++) {
            for (int z = a; z <= b; z++) {
                if (x*x + y*y == z*z) printf("%d^2 + %d^2 = %d^2\n", x, y, z);
            }
        }
    }
}


int main(void) {

    terne(1, 100);

    return 0;
}
