#include <stdio.h>
#include <stdlib.h>

void rezultat(int num) {
    int binary = 0;
    int place = 1;

    while (num > 0) {
        int remainder = num % 2;
        binary += remainder * place;
        num = num / 2;
        place *= 10;
    }

    if (binary < 10) {
        printf("000%d\n", binary);
    } else if (binary < 100) {
        printf("00%d\n", binary);
    } else if (binary < 1000) {
        printf("0%d\n", binary);
    } else {
        printf("%d\n", binary);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    rezultat(num);
    return 0;
}
