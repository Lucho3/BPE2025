#include <stdio.h>
#include <stdlib.h>

void checkNum(int num)
{
    if (num % 2 == 0)
    {
        printf("Числото е четно");
    }
    else
    {
        printf("Числото е нечетно");
    }
}
int main()
{
    int num;
    printf("Въведи число: ");
    scanf("%d", &num);
    checkNum(num);

    return 0;
}