#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[7];
    double avg = 0;
    for(int i=0; i<7; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
        if(numbers[i] >= -5000 && numbers[i] <= 5000)
        {
            avg += numbers[i];
        }
    }

    int numbers_length = sizeof(numbers)/sizeof(int);
    avg /= numbers_length;
    printf("Average sum: %lf\n", avg);
    int index = 0;
    double min_substraction = avg - (abs(numbers[0]));
    for (int i=1; i<7; i++)
    {
        if(abs(avg - (abs(numbers[i]))) < min_substraction)
        {
            min_substraction = avg - (abs(numbers[i]));
            index = i + 1;
        }
    }
    printf("Nearest value: %d", index);
    printf("Address");
    return 0;
}