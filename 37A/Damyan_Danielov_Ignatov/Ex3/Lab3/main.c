#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lab 2 - IF && LOOP operators

    //IF Zad 1
/*
    int a = 0;
    //scanf("%d", &a);
    if(a > 6) {
        printf("1.The entered value is valid.\n");
    }
*/

    //IF Zad 2
/*
    int a = 0;
    scanf("%d", &a);
    if(a % 8 > 4) {
        printf("2.The entered value is valid.\n");
    }
*/

    //IF Zad 3
/*
    int a=0,b=0,c=0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a > b && a > c) {
        printf("Largest is %d \n",a);
    }
    else if(b > a && b > c) {
        printf("Largest is %d \n",b);
    }
    else if(c > a && c > b) {
        printf("Largest is %d \n",c);
    }
    else {
        printf("All are equal");
    }
*/

    //IF Zad 4
/*
    int a = 0;
    scanf("%d", &a);
    switch(a) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            printf("Not a digit");
            break;
    }
*/

    //IF Zad 5
/*
    int day = 0;
    scanf("%d",&day);
    switch(day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day of week");
        break;
    }
*/

    //LOOP Zad 1
/*
    int a = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }
*/


    //LOOP Zad 2
/*
    int a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    int buffer = 0;
    if(b < a) {
        buffer = a;
        a = b;
        b = buffer;
    }
    int sum = 0;
    for(int i = a; i <=b; i++) {
        sum += i;
    }
    printf("Sum between %d and %d is %d",a,b,sum);
*/

    //LOOP Zad 3
/*
    int a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b < a) {
        int buffer = a;
        a = b;
        b = buffer;
    }
    int sum = 0, product = 1;
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
        else {
            product *= i;
        }
    }
    printf("Sum of even between %d and %d is %d \n",a,b,sum);
    printf("Product of odd between %d and %d is %d \n",a,b,product);
*/

    //LOOP Zad 4
/*
    int N = 0, K = 0;
    scanf("%d",&N);
    scanf("%d",&K);
    int num = 0, count = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &num);
        if(num > K && num % 3 == 0) {
            count++;
        }
    }
    printf("%d", count);
*/

    //LOOP Zad 5
/*
    int num = 0, sum = 0;
    scanf("%d",&num);
    sum += num;
    while(num != 0) {
        scanf("%d",&num);
        sum += num;
    }
    printf("%d", sum);
*/

    //LOOP Zad 6
/*
    float a = 0.0, b = 0.0;
    scanf("%f",&a);
    scanf("%f",&b);
    if(b < a) {
        int buffer = a;
        a = b;
        b = buffer;
    }
    for(float i = a; i <= b; i += 0.01) {
        printf("f(%f) => %f \n",i,i*i-4);
    }
*/
    return 0;
}
