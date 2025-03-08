#include <stdio.h>
#include <stdlib.h>

void perform_operations(int* p1, int* p2) {
    printf("Adres x: %p, Stoinost: %d\n", (void*)p1, *p1);
    printf("Adres y: %p, Stoinost: %d\n", (void*)p2, *p2);
    printf("Subirane: %d \n", *p1 + *p2);
}

int main() {
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    perform_operations(&x, &y);

    return 0;
}
