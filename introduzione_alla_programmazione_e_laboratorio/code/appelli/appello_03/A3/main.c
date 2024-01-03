#include <stdio.h>
#include <stdlib.h>


float f(int xi) {
    if (xi == 0)
        return 1.0;
    if (xi == 1)
        return 3.0;
    return 1 - ((xi - 1) * f(xi - 2)) / (2 * f(xi - 1));
}


float get_F(int X[], int dim) {
    float F = 1;

    for (int i = 0; i < dim; i++) {
        F *= f(X[i]);
    }

    return F;
}


int main() {
    int X[] = {2, 4, 0, 1, 5};
    int dim = 5;

    float F = get_F(X, dim);
    printf("F: %f\n", F); 

    return 0;
}