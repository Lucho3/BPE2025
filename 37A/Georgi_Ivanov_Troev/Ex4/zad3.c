#include <stdio.h>
#include <stdlib.h>

int EvenOrOdd(int a)
{
    if(a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int result = EvenOrOdd(a);
    printf("%d", result);

    return 0;
}
