#include <stdio.h>
#include <stdlib.h>

void printMatrix(int** matrix, int rows, int cols) {
    printf("\nThe matrix (not of leadership): \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int getRowSum(int** matrix, int cols, int row) {
    int sum = 0;
    for(int i = 0; i < cols; i++) {
        sum += matrix[row][i];
    }
    return sum;
}
int getColSum(int** matrix, int rows, int col) {
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        sum += matrix[i][col];
    }
    return sum;
}
int isMagic(int** matrix, int rows, int cols) {
    //check if all rows have equal sums
    int rowSum0 = getRowSum(matrix,cols,0);
    int rowSumI = 0;
    for(int i = 0; i < rows; i++) {
        rowSumI = getRowSum(matrix,cols,i);
        if(rowSum0 != rowSumI) {
            return 0;
        }
    }

    //check if all columns have equal sums
    int colSum0 = getColSum(matrix,rows,0);
    int colSumI = 0;
    for(int j = 0; j < rows; j++) {
        colSumI = getColSum(matrix,rows,j);
        if(colSum0 != colSumI) {
            return 0;
        }
    }

    //if colSum != rowSum, it's also not magic
    if(colSum0 != rowSum0) {
        return 0;
    }

    return 1;
}

int main()
{
    //Sem. 9 - dynamic arrays, multidimensional
    //Set row count
    int rows = 0;
    printf("Enter row count of the matrix: ");
    scanf("%d",&rows);

    //Set column count
    int cols = 0;
    printf("Enter column count of the matrix: ");
    scanf("%d",&cols);

    //Set matrix
    int **matrix = (int**)malloc(rows * sizeof(int));
    for(int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    //Fill the matrix
    int num = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter value for matrix position %d;%d: ",i,j);
            scanf("%d",&num);
            matrix[i][j] = num;
        }
    }

    //Print the matrix
    printMatrix(matrix,rows,cols);

    //Check if magic
    (isMagic(matrix,rows,cols) == 1)? printf("The matrix is magic \n") : printf("The matrix is nothing special \n");

    //Free heap memory
    for(int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
