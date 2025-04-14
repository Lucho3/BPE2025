#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
    float z;
} Point;

int main()
{
    Point points[3] = {
        {2, 3, 5},
        {1, 15, 10},
        {4, 12, 2}};

    float sides[3];

    sides[0] = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y - points[0].y, 2) + pow(points[1].z - points[0].z, 2));
    sides[1] = sqrt(pow(points[2].x - points[1].x, 2) + pow(points[2].y - points[1].y, 2) + pow(points[2].z - points[1].z, 2));
    sides[2] = sqrt(pow(points[0].x - points[2].x, 2) + pow(points[0].y - points[2].y, 2) + pow(points[0].z - points[2].z, 2));

    printf("Triangle sides:\n");
    printf("Side 1: %.2f\n", sides[0]);
    printf("Side 2: %.2f\n", sides[1]);
    printf("Side 3: %.2f\n", sides[2]);

    return 0;
}
