#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        }
    }
    printf("glaven diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    printf("ftorostepene diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][2 - i]);
    }
    printf("\n");
    printf("nad glaven diagonal: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            if (j > i) {
                printf("%d ", arr[i][j]);
            }
    }
    printf("\n");
    printf("pod glaven diagonal: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            if (j < i) {
                    printf("%d ", arr[i][j]);
            }
        }
}
