#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d\n", &a);
    scanf("%d\n",&b);
    swap(&a, &b);
    printf("new a = %d, new b = %d\n", a, b);
    return 0;
}
