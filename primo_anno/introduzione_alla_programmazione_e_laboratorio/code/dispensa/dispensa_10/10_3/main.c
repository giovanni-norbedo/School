#include <stdio.h>
#include <math.h>


float distanza(float x1, float x2, float y1, float y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}


int main(void) {
    printf("%f\n", distanza(0.0, 0.0, 1.0, 1.0));

    return 0;
}
