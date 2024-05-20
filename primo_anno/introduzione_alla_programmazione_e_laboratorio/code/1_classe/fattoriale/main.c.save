#include <stdio.h>

int fattoriale(int n) {
    if (n == 0) return 1;
    return n * fattoriale(n - 1);
}

int main(void) {
    int n;

    printf("Inserisci un numero n >= 0: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("n fattoriale è: %d \n", fattoriale(n));
    }
    else
    {
        printf("n deve essere maggiore o uguale a zero! \n");
    }

    return 0;
}
