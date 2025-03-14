#include <stdio.h>

int main()
{
    printf("Въведи 7 числа в интервал [-5000, 5000]: ");
    int arr[7];
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < -5000 || arr[i] > 5000)
        {
            printf("Error!\n");
            i--;
            continue;
        }
        sum += arr[i];
    }
    printf("%d", sum);
}