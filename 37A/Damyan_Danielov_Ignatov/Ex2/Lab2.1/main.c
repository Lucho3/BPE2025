#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int side1 = 0, side2 = 0;
    printf("Enter length of the rectangle's first side (cm): ");
    scanf("%d",&side1);
    printf("Enter length of the rectangle's second side (cm): ");
    scanf("%d",&side2);
    printf("The area of the rectangle is %d cm^2 \n \n", side1*side2);
    return 0;
}
