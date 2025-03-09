#include <stdio.h>
#include <stdlib.h>

// Задача 1 
int main() 
{
    int num;
    scanf("%d", &num);
    if (num > 6) 
    {
        printf("Числото е по-голямо от 6.\n");
    }
    return 0;
}

// Задача 2
int main() 
{
    int num;
    scanf("%d", &num);
    if (num % 8 > 4) 
    {
        printf("Остатъкът от деление на 8 е по-голям от 4.\n");
    }
    return 0;
}


// Задача 4
int main() 
{
    int digit;
    scanf("%d", &digit);
    switch (digit) 
    {
        case 0:
            printf("Нула\n");
            break;
        case 1:
            printf("Едно\n");
            break;
        case 2:
            printf("Две\n");
            break;
        case 3:
            printf("Три\n");
            break;
        case 4:
            printf("Четири\n");
            break;
        case 5:
            printf("Пет\n");
            break;
        case 6:
            printf("Шест\n");
            break;
        case 7:
            printf("Седем\n");
            break;
        case 8:
            printf("Осем\n");
            break;
        case 9:
            printf("Девет\n");
            break;
        default:
            printf("Невалидна цифра\n");
    }
    return 0;
}

// Задача 5
int main() 
{
    int day;
    scanf("%d", &day);
    switch (day) 
    {
        case 1:
            printf("Понеделник\n");
            break;
        case 2: 
            printf("Вторник\n");
            break;
        case 3: 
            printf("Сряда\n"); 
            break;
        case 4: 
            printf("Четвъртък\n"); 
            break;
        case 5: 
            printf("Петък\n"); 
            break;
        case 6: 
            printf("Събота\n"); 
            break;
        case 7: 
            printf("Неделя\n"); 
            break;
        default: 
            printf("Невалиден ден\n");
    }
    return 0;
}

// Упражнение 1
int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// Упражнение 2
int main() 
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i < b; i++) 
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

// Упражнение 3
int main() 
{
    int a, b, sum = 0, product = 1;
    scanf("%d %d", &a, &b);
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i < b; i++) 
    {
        if (i % 2 == 0) sum += i;
        else product *= i;
    }
    printf("Сума на четните: %d, Произведение на нечетните: %d\n", sum, product);
    return 0;
}

// Упражнение 4
int main() 
{
    int N, K, count = 0, num;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &num);
        if (num > K && num % 3 == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}

// Упражнение 5
int main() 
{
    int num, sum = 0;
    while (1) 
    {
        scanf("%d", &num);
        if (num == 0) break;
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}

// Упражнение 6
int main() 
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    for (double x = a; x <= b; x += 0.01) 
    {
        printf("f(%.2lf) = %.2lf\n", x, x * x - 4);
    }
    return 0;
}
