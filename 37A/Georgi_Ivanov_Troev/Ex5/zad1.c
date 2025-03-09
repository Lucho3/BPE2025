#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ip;
    double *dp;

    int number = 5;
    double num1 = 6.5;

    ip = &number;
    dp = &num1;

    printf("Address: %d\n", &number);
    printf("Value: %d\n", number);

    printf("Address: %lf\n", &num1);
    printf("Value: %.2f\n", num1);

    return 0;
}
