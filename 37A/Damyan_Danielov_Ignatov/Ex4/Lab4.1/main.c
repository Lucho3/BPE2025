#include <stdio.h>
#include <stdlib.h>

int getSquareArea(int side) {
    return side * side;
}
int getRectangleArea(int side1, int side2) {
    return side1 * side2;
}
float getTriangleArea(float side1, float side2) {
    return side1 * side2 / 2;
}
float getCircleArea(float radius) {
    const float PI = 3.14;
    return (float)radius * (float)radius * PI;
}

int main()
{
    //FUNCTIONS, POINTERS & REFERENCES
    //Zad 1 - area of shape
    int shapeNum;
    printf("Enter shape code from 1 to 4: ");
    scanf("%d",&shapeNum);
    switch(shapeNum) {
    case 1:
        printf("You have chosen the square.\n");
        printf("Enter the length of its side: ");
        int side = 0;
        scanf("%d",&side);

        printf("Your square's area is %d",getSquareArea(side));
        break;

    case 2:
        printf("You have chosen the rectangle.\n");
        printf("Enter the length of its long side: ");
        int sideA = 0;
        scanf("%d",&sideA);

        printf("Enter the length of its short side: ");
        int sideB = 0;
        scanf("%d",&sideB);

        printf("Your rectangle's area is %d",getRectangleArea(sideA,sideB));
        break;

    case 3:
        printf("You have chosen the right angle triangle.\n");
        printf("Enter one side bordering the right angle: ");
        float triangleSideA = 0;
        scanf("%f",&triangleSideA);

        printf("Enter the other side bordering the right angle: ");
        float triangleSideB = 0;
        scanf("%f",&triangleSideB);

        printf("Your right angle triangle's area is %f",getTriangleArea(triangleSideA,triangleSideB));
        break;

    case 4:
        printf("You have chosen the circle.\n");
        printf("Enter the circle's radius: ");
        float radius = 0;
        scanf("%f",&radius);

        printf("Your circle's area is %f",getCircleArea(radius));
        break;

    default:
        printf("You have entered a wrong shape code!\n");
        break;
    }

    return 0;
}
