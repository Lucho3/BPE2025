#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_num, second_num;

    scanf("%d", &first_num);
    scanf("%d", &second_num);

    int *fnp, *snp;

    fnp = &first_num;
    snp = &second_num;


    int sum = *fnp + *snp;
    int subtract = *fnp - *snp;
    int multiply = *fnp * *snp;
    float  divide = *fnp / *snp;

    printf("Sum: %d\n", sum);
    printf("Subtract: %d\n", subtract);
    printf("Multiply: %d\n", multiply);
    printf("Divide: %.2f\n", divide);
    return 0;

}
