#include <stdio.h>

int main(void)
{
    int n;
    int a = 1;
    int b = 1;
    int c;

    printf("Inserisci il numero n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("La serie di Fibonacci con (n=0): 0 \n");
    } 
    else 
    {
        for (int i = 0; i < n-1; i++)
        {
            c = a;
            a = b;
            b = c + b;
        }
    
        printf("La serie di Fibonacci con (n=%d): %d \n", n, a);
    }
    
    return 0;
}
