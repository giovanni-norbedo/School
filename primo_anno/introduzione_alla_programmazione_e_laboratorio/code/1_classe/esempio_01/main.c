#include <stdio.h>

int main(void) {
	int a, b;

	printf("Inserisci il primo numero: ");
	scanf("%d", &a);

	printf("Inserisci il secondo numero: ");
	scanf("%d", &b);

	double media = (a+b)/2.0;

	printf("La somma è: %d \n", a+b);
	printf("La media aritmetica è: %f \n", media);

	return 0;
}
