#include <stdio.h>

int main(){

    int n = 5;
    int *pn;
    pn = &n;

    printf("The address of the pointer is: %p\n", pn);
    printf("The value of the pointer is: %d\n", *pn);
}