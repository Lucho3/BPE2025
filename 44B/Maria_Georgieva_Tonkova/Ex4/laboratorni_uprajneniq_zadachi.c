#include <stdio.h>
void change(int a, int b, int c)
{
    c=a;
    a=b;
    b=c;
    printf("The changed values are: %d, %d", a, b);
}

void evenOdd(int num){
    if (num%2==0)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}

void func1(int x)
{
    if(!x) return;
    func1(x/2);
    printf("%d", x%2);
}

int main()
{
    int a=0,b=0, c=0, num =0, x=0, choice = 0;
    while(1)
    {
        printf("\nEnter your choice (task 2-2, task 3-3, task 4-4, task 5-5, task 6-6), For exit -> 0: ");
        scanf("%d", &choice);
        if (choice==0){
            printf("Stopping the program");
            break;
        }
        switch (choice){
            case 2:
            printf("TASK 2 - Changing numbers\n");
            printf("Enter the first number (a): ");
            scanf("%d", &a);
            printf("Enter the second number (b): ");
            scanf("%d", &b);
            printf("The values of a and b are a = %d, b = %d\n", a,b);
            change(a,b,c);
            break;

            case 3:
            printf ("TASK 3 - Even or odd\n");
            printf("Enter a number: ");
            scanf("%d",&num);
            evenOdd(num);
            break;

            case 4:
            printf("TASK 4 - Decimal to binary\n");
            printf("Enter a number: ");
            scanf("%d", &x);
            func1(x);
            break;

            case 5:
            printf("TASK 5 - Value and address\n");
            a=255;
            int *p=NULL;
            p=&a;
            printf("This is the value: %d\n",a);
            printf("This is the address: %p\n",p);
            printf("This is the value again: %d\n",*p);
            printf("This is the address again: %p\n",&a);
            break;

            case 6:
            printf("TASK 6 - Math operations\n");
            int *pa=NULL, *pb=NULL;
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Enter a second number: ");
            scanf("%d",&b);;
            pa=&a;
            pb=&b;
            printf("%d + %d =  %d\n",*pa, *pb, *pa+*pb);
            printf("%d - %d = %d\n", *pa, *pb, *pa-*pb);
            printf("%d * %d = %d\n", *pa, *pb, (*pa) * (*pb));
            printf("%d / %d = %d\n", *pa, *pb, (*pa)/(*pb));
            break;

            default: 
            printf("Invalid number");
        }
    }

    return 0;
}