#include <stdio.h>
#include <stdlib.h>


int is_inside(int x, int y, int z) {
    if (x >= y && x <= z) return 0;
    return -1;
}


int set_size(int i, int j, int t, int u) {
    j--;
    t++;
    int c = 0;
    int min = i;
    if (t < i) min = t;
    int max = j;
    if (u > j) max = u;

    for (int n = min; n <= max; n++) {
        if (is_inside(n, i, j) == 0 || is_inside(n, t, u) == 0) {
            if (!(is_inside(n, i, j) == 0 && is_inside(n, t, u) == 0)) {
                c++;
            }
        }
    }

    return c;
}


int main() {
    int c = set_size(2, 5, 4, 7);

    printf("%d\n", c);

    return 0;
}