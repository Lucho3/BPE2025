#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i;
    int a;
    int b;
    float s = 2;
    float r;
    scanf("%d", &i);
    switch(i){
        case 1:
            printf("kvadrat\n");
            scanf("%d", &a);
            s = a*a;
            printf("%d",s);
            break;
        case 2:
            printf("pravoagalnik\n");
            scanf("%d\n %d", &a, &b);
            s = a*b;
            printf("%d",s);
            break;
        case 3:
            printf("pravoagalen triagalnik\n");
            scanf("%d\n %d", &a, &b);
            s = (a*b)/2;
            printf("%d",s);
            break;
        case 4:
            printf("krag\n");
            scanf(" %f", &r);
            s = r*r*3.14;
            printf("%f",s);
            break;
    }
    */
    //Zad2:
    int a, b;
    scanf("%d", &a);
    scanf("%d",&b);
    printf("%d %d \n", a, b);
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("new a = %d, new b = %d", a, b);

}
