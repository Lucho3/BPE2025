#include <stdio.h>

int main()
{
    printf("Въведи 2 числа: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int *ip1, *ip2;
    int sum, diff, pr;
    double chastno;
    ip1 = &num1;
    ip2 = &num2;

    sum = *ip1 + *ip2;
    diff = *ip1 - *ip2;
    pr = *ip1 * *ip2;
    chastno = (double)*ip1 / *ip2;

    printf("Сума: %d\n", sum);
    printf("Разлика: %d\n", diff);
    printf("Произведение: %d\n", pr);
    printf("Частно: %.2f", chastno);

    return 0;
}