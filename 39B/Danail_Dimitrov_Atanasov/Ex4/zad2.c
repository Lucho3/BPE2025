#include <stdio.h>
int Switch(int a, int b);
int main(){
    int a;
    int b;
    printf("Enter two numbers to be switched: ");
    scanf("%d %d", &a, &b);
    a,b = Switch(a,b);
    printf("The numbers now are a: %d and b: %d", a,b);
}

int Switch(int a, int b){
    a = a+b;
    b = a-b;
    b = a-b;
    return a,b;

}

