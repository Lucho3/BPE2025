#include <stdio.h>

//зад1
int main() 
{
    int N;
    printf("Въведете размер на масива N: ");
    scanf("%d", &N);
    int a[N][N];
    printf("Въведете елементите на масива:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Главен диагонал: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", a[i][i]);
    }
    printf("\n");

    printf("Второстепенен диагонал: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", a[i][N-1-i]);
    }
    printf("\n");

    printf("Над главния диагонал: ");
    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    printf("Под главния диагонал: ");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    return 0;
}

//зад2

int main() 
{
    int N;
    printf("Въведете размер на квадрата N: ");
    scanf("%d", &N);
    int a[N][N];
    int sumRow[N], sumCol[N];
    int sumMainDiag = 0, sumSecondDiag = 0;
    printf("Въведете елементите на масива:\n");
    for (int i = 0; i < N; i++) 
    {
        sumRow[i] = 0;
        sumCol[i] = 0;
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &a[i][j]);
            sumRow[i] += a[i][j];
            sumCol[j] += a[i][j];
            if (i == j) sumMainDiag += a[i][j];
            if (j == N-1-i) sumSecondDiag += a[i][j];
        }
    }

    int magicSum = sumRow[0];
    int isMagic = (sumMainDiag == magicSum) && (sumSecondDiag == magicSum);
    for (int i = 0; i < N && isMagic; i++) 
    {
        if (sumRow[i] != magicSum || sumCol[i] != magicSum) 
        {
            isMagic = 0;
        }
    }

    if (isMagic) 
    {
        printf("Квадратът е магически!\n");
    }
     else 
    {
        printf("Квадратът не е магически.\n");
    }

    return 0;
}
