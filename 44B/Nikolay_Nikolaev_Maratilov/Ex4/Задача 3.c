#include <stdio.h>
#include <stdlib.h>


int isItEvenOrOdd(int num){
    if(num % 2 == 0){
        return 1;
    }else {
        return 0;
    }
 
}
int main(){
    int num;
    scanf("%d", &num);
    if(isItEvenOrOdd(num)){
        printf("%d is an even number.", num);
    } else {
        printf("%d is an odd number.", num);
    }

    return 0;
}