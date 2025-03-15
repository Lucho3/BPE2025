#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    int minDiffIndex = 0;
    double minDiff = fabs(arr[0] - avarage);

    for (int i = 1; i < 7; i++) {
        double diff = fabs(arr[i] - avarage);
        if (diff < minDiff) {
            minDiff = diff;
            minDiffIndex = i;
        }
    }

    printf("%f", avarage);
}
