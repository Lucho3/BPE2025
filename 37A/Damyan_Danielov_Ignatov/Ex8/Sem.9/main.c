#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int size) {
    printf("The array: ");
    for(int i = 0; i < size; i++) {
        if(i != size - 1) {
            printf("%d, ",arr[i]);
        }
        else {
            printf("%d",arr[i]);
        }

    }
    printf("\n");
}

int sumOfDynArrMembers(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int getBiggest(int* arr, int size) {
    int biggest = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

double getAverage(int* arr, int size) {
    double avg = 0;
    for(int i = 0; i < size; i++) {
        avg += arr[i];
    }
    return (double)avg / size;
}

int main()
{
    //SEM 9 - DYNAMIC ARRAYS, 1 dimensional
    int length = 0;
    printf("Enter length of the array: ");
    scanf("%d",&length);
    int *dArr = (int*)malloc(length * sizeof(int));
    if(dArr == NULL) {
        return 0;
    }
    int num = 0;
    for(int i = 0; i < length; i++) {
        printf("Enter member %d: ", i+1);
        scanf("%d",&num);
        dArr[i] = num;
    }
    printf("\n");
    printArray(dArr,length);
    printf("\n");

    printf("Sum of all members: %d\n\n",sumOfDynArrMembers(dArr, length));

    printf("The biggest member of the array is %d\n\n",getBiggest(dArr,length));

    printf("The average value of the array is %f\n\n",getAverage(dArr,length));
    free(dArr);
    return 0;
}
