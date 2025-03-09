#include <stdio.h>
#include <stdlib.h>


void NumberTransform(int a)
{
    int arr[32];
    int i = 0;
    while (a > 0) {
        arr[i] = a % 2;
        a /= 2;
        i++;
    }

     for (int k = i - 1; k >= 0; k--)
    {
        printf("%d", arr[k]);
    }
}
int main()
{
    int a;
    scanf("%d", &a);

    NumberTransform(a);
    return 0;
}
