#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2
    const float PI = 3.14;
    int radius = 0;
    printf("Enter radius length of the circle: ");
    scanf("%d",&radius);
    printf("The perimiter of the circle is %f \n", 2*PI*radius);

    return 0;
}
