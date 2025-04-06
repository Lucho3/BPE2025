#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 3;
    int *square;
    int sum, tempSum;
    int isMagic = 1;

    square = (int *)malloc(N * N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &square[i * N + j]);
        }
    }

    sum = 0;
    for (int j = 0; j < N; j++)
    {
        sum += square[0 * N + j];
    }

    for (int i = 1; i < N; i++)
    {
        tempSum = 0;
        for (int j = 0; j < N; j++)
        {
            tempSum += square[i * N + j];
        }
        if (tempSum != sum)
        {
            isMagic = 0;
            break;
        }
    }

    for (int j = 0; j < N; j++)
    {
        tempSum = 0;
        for (int i = 0; i < N; i++)
        {
            tempSum += square[i * N + j];
        }
        if (tempSum != sum)
        {
            isMagic = 0;
            break;
        }
    }

    tempSum = 0;
    for (int i = 0; i < N; i++)
    {
        tempSum += square[i * N + i];
    }
    if (tempSum != sum)
    {
        isMagic = 0;
    }

    tempSum = 0;
    for (int i = 0; i < N; i++)
    {
        tempSum += square[i * N + (N - 1 - i)];
    }
    if (tempSum != sum)
    {
        isMagic = 0;
    }

    if (isMagic)
    {
        printf("Square is magic\n");
    }
    else
    {
        printf("Square is not magic.\n");
    }

    free(square);

    return 0;
}
