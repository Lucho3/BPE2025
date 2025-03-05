#include <stdio.h>

void decToBinary(int n) {
    int binaryNum[30];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent of %d is ", decimal);
    decToBinary(decimal);
    return 0;
}