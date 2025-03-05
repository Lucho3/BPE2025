#include <stdio.h>

int main(){
    int a = 3;
    int b = 7;

    int *pa;
    int *pb;
    
    pa = &a;
    pb = &b;

    printf("The sum of the numbers is %d\n", *pa + *pb);
    printf("The difference is %d\n", *pa - *pb);
    printf("Their multiplication is %d\n", *pa * *pb);
    printf("Their division is %lf\n", (double)*pa / (double)*pb);
}