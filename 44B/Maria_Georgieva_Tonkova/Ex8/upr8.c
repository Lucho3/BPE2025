#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows=3, cols=3;
    int **arr=(int**)malloc(rows*sizeof(int*));
    for (int i=0; i<rows; i++){
        arr[i]=(int*)malloc(cols*sizeof(int));
    }
    for (int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Enter element [%d][%d]", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is: \n");
    for (int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the main diagonal are: ");
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i]==arr[j]){
                printf("%d  ", arr[i][j]);
            }
        }
    }
    printf("\nThe elements of the secondary diagonal are: ");
    for(int i =0; i<rows;i++){
        for (int j=0; j<cols;j++){
            if(i+j==cols-1){
                printf("%d  ", arr[i][j]);
            }
        }
    }
    printf("\nThe elements above the main diagonal are: ");
    for(int i =0; i<rows;i++){
        for (int j=0; j<cols;j++){
            if(i<j){
                printf("%d  ", arr[i][j]);
            }
        }
    }
    printf("\nThe elements under the main diagonal are: ");
    for(int i =0; i<rows;i++){
        for (int j=0; j<cols;j++){
            if(j<i){
                printf("%d  ", arr[i][j]);
            }
        }
    }
    for (int i=0; i<rows; i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}