#include <stdio.h>


//k = 1
int dr(int n, int k) {
    if (k > n) return 0;
    if (n % k == 0) return 1 + dr(n, k + 1);
    return dr(n, k + 1);
}

int di(int n) {
    int d = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) d += 1;
    }
    return d;
}

// c = 1, i = 1, d_last = 0
void fr(int n, int c, int i, int d_last) {
    int d = dr(i, 1);
    if (d > d_last) {
        printf("%d\n", i);
        if (c == 20) printf("\n");
        else fr(n, c + 1, i + 1, d);
    }
    else fr(n, c, i + 1, d_last);
}

void fi(int n) {
    int c = 1;
    int i = 0;
    int d = 0;
    int d_last = 0;

    while (c <= n) {
        while (d <= d_last) {
            i++;
            d = di(i);
        }
        printf("%d\n", i);
        c++;
        d_last = d;
    }
}


int main(void) {
    int k = 20;

    printf("I primi %d numeri altamente composti ricorsivamente\n", k);
    fr(k, 1, 1, 0);

    printf("I primi %d numeri altamente composti iterativamente\n", k);
    fi(k);

    return 0;
}


