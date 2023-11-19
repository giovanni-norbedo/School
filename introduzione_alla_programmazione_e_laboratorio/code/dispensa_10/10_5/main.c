#include <stdio.h>


float prezzo_scontato(float prezzo, int sconto_percentuale) {
    return prezzo - (prezzo * sconto_percentuale) / 100.0;
}

int main(void) {
    printf("%f\n", prezzo_scontato(20.0, 70));

    return 0;
}
