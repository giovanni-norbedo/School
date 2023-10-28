#include <stdio.h>

int potenza_iter(int base, int esponente)
{
    int p = 1;

    for (int i = 0; i < esponente; i++)
    {
        p *= base;
    }

    return p;
}

void test(void)
{
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            printf("coppia (a = %d, b = %d) - a^b = %d^%d = %d\n", a, b, a, b, potenza_iter(a, b));
        }
    }
}

int main(void)
{
    int a,b;

    printf("Iserisci il numero (a): ");
    scanf("%d", &a);
    printf("Iserisci il numero (b): ");
    scanf("%d", &b);

    printf("a^b : %d\n", potenza_iter(a, b));
    test();

    return 0;
}

