#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Task 1 - pointer demo
    int n = 10;
    int* p1 = NULL;
    printf("A pointer p1 has been created \n");
    p1 = &n;
    printf("The pointer p1 has been linked to an int's address \n");
    printf("The address of the int, stored in the pointer: %d \n",p1);
    printf("The value of the int via dereferencing: %d \n",*p1);

    return 0;
}
