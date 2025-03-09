#include <stdio.h>
#include <math.h>

// зад1
float square_area(float side) 
{
    return side * side;
}

float rectangle_area(float length, float width) 
{
    return length * width;
}

float triangle_area(float base, float height) 
{
    return (base * height) / 2;
}

float circle_area(float radius) 
{
    return M_PI * radius * radius;
}

int main() 
{
    int choice;
    float a, b;
    
    printf("Изберете геометрична фигура (1 - квадрат, 2 - правоъгълник, 3 - правоъгълен триъгълник, 4 - окръжност): ");
    scanf("%d", &choice);
    
    switch (choice) 
    {
        case 1:
            printf("Въведете страната на квадрата: ");
            scanf("%f", &a);
            printf("Фигура: Квадрат, Лице: %.2f\n", square_area(a));
            break;
        case 2:
            printf("Въведете дължина и ширина на правоъгълника: ");
            scanf("%f %f", &a, &b);
            printf("Фигура: Правоъгълник, Лице: %.2f\n", rectangle_area(a, b));
            break;
        case 3:
            printf("Въведете основа и височина на правоъгълния триъгълник: ");
            scanf("%f %f", &a, &b);
            printf("Фигура: Правоъгълен триъгълник, Лице: %.2f\n", triangle_area(a, b));
            break;
        case 4:
            printf("Въведете радиуса на окръжността: ");
            scanf("%f", &a);
            printf("Фигура: Окръжност, Лице: %.2f\n", circle_area(a));
            break;
        default:
            printf("Невалиден избор!\n");
    }
    
    return 0;
}
 
 //зад2
void swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("След размяната в тялото на функцията: a = %d, b = %d\n", a, b);
}

int main() 
{
    int x = 10, y = 20;
    
    printf("Преди размяната: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("След извикване на swap(): x = %d, y = %d (не се променят, защото е по стойност)\n", x, y);
    
    return 0;
}

//зад3
int isEven(int num);

int main() 
{
    int number;
    printf("Въведете число: ");
    scanf("%d", &number);

    if (isEven(number))
        printf("Числото %d е четно.\n", number);
    else
        printf("Числото %d е нечетно.\n", number);

    return 0;
}

int isEven(int num) 
{
    return num % 2 == 0; 
}

//зад4
void decimalToBinary(int num) 
{
    if (num == 0) 
    {
        printf("0");
        return;
    }
    
    int binary[32]; 
    int i = 0;
    
    while (num > 0) 
    {
        binary[i] = num % 2; 
        num = num / 2; 
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", binary[j]);
    }
}

int main() 
{
    int num;
    printf("Въведете десетично число: ");
    scanf("%d", &num);
    printf("Двоично представяне: ");
    decimalToBinary(num);
    printf("\n");
    return 0;
}
