#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int squareDistance(Point a, Point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx * dx + dy * dy;
}


void printTriangle(Point a, Point b, Point c) {
    printf("Strana 1: %d\n", squareDistance(a, b));
    printf("Strana 2: %d\n", squareDistance(a, c));
    printf("Strana 3: %d\n", squareDistance(b, c));
}

int main() {
    Point points[3];

    for (int i = 0; i < 3; i++) {
        printf("X za tochka %d: ", i + 1);
        scanf("%d", &points[i].x);
        printf("Y za tochka %d: ", i + 1);
        scanf("%d", &points[i].y);
    }

    printf("\nStrani na triagalnika:\n");
    printTriangle(points[0], points[1], points[2]);

    return 0;
}
