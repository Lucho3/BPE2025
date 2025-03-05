#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int s = 0;
    for(int i=a + 1;i<b;i++) {
        s += i;
    }
    printf("%d", s);
    return 0;
}