#include <stdio.h>

int main()
{

    int num = 10;
    int *ip;
    ip = &num;
    printf("Aдрес: %p\n", &num);
    printf("Стойност: %d", *ip);
}