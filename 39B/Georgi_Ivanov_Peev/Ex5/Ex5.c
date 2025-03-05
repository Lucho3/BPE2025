#include <stdio.h>
int main(){
    int a=5;
    int b=7;
    int *bp;
    int *ap;
    bp=&b;
    ap=&a;
    int sum=*bp + *ap;
    int raz=*bp-*ap;
    int umn=*bp**ap;
    double del=*bp%*ap;
    printf("%d\n",sum);
    printf("%d\n",raz);
    printf("%d\n",umn);
    printf("%f\n",del);
    printf("%x\n", ap);
    printf("%d",*ap); 

}