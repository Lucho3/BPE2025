#include <stdio.h>

int check (int *a) {

    if (*a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int x;
    printf("Въведете число за проверка: ");
    scanf("%d", &x);

    if (check(&x) == 1) {
        printf("Числото %d е четно.", x);
    } else {
        printf("Числото %d е нечетно.", x);
    }

    return 0;
}