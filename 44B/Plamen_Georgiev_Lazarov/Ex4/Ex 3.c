/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void even_or_odd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    int num = 0;
    
    scanf("%d", &num);
    
    even_or_odd(num);

    return 0;
}

