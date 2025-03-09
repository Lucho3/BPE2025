/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

double square_area(double a) {
    return a * a;
}

double rectangle_area(double a, double b) {
    return a * b;
}

double right_triangle_area(double a, double h) {
    return 0.5 * a * h;
}

double circle_area(double r) {
    return M_PI * r * r;
}

int main() {
    int shape_code;
    
    scanf("%d", &shape_code);
    

    double a, b, c;
    
    switch(shape_code) {
        case 1: 
            scanf("%lf", &a);
            c = square_area(a);
            printf("%.2lf\n", c);
            break;
            
        case 2: 
            scanf("%lf", &a);
            scanf("%lf", &b);
            c = rectangle_area(a, b);
            printf("%.2lf\n", c);
            break;
            
        case 3: 
            scanf("%lf", &a);
            scanf("%lf", &b);
            c = right_triangle_area(a, b);
            printf("%.2lf\n", c);
            break;
            
        case 4:
            scanf("%lf", &a);
            c = circle_area(a);
            printf("%.2lf\n", c);
            break;
            
        default:
            printf("Невалиден код на фигура!\n");
            break;
    }

    return 0;
}
