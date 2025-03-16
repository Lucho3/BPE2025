#include <stdio.h>
#include <stdlib.h>

//зад1
int main()
{
    int numbers[7];
    int sum = 0;
    for(int i=0; i<7; i++)
    {
        scanf("%d", &numbers[i]);
    if(numbers[i] < -5000 || numbers[i] > 5000)
    {
        printf("Грешка!");
        i--;
        continue;
    }
    sum += numbers[i];
    }
    printf("Sum: %d", sum);
}

//зад2
int main()
{
    int numbers[7];
    int max;
    for(int i=0; i<7; i++)
    {
        scanf("%d", &numbers[i]);
    if(numbers[i] < -5000 || numbers[i] > 5000)
    {
        printf("Грешка!");
        i--;
        continue;
    }
    }

    max = numbers[0];
    for(int i=1; i<7; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    printf("Max number: %d", max);
}

//зад3
int main()
{
    int numbers[7];
    int sum=0;
    float avg;
    for(int i=0; i<7; i++)
    {
        scanf("%d", &numbers[i]);
    if(numbers[i] < -5000 || numbers[i] > 5000)
    {
        printf("Грешка!");
        i--;
        continue;
    }
    sum += numbers[i];
    }

    avg=sum/7;
    printf("Avg: %.2f", avg);
}

//зад4

int main()
{
    int numbers[7];
    double avg = 0;
    for(int i=0; i<7; i++)
    {
        printf("Въведи число: ");
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
