// exercise - 4; problem 2;
#include <stdio.h>

void switch_n(double *a, double *b) {
    double c = *a;
    *a = *b;
    *b = c;
}

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Previous a = %lf; b = %lf\n", a, b);
    switch_n(&a, &b);
    printf("Now: a = %lf; b = %lf;\n", a, b);
    return 0;
}