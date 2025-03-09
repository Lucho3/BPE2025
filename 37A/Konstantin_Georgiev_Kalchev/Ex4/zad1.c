#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float square(float a)
{
    float s = a * a;
    return s;
}
float rectangle(float a, float b)
{
    float s = a * b;
    return s;
}
float triangle(float a, float b)
{
    float s = a * b / 2;
    return s;
}
float circle(float r)
{
    float s = M_PI * r * r;
    return s;
}

int main()
{
    printf("Въведи число: ");
    int num;
    float s;
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Квадрат\n");
        float a;
        printf("Въведи а: ");
        scanf("%f", &a);
        s = square(a);
    }
    else if (num == 2)
    {
        printf("Правоъгълник\n");
        float a, b;
        printf("Въведи а и b: ");
        scanf("%f %f", &a, &b);
        s = rectangle(a, b);
    }
    else if (num == 3)
    {
        printf("Правоъгълен триъгълник\n");
        float a, b;
        printf("Въведи а и b: ");
        scanf("%f %f", &a, &b);
        s = triangle(a, b);
    }
    else
    {
        printf("Окръжност\n");
        float r;
        printf("Въведи r: ");
        scanf("%f", &r);
        s = circle(r);
    }
    printf("S = %.2f", s);
}