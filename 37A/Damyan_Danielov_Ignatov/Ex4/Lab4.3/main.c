#include <stdio.h>
#include <stdlib.h>

int isEven(int number) {
    if(number % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int n = 1;
    int n2 = 2;
    printf("%d\n",isEven(n));
    printf("%d\n",isEven(n2));
    return 0;
}
