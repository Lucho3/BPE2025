#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, sum = 0, diag1 = 0, diag2 = 0;
    printf("Въведете размер на квадрата: ");
    scanf("%d", &size);

    int **matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }

    printf("Въведете елементите на матрицата:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        sum += matrix[0][i]; 
        diag1 += matrix[i][i];
        diag2 += matrix[i][size - i - 1];
    }

    for (int i = 0; i < size; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            printf("Квадратът не е магически.\n");
            return 0;
        }
    }

    if (diag1 == sum && diag2 == sum) {
        printf("Квадратът е магически!\n");
    } else {
        printf("Квадратът не е магически.\n");
    }

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
