#include <stdio.h>

int main(void) {
	float a,b;

	printf("Inserisci il primo numero (a): ");
	scanf("%f", &a);

	do {
		printf("Inserisci il secondo numero (b): ");
	        scanf("%f", &b);

		if (b == 0) {
			printf("b deve essere diverso da zero! \n");
		}
	} while (b == 0);


	printf("La somma a + b è: %f \n", a - b);
	printf("La differenza a - b è: %f \n", a - b);
	printf("Il prodotto a * b è: %f \n", a * b);
	printf("LA divisione a / b è: %f \n", a / b);

	return 0;
}
