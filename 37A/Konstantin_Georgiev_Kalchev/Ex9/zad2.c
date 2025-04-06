#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int max;
    numbers = (int *)malloc(7 * sizeof(int));
    if (numbers == NULL)
    {
        return 1;
    }
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] < -5000 || numbers[i] > 5000)
        {
            printf("Error!");
            i--;
            continue;
        }
    }

    max = numbers[0];
    for (int i = 1; i < 7; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    printf("Max number: %d", max);
    free(numbers);
}