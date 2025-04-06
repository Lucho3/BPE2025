#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int r = 0;
    int input;

    arr = (int*)malloc(7 * sizeof(int));
    if (arr == NULL) {
        printf("NEMA PAMET\n");
        return 1;
    }

    for (int i = 0; i < 7; i++) {
        scanf("%d", &input);

        while (input < -5000 || input > 5000) {
            printf("NE\n");
            scanf("%d", &input);
        }
        arr[i] = input;
    }

    for (int i = 0; i < 7; i++) {
        r = r + arr[i];
    }

    printf("%d\n", r);

    free(arr);
    return 0;
}
