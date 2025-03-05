#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int even = 0, odd = 0;
    for(int i=a + 1;i<b;i++) {
        if(i%2 == 0) {
            even += i;
        }else{
            odd += i;
        }
    }
    printf("Even: %d; Odd: %d", even, odd);
    return 0;
}