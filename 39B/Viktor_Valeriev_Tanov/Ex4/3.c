#include <stdio.h>

int isEven(a) {
    return a%2 == 0;
}

int main() {
    int a;
    scanf("%d", &a);
    printf("Is it even(0 - false, 1 - true): %d", isEven(a));
    return 0;
}
