#include <stdio.h>

int minimo(int x, int y, int z)
{
    if (x < y && x < z) return x;
    if (y < z) return y;
    else return z;
}

int tripletta(int x, int y)
{
    int w = y;
    if (x > y) w = x;

    for (int i = 1; i <= w; i++)
    {
        printf("tripletta (%d, %d, %d) - minimo -> %d\n", x, y, i, minimo(x, y, i));
    }
}

int main(void)
{
    int x, y, z;

    printf("Inserisci il numero (x): ");
    scanf("%d", &x);
    printf("Inserisci un numero (y): ");
    scanf("%d", &y);
    printf("Inserisci un numero (z): ");
    scanf("%d", &z);

    tripletta(x, y);

    return 0;
}
