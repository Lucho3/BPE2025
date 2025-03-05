#include <stdio.h>
int Square(int a);
int Rectangle(int a, int b);
int Right_Triangle(int a, int b);
double Circle(int r);
int main(){
    int choice;
    printf("Enter a choice\n1-Square\n2-Rectangle\n3-Right Triangle\n4-Circle\n");
    scanf(" %d", &choice);
    int area;
    int a;
    int b;
    double r;
    
    
    switch(choice){
        case 1:
            printf("Enter a size of a: ");
            scanf("%d", &a);
            Square(a);
            printf("Area is: %d\n", Square(a));
            break;
        case 2:
            printf("Enter a size of a: ");
            scanf("%d", &a);
            printf("Enter a size of b: ");
            scanf("%d", &b);
            printf("Area is: %d\n", Rectangle(a, b));
            break;
        case 3:
            printf("Enter a size of a: ");
            scanf("%d", &a);
            printf("Enter a size of b: ");
            scanf("%d", &b);
            printf("Area is: %d\n", Right_Triangle(a,b));
            break;
        case 4:
            printf("Enter a size of r: ");
            scanf("%lf", &r);
            printf("Area is: %lf\n", Circle(r));
            break;
        default:
            printf("Enter valid value\n");
    }
}


int Square(int a){
    int area;
    return area = a*a;
}

int Rectangle(int a, int b){
    int area;
    return area = a*b;
}

int Right_Triangle(int a, int b){
    int area;
    return area = a*b;
}

double Circle(int r){
    double area;
    return area = r*r*3.14;
}