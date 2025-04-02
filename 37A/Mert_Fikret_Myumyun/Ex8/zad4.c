#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N;
    printf("Enter size: ");
    scanf("%d", &N);

    int **arr = realloc(NULL, N * sizeof(int *));
    if (arr == NULL) 
    {
        printf("Eror404\n");
        return 1;
    }

    for (int i = 0; i < N; i++) 
    {
        arr[i] = (int *)realloc(NULL, N * sizeof(int));
        if (arr[i] == NULL) 
        {
            printf("Nqkuv drug error\n");
            for (int j = 0; j < i; j++) free(arr[j]);
            free(arr);
            return 1;
        }
    }

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) 
    {
        sum += arr[0][i];
    }

    for (int i = 1; i < N; i++) 
    {
        int sumrows = 0;
        for (int j = 0; j < N; j++) 
        {
            sumrows += arr[i][j];
        }
        if (sumrows != sum) 
        {
            printf("Ne e magicheski\n");
            for (int i = 0; i < N; i++) free(arr[i]);
            free(arr);
            return 0;
        }
    }

    for (int j = 0; j < N; j++) 
    {
        int sumcols = 0;
        for (int i = 0; i < N; i++) 
        {
            sumcols += arr[i][j];
        }
        if (sumcols != sum) 
        {
            printf("Ne e magicheski\n");
            for (int i = 0; i < N; i++) free(arr[i]);
            free(arr);
            return 0;
        }
    }

    printf("Magicheski e\n");

    for (int i = 0; i < N; i++) 
    {
      free(arr[i]);
    }
    free(arr);
    return 0;
}
