#include <stdio.h>
int main()
{
    int n,m, sum =0;
    printf("Number of elemts of the row: ");
    scanf("%d",&n);
    printf("Number of elements of the column: ");
    scanf("%d", &m);
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (int j=0; j<m; j++){
        sum+=a[0][j];
    }
    for (int i=1; i<n; i++){
        int sum_r=0;
        for(int j=0; j<m; j++){
            sum_r+=a[i][j];
        }
        if (sum!=sum_r){
            printf("The square is not magic.");
            return 0;
        }
    }
    for(int j=0; j<m; j++){
        int sum_c=0;
        for (int i=0; i<n; i++){
            sum_c+=a[i][j];
        }
        if (sum_c!=sum){
            printf("The square is not magic.");
            return 0;
        }
    }
    printf("Magic");
    return 0;
}