#include <stdio.h>

int main() 
{
    

    int matrix[4][4] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Главен диагонал: ");
    for (int i = 0; i < 4; i++) 
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    printf("Второстепенен диагонал: ");
    for (int i = 0; i < 4; i++) 
    {
        printf("%d ", matrix[i][4 - 1 - i]);
    }
    printf("\n");

    printf("Елементи над главния диагонал: ");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = i + 1; j < 4; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    printf("Елементи под главния диагонал: ");
    for (int i = 1; i < 4; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}
