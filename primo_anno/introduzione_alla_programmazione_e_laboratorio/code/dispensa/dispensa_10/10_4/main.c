#include <stdio.h>


int ua(float x, float y, float e) {
    float d = x - y;
    if (y > x) d = y - x;
    if (d < e) return 1;
    return 0;
}


int main(void) {
    float x, y, e;
    printf("Inserisci epsilon (e): ");
    scanf("%f", &e);
    printf("Inserisci il numero (x): ");
    scanf("%f", &x);
    printf("Inserisci il numero (y): ");
    scanf("%f", &y);

    if (ua(x, y, e) == 0) {
        printf("I due numeri sono diversi con epsilon %f\n", e);
    } else {
        printf("I due numeri sono uguali con epsilon %f\n", e);
    }

    return 0;
}
