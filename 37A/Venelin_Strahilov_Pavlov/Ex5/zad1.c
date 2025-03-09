#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 43;
    int *pointer = &number;
    printf("Adress: %p\n", (void*)pointer);
    printf("Stoinost chrez pointer: %d\n", *pointer);
    return 0;
}