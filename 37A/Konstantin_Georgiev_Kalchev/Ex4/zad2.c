#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int new = *a;
    *a = *b;
    *b = new;
}

int main()
{
    int x, y;
    printf("Въведи две числа: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}