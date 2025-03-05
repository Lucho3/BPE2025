#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if(a > b && a > c) {
        printf("%d is the biggest", a);
    }else if(b > a && b > c) {
        printf("%d is the biggest", b);
    }else if(c > a && c > b) {
        printf("%d is the biggest", c);
    }
    return 0;
}