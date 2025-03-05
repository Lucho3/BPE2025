// Напишете функция за размяна на две числа.  Демонстрирайте работата й.

#include <iostream>

void func(double *a, double *b) {
    double c = *a;
    *a = *b;
    *b = c; 
}

int main()
{
    double a, b;
    scanf_s("%lf \n %lf", &a, &b);

    printf("Before exchange:");
    printf("a: %.2lf, b: %.2lf\n", a, b);
    func(&a, &b);
    printf("After exchange:");
    printf("a: %.2lf, b: %.2lf", a, b);
}
