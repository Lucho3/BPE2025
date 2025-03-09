#include <stdio.h>

int swap(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main() {
    int x, y;
    printf("Въведете две числа за размяна: ");
    scanf("%d %d", &x, &y);

    printf("Преди размяна: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("След размяна: x = %d, y = %d\n", x, y);

    return 0;
}
