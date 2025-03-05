#include <stdio.h>
#include <math.h>
int num_swap(int x,int y){
    int swap;
    swap=x;
    x=y;
    y=swap;
    return x,y;
}
/* 
int sqrt(int a){
    int s=a*a;
    return s;
}

int rec(int a,int b){
    int s=a*b;
    return s;
}

int tri(int a,int b){
    int s=a*b/2;
    return s;
}

int cir(int a){
    int s=3.14*a*a;
    return s;
}

int  check_if_odd(int x){
    if(x%2==0){
        return 0;
    }
    else {return 1;}
}
*/    
void decimal_to_binary(int x){
    if(!x) return;
    decimal_to_binary(x/2);
    printf("%d",x%2);
}

int main(){
/*
    int n;
    scanf("%d",n);
    int a;
    int b;

    switch (n)
    {
    case 1:
        scanf("%d",a);
        sqrt(a);
        break;
    case 2:
        scanf("%d",a);
        scanf("%d",b);
        rec(a,b);
        break;
    case 3:
        scanf("%d",a);
        scanf("%d",b);
        tri(a,b);
        break;
    case 4:
        scanf("%d",a);
        cir(a);
        break;
    default:
        break;
    }
    */
   decimal_to_binary(20);
}
