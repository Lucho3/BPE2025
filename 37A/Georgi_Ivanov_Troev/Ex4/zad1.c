#include <stdio.h>
#include <stdlib.h>

float SquareArea(float a)
{
    float result = a * a;
    return result;
}
float RectangleArea(float a, float b)
{
    return a * b;
}
float TriangleArea(float a, float b)
{
    return (a * b) / 2;
}
float CircleArea(float r)
{
    return 3.14 * r * r;
}

int main()
{
    int figure_code;
    scanf("%d", &figure_code);

    if(figure_code == 1)
    {
        float a;
        float area;
        scanf("%f", &a);
        area = SquareArea(a);
        printf("Square: ");
        printf("%f", area);
    }
     else if(figure_code == 2)
    {
        float a, b;
        printf("Enter a: ");
        scanf("%f", &a);
        printf("Enter b: ");
        scanf("%f", &b);
        float area = RectangleArea(a, b);
        printf("Rectangle: ");
        printf("%f", area);
    }
    else if(figure_code == 3)
    {
        float a, b;
        printf("Enter a: ");
        scanf("%f", &a);
        printf("Enter b: ");
        scanf("%f", &b);
        float area = TriangleArea(a, b);
        printf("Triangle: ");
        printf("%f", area);
    }
    else if(figure_code == 4)
    {
        float r;
        printf("Enter r: ");
        scanf("%f", &r);
        float area = CircleArea(r);
        printf("Circle: ");
        printf("%f", area);
    }

    return 0;
}



