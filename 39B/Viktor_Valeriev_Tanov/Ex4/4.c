#include <stdio.h>

void recursiveBinary(int i) {
    if(!i) {return;}
    recursiveBinary(i/2);
    printf("%d", i%2);
}

void makeItBinary(int num) {
    int binary[32], i = 0;
    while(num > 0) {
        binary[i] = num % 2;
        i++;
        num /= 2;
    }
    for(int j=i - 1;j>=0;j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int n = 5364;
    recursiveBinary(n);
    printf("\n");
    makeItBinary(n);
    return 0;
}