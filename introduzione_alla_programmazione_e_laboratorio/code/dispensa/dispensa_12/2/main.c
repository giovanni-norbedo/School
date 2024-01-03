#include <stdio.h>

void area(float s, float d, float *a) {
    float b_mag = (s + d) / 2.0;
    float b_min = s - b_mag;

    float h = (2.0 / 3.0) * b_min;

    *a = (b_min + b_mag) * h / 2.0;
}

int main() {
    float s = 15.0;
    float d = 5.0;
    float a;

    area(s, d, &a);

    printf("Area: %f\n", a);

    return 0;
}
