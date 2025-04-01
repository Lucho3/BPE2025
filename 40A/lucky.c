#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    
    printf("Enter matrice size: ");
    scanf("%d", &size);

    int** rows = malloc(size * sizeof(int*));
    
    if (rows == NULL) {
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        int* column = malloc(size * sizeof(int));

        if (column == NULL) {
            return 1;
        }
        
        rows[i] = column;
    }
    
    printf("Enter matrice values:\n");
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &rows[i][j]);
        }
    }
    
    int firstRowSum = 0;
    
    for (int j = 0; j < size; j++) {
        firstRowSum += rows[0][j];
    }
    
    printf("\n");
    
    for (int i = 0; i < size; i++) {
        int rowSum = 0;
        int columnSum = 0;
        
        for (int j = 0; j < size; j++) {
            rowSum += rows[i][j];
            columnSum += rows[j][i];
        }
        
        if (rowSum != firstRowSum || columnSum != firstRowSum) {
            printf("The Matrice is NOT lucky!\n");
            
            return 1;
        }
    }
    
    for (int i = 0; i < size; i++) {
        free(rows[i]);
    }
    
    free(rows);
    
    printf("The Matrice is lucky!\n");
    
    return 0;
}
