/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
      int num = 10;
    int *ptr = &num;
    printf("Adres of pointer %p\n", &ptr);
    printf("Stoinost chrez pointer: %d\n", *ptr);
   
}