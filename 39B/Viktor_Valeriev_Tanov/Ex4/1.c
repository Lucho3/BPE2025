#include <stdio.h>

double area_square() {
    double a;
    scanf("%lf", &a);
    return a * a;
}

double area_rectangle() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    return a * b;
}

double area_triangle() {
    double a, h;
    scanf("%lf %lf", &a, &h);
    return a * h / 2;
}

double area_circle() {
    double r;
    scanf("%lf %lf", &r);
    return r * r * 3.1415;
}

int main() {
    int x = 0;
    scanf("%d", &x);
    if(x == 1) {
        printf("Square area: %lf", area_square());
    }else if(x == 2) {
        printf("Rectnagle area: %lf", area_rectangle());
    }else if(x == 3) {
        printf("Triangle area: %lf", area_triangle());
    }else if(x == 4) {
        printf("Circle area: %lf", area_circle());
    }else
    return 0;
}
