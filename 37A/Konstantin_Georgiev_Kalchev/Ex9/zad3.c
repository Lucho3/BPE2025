#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int sum = 0;
    float avg;
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
        sum += numbers[i];
    }

    avg = sum / 7;
    printf("Avg: %.2f", avg);
    free(numbers);
}
