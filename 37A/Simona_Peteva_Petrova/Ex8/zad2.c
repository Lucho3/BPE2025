#include <stdio.h>

int main()
{
    const int N = 3;
    int square[N][N];
    int sum, tempSum;
    int isMagic = 1;

    printf("Въведете елементите на 3x3 квадрат:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &square[i][j]);
        }
    }

    sum = 0;
    for (int j = 0; j < N; j++)
    {
        sum += square[0][j];
    }

    for (int i = 1; i < N; i++)
    {
        tempSum = 0;
        for (int j = 0; j < N; j++)
        {
            tempSum += square[i][j];
        }
        if (tempSum != sum)
        {
            isMagic = 0;
        }
    }

    for (int j = 0; j < N; j++)
    {
        tempSum = 0;
        for (int i = 0; i < N; i++)
        {
            tempSum += square[i][j];
        }
        if (tempSum != sum)
        {
            isMagic = 0;
        }
    }

    tempSum = 0;
    for (int i = 0; i < N; i++)
    {
        tempSum += square[i][i];
    }
    if (tempSum != sum)
    {
        isMagic = 0;
    }

    tempSum = 0;
    for (int i = 0; i < N; i++)
    {
        tempSum += square[i][N - 1 - i];
    }
    if (tempSum != sum)
    {
        isMagic = 0;
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