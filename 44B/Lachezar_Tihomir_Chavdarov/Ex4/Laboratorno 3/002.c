#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int *b){
    return *a + *b;
}

int subtract(int *a, int *b){
    return *a - *b;
}

int multiply(int *a, int *b){
    return *a * *b;
}

int divide(int *a, int *b){
    if(*b == 0){
        printf("Error: Division by zero\n");
        return 0;
    }
    return *a / *b;
}
int main(){
    int a = 10;
    int b = 5;
    printf("%d\n", sum(&a, &b));
    printf("%d\n", subtract(&a, &b));
    printf("%d\n", multiply(&a, &b));
    printf("%d\n", divide(&a, &b));

    return 0;
}