#include <stdio.h>
void Checker(int n);
int main(){
    int n;
    printf("Enter a value to check: ");
    scanf("%d", &n);
    Checker(n);
}

void Checker(int n){
    if(n % 2 == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
}