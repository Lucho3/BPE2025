#include <stdio.h>
#include <stdlib.h>

void swapNumbers(int* num1, int* num2) {
    int temp = *num1;

    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a = 3;
    int b = 4;
    swapNumbers(&a,&b);
    printf("%d, %d",a,b);
    return 0;
}
