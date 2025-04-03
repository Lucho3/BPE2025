#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point {
    int x;
    int y;
} point;

typedef struct line {
    int x;
    int y;
    double length;
} line;

double getLineLength(point p1, point p2) {
    line l;
    l.x = p2.x - p1.x;
    l.y = p2.y - p1.y;
    return sqrt(l.x*l.x + l.y*l.y);
}
void printTriangleSides(point p1, point p2, point p3) {
    printf("Length of line 1 (between %d;%d and %d;%d): %f \n",p1.x,p1.y,p2.x,p2.y,getLineLength(p1,p2));
    printf("Length of line 2 (between %d;%d and %d;%d): %f \n",p1.x,p1.y,p3.x,p3.y,getLineLength(p1,p3));
    printf("Length of line 3 (between %d;%d and %d;%d): %f \n",p2.x,p2.y,p3.x,p3.y,getLineLength(p2,p3));
}

int main()
{
    int triangleAmount = 0;
    printf("How many triangles to create?: ");
    scanf("%d",&triangleAmount);
    int size = triangleAmount * 3;//if one needs 2 triangles, than they need 6 points
    point *points = (point*)malloc(size * sizeof(point));

    for(int i = 0; i < size; i++) {
        printf("Enter x value of point %d: ",i);
        scanf("%d",&points[i].x);
        printf("Enter y value of point %d: ",i);
        scanf("%d",&points[i].y);
    }

    printf("The points: \n");
    for(int i = 0; i < size; i++) {
        printf("%d;%d \n",points[i].x, points[i].y);
    }

    for(int i = 0; i < size; i += 3) {
        printTriangleSides(points[i],points[i+1],points[i+2]);
    }

    free(points);
    return 0;
}
