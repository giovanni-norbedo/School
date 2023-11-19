#include <stdio.h>

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int s = 0;

    for (int i = 0; i < 5; i++) {
        s += a[i];
    }

    printf("%d\n", s);

    return 0;
}
