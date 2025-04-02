#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 7;
    int *arr = (int *)malloc(n * sizeof(int));
    int max = -5001;

    if (arr == NULL) {
        printf("Грешка при заделяне на памет!\n");
        return 1;
    }

    printf("Въведете 7 цели числа от интервала [-5000..5000]:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < -5000 || arr[i] > 5000) {
            printf("Числото трябва да е в интервала [-5000..5000]!\n");
            i--; 
        } else {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }

    printf("Най-голямото число: %d\n", max);
    free(arr); 
    return 0;
}
