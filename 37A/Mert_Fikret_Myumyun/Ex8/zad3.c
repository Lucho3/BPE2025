#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr = NULL;
    arr = (int *)realloc(arr, 7 * sizeof(int));
    if (arr == NULL) 
    {
        printf("Error404\n");
        return 1;
    }

    for (int i = 0; i < 7; i++) 
    {
        int temp;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &temp);
        if (temp > -5000 && temp < 5000) 
        {
            arr[i] = temp;
        } else 
        {
            printf("Interval : -5000 to 5000\n");
            free(arr);
            return 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < 7; i++) 
    {
        sum += arr[i];
    }
    double avg = sum / 7.0;
    printf("\nAverage: %.2lf\n", avg);

    free(arr);
    return 0;
}
