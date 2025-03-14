#include <stdio.h>

int main()
{
    int arr[7];
    double avg_sum = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
        if (arr[i] >= -5000 && arr[i] <= 5000)
        {
            avg_sum += arr[i];
        }
    }
    int arr_length = sizeof(arr) / sizeof(int);
    avg_sum /= arr_length;

    printf("Average sum: ");
    printf("%lf\n", avg_sum);
    int index = 0;
    double min_substraction = avg_sum - (abs(arr[0]));
    for (int i = 1; i < 7; i++)
    {
        if (abs(avg_sum - (abs(arr[i]))) < min_substraction)
        {
            min_substraction = avg_sum - (abs(arr[i]));
            index = i + 1;
        }
    }
    printf("Nearest value: ");
    printf("%d", index);
    printf("address");
    return 0;
}