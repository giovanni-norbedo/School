#include <stdio.h>

int main(void) {
	int n;
	float x;
	float sum;
	int running = 1;

	printf("Inserisci dei numeri per calcolare la loro media aritmetica. Scrivi 0 per smettere di inserire. \n\n");

	while (running)
	{
		printf("Inserisci un numero: ");
		scanf("%f", &x);

		if (x == 0)
		{
            		running = 0;
        	}
		else
		{
			sum += x;
			n++;
		}
	}

	printf("La media aritmetica dei numeri inseriti è: %f \n", sum / n);

	return 0;
}
