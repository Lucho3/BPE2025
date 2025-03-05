#include <stdio.h>

void switch_n() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Previous: %lf %lf \n", a, b);
    double c = a;
    a = b;
    b = c;
    printf("Now: %lf %lf", a, b);
}

int main() {
    switch_n();
    return 0;
}
