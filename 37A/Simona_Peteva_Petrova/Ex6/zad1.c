#include <stdio.h>

int main()
{
    int numbers[7];
    int sum = 0;
    for(int i=0; i<7; i++)
    {
        scanf("%d", &numbers[i]);
    if(numbers[i] < -5000 || numbers[i] > 5000)
    {
        printf("Error!");
        i--;
        continue;
    }
    sum += numbers[i];
    }
    printf("Sum: %d", sum);
}