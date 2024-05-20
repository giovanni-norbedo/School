#include <stdio.h>

int main(void){
	int n;

	printf("Inserire un numero intero: ");
	scanf("%d", &n);

	printf("Il numero precedente di %d è %d \n", n, n-1);
	printf("Il numero successivo di %d è %d \n", n, n+1);

	return 0;
}
