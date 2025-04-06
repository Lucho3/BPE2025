#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int arrSize = 0;
    int n = 0;
    float r = 0;
    float average;

    printf("Razmer:");
    scanf("%d", &arrSize);
    arr = (int *)malloc(arrSize * sizeof(int));
    if (arr == NULL) {
        printf("NEMA PAMET \n");
        return 1;
    }

    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &n);

        while (n < -5000 || n > 5000) {
            printf("NE\n");
            scanf("%d", &n);
        }

        arr[i] = n;
    }

    for (int i = 0; i < arrSize; i++) {
        r += arr[i];
    }

    average = r / arrSize;
    printf("Avarage: %f\n", average);
    free(arr);
    return 0;
}
