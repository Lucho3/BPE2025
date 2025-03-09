#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int number = 43;
    int *p = &number;
    printf("Adress: %p\n", (void*)p);
    printf("Stoinost chrez pointer: %d\n", *p);
    
    return 0;
}