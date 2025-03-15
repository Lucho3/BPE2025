#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int n = 0;
    float r = 0;
    float avarage;
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
    avarage = r / (sizeof(arr) / sizeof(int));

    printf("%f", avarage);
}
