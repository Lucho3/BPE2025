/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void func(int x)
{
    if(!x) return;
    func(x/2);
    printf("%d", x%2);
}

int main()
{
    int x = 0;
    
    scanf("%d", &x);
    
    func(x);

    return 0;
}
