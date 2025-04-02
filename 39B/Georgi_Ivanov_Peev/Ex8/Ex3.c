#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 7;
    int *arr = (int *)malloc(n * sizeof(int));
    int sum = 0;
    double avg;

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
            sum += arr[i];
        }
    }

    avg = (double)sum / n;
    printf("Средната стойност: %.3lf\n", avg);
    free(arr); 
    return 0;
}
