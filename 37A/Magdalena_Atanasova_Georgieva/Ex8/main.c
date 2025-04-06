#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
/*Зад.1*/
/*
int main() {
    int *arr = (int*)malloc(SIZE * sizeof(int));

    if (arr == NULL) {
        printf("Няма памет!\n");
        return 1;
    }
    printf("Въведете %d цели числа в интервала [%d..%d]:\n", SIZE, MIN_VALUE, MAX_VALUE);
    for (int i = 0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i=0; i<SIZE; i++) {
        sum += arr[i];
    }
    printf("Общата сума на въведените числа е: %d\n", sum);
    free(arr);

    return 0;
}
*/
/*Зад.2*/
/*
int main() {
    int SIZE = 7;
    int *arr = (int*)malloc(SIZE * sizeof(int));

    if (arr == NULL) {
        printf("Грешка при заделяне на памет!\n");
        return 1;
    }
    printf("Въведете %d цели числа в интервала [-5000..5000]:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);

    }
    int max = INT_MIN;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Най-голямото въведено число е: %d\n", max);

    free(arr);
    return 0;
}
*/
/*Zad.3*/

int main() {
    int n = 7;
    int *arr;
    int sum = 0;
    double average;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Грешка при заделяне на памет!\n");
        return 1;
    }
    printf("Въведете %d цели числа в интервала [-5000..5000]:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Въведете число %d: ", i + 1);
        scanf("%d", &arr[i]);
        while (arr[i] < -5000 || arr[i] > 5000) {
            printf("Числото трябва да е между -5000 и 5000. Въведете отново: ");
            scanf("%d", &arr[i]);
        }
        sum += arr[i];
    }
    average = (double)sum / n;
    printf("Средната стойност на въведените числа е: %.2f\n", average);
    free(arr);

    return 0;
}

/*Zad.4*/
bool isMagicSquare(int **square, int n) {
    int magicSum = 0;
    int diag1 = 0, diag2 = 0;
    for (int j = 0; j < n; j++) {
        magicSum += square[0][j];
    }
    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != magicSum) {
            return false;
        }
    }
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += square[i][j];
        }
        if (colSum != magicSum) {
            return false;
        }
    }
    for (int i = 0; i < n; i++) {
        diag1 += square[i][i];
        diag2 += square[i][n - 1 - i];
    }
    if (diag1 != magicSum || diag2 != magicSum) {
        return false;
    }
    return true;
}
int main() {
    int n;
    printf("Въведете размера на квадрата (n x n): ");
    scanf("%d", &n);
    int **square = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        square[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Въведете елементите на квадрата (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &square[i][j]);
        }
    }
    if (isMagicSquare(square, n)) {
        printf("Квадратът Е магически!\n");
    } else {
        printf("Квадартът НЕ Е магически!\n");
    }
    for (int i = 0; i < n; i++) {
        free(square[i]);
    }
    free(square);
    return 0;
}
