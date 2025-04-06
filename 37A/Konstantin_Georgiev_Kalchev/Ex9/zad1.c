
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *array;
    int size = 7;
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
        return 1;
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] < -5000 || array[i] > 5000)
        {
            printf("Error!");
            i--;
            continue;
        }
        sum += array[i];
    }
    printf("Sum: %d", sum);
    free(array);
}