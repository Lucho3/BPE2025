#include <stdio.h>
#include <math.h>

int areaSquare(int a) {
    return a * a;
}

int areaRectangle(int width, int height) {
    return width * height;
}

int areaTriangle(int a, int h) {
    return (a * h) / 2;
}

double areaCircle(double r) {
    return 3.14 * r * r;
}

int main() {
    int num;
    int a, b;

    printf("Въведете код на геометричната фигура (1-квадрат, 2-правоъгълник, 3-правоъгълен триъгълник, 4-окръжност): ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Квадрат:\n");
            printf("Въведете страна: ");
            scanf("%d", &a);
            printf("Лице: %d\n", areaSquare(a));
            break;
        case 2:
            printf("Правоъгълник:\n");
            printf("Въведете ширина и височина: ");
            scanf("%d %d", &a, &b);
            printf("Лице: %d\n", areaRectangle(a, b));
            break;
        case 3:
            printf("Правоъгълен триъгълник:\n");
            printf("Въведете основа и височина: ");
            scanf("%d %d", &a, &b);
            printf("Лице: %d\n", areaTriangle(a, b));
            break;
        case 4:
            printf("Окръжност:\n");
            printf("Въведете радиус: ");
            scanf("%d", &a);
            printf("Лице: %.2lf\n", areaCircle(a));
            break;
        default:
            printf("Невалиден код!\n");
            break;
    }

    return 0;
}