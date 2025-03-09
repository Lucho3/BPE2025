#include <stdio.h>
#include <stdlib.h>

void returnBinary(int n){
    int firstArray[100];
    int currentNum = n;
    int count = 0;

    while (1){
        if (currentNum == 1){
            firstArray[count] = 1;
            break;
        }
        else if (currentNum == 0){
            firstArray[count] = 0;
            break;
        }
        else if (currentNum % 2 == 0){
            firstArray[count] = 0;
            currentNum /= 2;
        }
        else{
            firstArray[count] = 1;
            currentNum /= 2;
        }
        count++;
    }

    for (int i = count; i >= 0; i--){
        printf("%d", firstArray[i]);
    }
}
int main(){
    int num = 0;
    scanf("%d", &num);
    returnBinary(num);

    return 0;
}