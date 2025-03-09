#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;

    scanf("%d", ptr1);
    scanf("%d", ptr2);

    printf("Num1 + Num2 = %d \n", *ptr1 + *ptr2);
    printf("Num1 - Num2 = %d \n", *ptr1 - *ptr2);
    printf("Num1 * Num2 = %d \n", *ptr1 * *ptr2);

    if (*ptr2 != 0) {
        printf("Num1 / Num2 = %d \n", *ptr1 / *ptr2);
        printf("Num2 / Num1 = %d \n", *ptr2 / *ptr1);
    } else {
        printf("Ne moje da se deli na nula\n");
    }

    return 0;
}
