#include <stdio.h>
#include <stdlib.h>

int chetno(int i) {
    return i % 2 == 0;
}

int main() {
    int i;
    scanf("%d", &i);

    if (chetno(i)) {
        printf("�����\n");
    } else {
        printf("�������\n");
    }
    return 0;
}
