#include <stdio.h>

int main(void) {
    int a[] = {1, 4, 5, 3, 6};
    int b[5];
    int s = 0;

    for (int i = 0; i < 5; i++) {
        s += a[i];
        b[i] = s;
        printf("%d\n", s);
    }

    return 0;
}
