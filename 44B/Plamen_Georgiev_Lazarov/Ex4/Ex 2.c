/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap_nums(int *a, int *b) {
    int temp_int = *a;
    *a = *b;
    *b = temp_int;
}
int main() {
    int num1, num2;
  
    scanf("%d", &num1);
    scanf("%d", &num2);
    swap_nums(&num1, &num2);
    printf("%d %d", num1, num2);

    return 0;
}

