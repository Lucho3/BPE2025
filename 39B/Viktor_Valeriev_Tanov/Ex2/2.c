#include <stdio.h>

int main() {
    double d;
    printf("Enter a diameter: ");
    scanf("%lf", &d);
    printf("Circumference: %lf\n", 3.14159 * d);
    return 0;
}