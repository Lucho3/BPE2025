#include <stdio.h>
#include <stdlib.h>

void switchPlaces(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int num1,num2 = 0;
    scanf("%d %d", &num1, &num2);
    switchPlaces(&num1, &num2);
    printf("%d %d", num1, num2);

    return 0;
}