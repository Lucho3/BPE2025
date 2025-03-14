#include <stdio.h>

int main()
{
    printf("Въведи 7 числа в интервал [-5000, 5000]: ");
    int arr[7];
    scanf("%d", &arr[0]);
    int max = arr[0];
    for (int i = 1; i < 7; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < -5000 || arr[i] > 5000)
        {
            printf("Error!\n");
            i--;
            continue;
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}