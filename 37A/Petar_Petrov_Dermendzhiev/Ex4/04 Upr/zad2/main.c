#include <stdio.h>
#include <stdlib.h>


void SwapNumbers(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
    printf("A is: ");
    printf("%d\n", a);
    printf("B is: ");
    printf("%d", b);
}

int main()
{
    int num1, num2;
    printf("Enter a: ");
    scanf("%d", &num1);
    printf("Enter b: ");
    scanf("%d", &num2);

    SwapNumbers(num1, num2);

    return 0;
}
