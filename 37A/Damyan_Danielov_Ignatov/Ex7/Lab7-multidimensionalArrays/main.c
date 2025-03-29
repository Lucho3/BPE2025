#include <stdio.h>
#include <stdlib.h>

const int N = 4;


void print(int matrix[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}


void printPrimaryDiagonal(int matrix[N][N]) {
    for(int i = 0; i < N; i++) {
        printf("%d ",matrix[i][i]);
    }
    printf("\n");
}


void printSecondaryDiagonal(int matrix[N][N]) {
    for(int i = N - 1; i >= 0; i-- ) {

        printf("%d ",matrix[N - i - 1][i]);
    }
    printf("\n");
}


void printAbovePrimary(int matrix[N][N]) {
    for(int i = 1; i < N; i++) {
        printf("%d ",matrix[i - 1][i]);
    }
    printf("\n");
}


void printBellowPrimary(int matrix[N][N]) {
    for(int i = 0; i < N - 1; i++) {
        printf("%d ",matrix[i+1][i]);
    }
    printf("\n");
}


int sumRow(int matrix[N][N], int row) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[row][i];
    }
    return sum;
}
int sumCol(int matrix[N][N], int col) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[i][col];
    }
    return sum;
}
int isMagic(int matrix[N][N]) {
    int row0Value = sumRow(matrix, 0);
    int rowValue = 0;
    for(int i = 1; i < N; i++) {
        rowValue = sumRow(matrix,i);
        if(row0Value != rowValue) {
            return 0;
        }
    }
    int col0Value = sumCol(matrix,0);
    int colValue = 0;
    for(int i = 1; i < N; i++) {
        colValue = sumCol(matrix,i);
        if(col0Value != colValue) {
            return 0;
        }
    }
    if(row0Value != col0Value) {
        return 0;
    }
    return 1;
}

int main()
{
    int matrix[N][N];
    printf("Enter the values of a %d by %d sized 2D array: \n",N,N);
    int num = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matrix[i][j] = 0;
            scanf("%d",&num);
            matrix[i][j] = num;
        }
    }
    printf("\n");

    printf("The matrix itself: \n");
    print(matrix);
    printf("\nPrimary diagonal: \n");
    printPrimaryDiagonal(matrix);
    printf("\nSecondary diagonal: \n");
    printSecondaryDiagonal(matrix);
    printf("\nNums above primary diagonal: \n");
    printAbovePrimary(matrix);
    printf("\nNums bellow primary diagonal: \n");
    printBellowPrimary(matrix);
    (isMagic(matrix) == 1)? printf("\nThe matrix is magic \n"):printf("\nThe matrix is nothing special \n");
    return 0;
}
