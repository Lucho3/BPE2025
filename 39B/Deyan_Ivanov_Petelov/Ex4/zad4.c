#include <stdio.h>

void func (int x) {
    
    if(!x) return;
    func(x / 2);
    printf("%d", x % 2);
}

int main() {
    int num;
    printf("Enter binary number: ");
    scanf("%d", &num);

    func(num);
    printf("\n");
    return 0;
}