#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int n = 0;
    int r = 0;
    for(int i = 0; i <7; i++){
        scanf("%d", &n);

        while(-5000 > n || n > 5000){
                printf("NE");
                scanf("%d", &n);

    }
    arr[i] = n;
    }
    for(int i = 0; i <7; i++){
        r = r + arr[i];

    }

    printf("%d", r);
}
