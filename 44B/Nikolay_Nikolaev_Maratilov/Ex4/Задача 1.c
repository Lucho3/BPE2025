#include <stdio.h>
#include <math.h>

int sqareArea(int side){
    printf("The shape is a square\n");
    return side * side;
}

int rectangleArea(int side1, int side2){
    printf("The shape is a rectangle\n");
    return side1 * side2;
}
float triangleArea(float side1, float side2){
    printf("The shape is a triangle\n");
    return side1 * side2 / 2;
}

float circleArea(int rad){
    printf("The shape is a circle\n");
    return 3.14 * rad * rad;
}

int main() {
    int type = 0;
    scanf("%d", &type);

    if (type == 1) {
        int side = 0;
        scanf("%d", &side);
        printf("%d\n", sqareArea(side));
    }
    else if (type == 2) {
        int side1 = 0;
        int side2 = 0;
        scanf("%d", &side1);
        scanf("%d", &side2);
        printf("%d\n", rectangleArea(side1, side2));
    }
    else if (type == 3) {
        float side1 = 0;
        float side2 = 0;
        scanf("%f", &side1);
        scanf("%f", &side2);
        printf("%.2f\n", triangleArea(side1, side2));
    }
    else if (type == 4){
        float rad = 0;
        scanf("%f", &rad);
        printf("%.2f\n", circleArea(rad));
    }
    else{
        printf("Incorrect input");
    }

    return 0;
}