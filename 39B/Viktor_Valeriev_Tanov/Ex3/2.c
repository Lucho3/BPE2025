#include <stdio.h>

int main() {
    int n;
    printf("Enter an int number: ");
    scanf("%d", &n);
    if(n%8 > 4) {
        printf("The remainder of divison is greater than 4");
    } 
    return 0;
}