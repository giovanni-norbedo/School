#include <stdio.h>

void f(int var) {
    printf("funzione: %p\n", &var);
}

int main() {
    int var;

    printf("main: %p\n", &var);

    f(var);

    return 0;
}

// Verranno stampati due indirizzi diversi
// poiché sono due variabili diverse con indirizzi di memoria diversi,
// la prima è una variabile dichiarate nel main,
// la seconda è una copia della variabile del main,
// passata come argomento in una funzione,
// quindi una variabile locale con indirizzo proprio.
