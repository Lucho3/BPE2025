#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n1, n2;
    int *p1 = &n1, *p2 = &n2;

    scanf("%d", p1);
    scanf("%d", p2);

    printf("Number 1 + Number 2 = %d \n", *p1 + *p2);
    printf("Number 1 - Number 2 = %d \n", *p1 - *p2);
    printf("Nummber 1 * Number 2 = %d \n", *p1 * *p2);

    if (*p2 != 0) 
    {
        printf("Number 1 / Number 2 = %d \n", *p1 / *p2);
        printf("Number 2 / Number 1 = %d \n", *p2 / *p1);
    } else 
    {
        printf("Can't divide by zero\n");
    }

    return 0;
}