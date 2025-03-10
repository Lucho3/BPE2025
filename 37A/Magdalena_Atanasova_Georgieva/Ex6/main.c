#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*
    int arr[10];
    for (int i=0;i<10;++i){
        arr[i]=i;
    }
    for (int i=0;i<10;++i){
        printf("%d\n", (arr+i));
    }
    printf("%d\n",*(arr+3));
    */
/*Zad.1*/
/*
    int arr[7];
    int sum=0;
    printf("Въведете числа между -5000 и 5000:\n");
    for (int i=0;i<7;i++){
        printf("Въведете число %d:",i+1);
        scanf("%d",&arr[i]);
        while(arr[i]<-5000 || arr[i]>5000){
                printf("Числото не е в интервала!\n");
                scanf("%d",&arr[i]);
        }
        sum +=arr[i];
    }
    printf("Общата сума е: %d",sum);
*/
/*Zad.2*/
/*
    int arr[7];
    int max=INT_MIN;
    printf("Въведете числа между -5000 и 5000:\n");
    for (int i=0;i<7;i++){
        printf("Въведете число %d:",i+1);
        scanf("%d",&arr[i]);
        while(arr[i]<-5000 || arr[i]>5000){
                printf("Числото не е в интервала!\n");
                scanf("%d",&arr[i]);
        }
        if (arr[i]>max){
            max =arr[i];
        }
    }
printf("Най-голямото число е: %d\n",max);
*/
/*Zad.3*/
/*
    int arr[7];
    int sum = 0;
    float average;
    printf("Въведете числа между -5000 и 5000:\n");
    for (int i = 0; i < 7; i++) {
        printf("Въведете число %d: ", i + 1);
        scanf("%d", &arr[i]);
        while(arr[i]<-5000 || arr[i]>5000){
                printf("Числото не е в интервала!\n");
                scanf("%d",&arr[i]);
        }
        sum += arr[i];
    }
    average = (float)sum / 7;
    printf("Средната стойност на въведените числа е: %f\n", average);
    */
/*Zad.4*/
    int arr[7];
    int sum = 0;
    float average;
    int closestNumber;
    int closestIndex = 0;
    printf("Въведете числа между -5000 и 5000:\n");
    for (int i = 0; i < 7; i++) {
        printf("Въведете число %d: ", i + 1);
        scanf("%d", &arr[i]);
        while(arr[i]<-5000 || arr[i]>5000){
                printf("Числото не е в интервала!\n");
                scanf("%d",&arr[i]);
        }
        sum += arr[i];
    average = (float)sum / 7;
    closestNumber = arr[0];
    float minDifference = fabs(arr[0] - average);

    for (int i = 1; i < 7; i++) {
        float difference = fabs(arr[i] - average);
        if (difference < minDifference) {
            minDifference = difference;
            closestNumber = arr[i];
            closestIndex = i;
        }
    }
    }
printf("Средната стойност на въведените числа е: %f\n", average);
printf("Числото, което е най-близко до средната стойност, е: %d\n", closestNumber);
printf("То се намира на позиция %d в масива.\n", closestIndex + 1);
    return 0;
}
