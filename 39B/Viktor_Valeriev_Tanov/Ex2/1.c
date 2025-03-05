#include <stdio.h>

int main() {
    double a, b;
    printf("Enter a side: ");
    scanf("%lf", &a);
    printf("Enter b side: ");
    scanf("%lf", &b);
    printf("The area of the rectangle is: %.2f", a * b);
    return 0;
}