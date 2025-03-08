#include <stdio.h>
#include <stdlib.h>

int chetno(int i) {
    return i % 2 == 0;
}

int main() {
    int i;
    scanf("%d", &i);

    if (chetno(i)) {
        printf("четно\n");
    } else {
        printf("нечетно\n");
    }
    return 0;
}
