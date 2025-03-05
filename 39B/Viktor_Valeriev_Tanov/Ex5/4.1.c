// exercise - 4; problem 1;
#include <stdio.h>

double area_square() {
    double a;
    scanf("%lf", &a);
    return a * a;
}
double area_circle() {
    double a;
    scanf("%lf", &a);
    return a * a * 3.1415;
}
double area_rectangle() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    return a * b;
}
double area_triangle() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    return  a * b / 2;
}

typedef double (*f)();
f areas[4] = {&area_square, &area_rectangle, &area_triangle, &area_circle};

int main() {
    char areasName[][10] = {"square", "rectangle", "triangle", "circle"};
    int n;
    printf("Enter a number for the corresponding figure:\n");
    for(int i=0;i<4;i++) {
        printf("%d - %s\n", i + 1, areasName[i]);
    }
    scanf("%d", &n);
    printf("The area of %s is: %.3f", areasName[n - 1], areas[n - 1]());
    return 0;
}