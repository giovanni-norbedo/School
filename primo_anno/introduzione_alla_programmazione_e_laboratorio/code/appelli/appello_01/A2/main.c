#include <stdio.h>
#include <stdlib.h>

int media(int v[], int c[], int n) {
    n--;
    if (n == 0) {
        if (v[n] > 18) 
            return v[n] * c[n];
        return 0;
    }
    if (v[n] > 18) 
        return v[n] * c[n] + media(v, c, n);
    return media(v, c, n);
}


int main() {
    int v[] = {2, 14, 30, 24, 14};
    int c[] = {6, 6, 9, 12, 6};
    int n = 5;

    int r = media(v, c, n);

    printf("%d\n", r);

    return 0;
}