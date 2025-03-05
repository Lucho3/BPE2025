// exercise - 4; problem 3;
#include <stdio.h>

char *isEven(int* a) {
    int getValue = *a;
    if(getValue%2 == 0) {
        return "even";
    }else{
        return "odd";
    }
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", isEven(&a));
    return 0;
}