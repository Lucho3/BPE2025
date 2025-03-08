#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    int* p1 = &a;
    int* p2 = &b;

    printf("Addition via pointers: %d \n", *p1 + *p2);
    printf("Subtraction via pointers: %d \n", *p1 - *p2);
    printf("Multiplication via pointers: %d \n", *p1 * *p2);
    if(*p2 != 0) {
        printf("Division via pointers: %f \n", (float)*p1 / (float)*p2);
    }
    else {
        printf("Error: division by 0");
    }
    return 0;
}
