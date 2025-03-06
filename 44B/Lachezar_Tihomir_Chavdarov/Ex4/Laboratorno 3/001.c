#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 15;
    int *a;
    a = &i;
    printf("Address of i: %p\n", i);
    printf("Value of i: %d\n", *a);

    return 0;
}