//зад 1 упр 5
#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int var = 10; 
    int *ptr; 
    ptr = &var; 
    printf("Адрес на var: %p\n", (void*)&var);
    printf("Адрес, съхранен в ptr: %p\n", (void*)ptr);
    printf("Стойност на var чрез ptr: %d\n", *ptr);
    
    return 0;
}

//зад 2 упр 5

void calculate(int *a, int *b, int *sum, int *diff, int *prod, float *quot) 
{
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = (*a) * (*b);
    if (*b != 0) 
    {
        *quot = (float)(*a) / (*b);
    }
    else 
    {
        *quot = 0; 
    }
}

int main() 
{
    int num1, num2, sum, diff, prod;
    float quot;
    printf("Въведете две числа: ");
    scanf("%d %d", &num1, &num2);
    calculate(&num1, &num2, &sum, &diff, &prod, &quot);
    printf("Сума: %d\n", sum);
    printf("Разлика: %d\n", diff);
    printf("Произведение: %d\n", prod);
    if (num2 != 0) 
    {
        printf("Деление: %.2f\n", quot);
    } 
    
    else 
    {
        printf("Деление: Грешка (деление на нула)\n");
    }
    
    return 0;
}

//зад3
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int num1 = 10;  
    int num2 = 20;  
    printf("Преди размяната: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("След размяната: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//зад4
void checkEvenOdd(int *num) 
{
    if (*num % 2 == 0) 
    {
        printf("Числото %d е четно.\n", *num);
    } 
    
    else 
    {
        printf("Числото %d е нечетно.\n", *num);
    }
}

int main() 
{
    int number;
    printf("Въведете число: ");
    scanf("%d", &number);
    checkEvenOdd(&number);

    return 0;
}

//зад5
int main() 
{
    int number;      
    int *ptr = &number; 
    printf("Въведете целочислено число: ");
    scanf("%d", ptr); 

    if (*ptr > 6) 
    {
        printf("Числото %d е по-голямо от 6.\n", *ptr);
    } 
    
    else 
    {
        printf("Числото %d не е по-голямо от 6.\n", *ptr);
    }

    return 0;
}

