#include <stdio.h>

int main(void)
{
    int n, k, tot;
    int k_i = 1;

    printf("Inserire n: ");
    scanf("%d", &n);

    printf("Inserire k: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        k_i *= k;
        tot += k_i;
    }

    printf("Risultato sommatoria: %d \n", tot);

    return 0;
}
