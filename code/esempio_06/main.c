#include <stdio.h>

int main(void)
{
    int n;
    float x;
    float min, max;


    do
    {
        printf("Inserisci il numero (n): ");
        scanf("%d", &n);

        if (n < 1)
        {
            printf("Il numero deve essere maggiore di 0! \n");
        }
    }
    while (n < 1);


    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il numero (%d): ", i + 1);
        scanf("%f", &x);

        if (i == 0)
        {
            min = x;
            max = x;
        }

        if (x < min)
        {
            min = x;
        }

        if (x > max)
        {
            max = x;
        }
    }

    printf("Il numero minimo è = %f\nIl numero massimo è = %f\n", min, max);

    return 0;
}
