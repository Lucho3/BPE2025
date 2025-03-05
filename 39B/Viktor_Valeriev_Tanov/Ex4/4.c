#include <stdio.h>

void makeItBinary(n) {
    if(!n) {return;}
    makeItBinary(n/2);
    printf("%d", n%2);
}

int main() {
    makeItBinary(9);

    return 0;
}
