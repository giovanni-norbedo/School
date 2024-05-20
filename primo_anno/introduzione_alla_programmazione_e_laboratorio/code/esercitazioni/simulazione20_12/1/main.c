#include <stdio.h>
#include <stdlib.h>


int verifica_media(int a[], int dim, float n, float e) {
    int esiste = 0;
    float media = 0;
    float sum = 0;
    for (int i = 0; i < dim; i++) {
        for (int k = 0; k < dim; k++) {
            if (i + k < dim) {
                for (int j = i; j <= i + k; j++) {
                    sum += a[j];
                }
                media = sum / (k + 1);
                printf("media: %f\n", media);
                if (media > n - e && media < n + e) {
                    esiste = 1;
                    printf("i: %d, k: %d\n", i, k);
                }
            }
            media = 0;
            sum = 0;
        }
    }
    return esiste;
}

int main() {
    int a[] = {1, 3, 8, 9};
    int dim = 4;
    float n = 7;
    float e = 0.5;
    
    printf("\nTrovato k? %d\n", verifica_media(a, dim, n, e));
    return 0;
}