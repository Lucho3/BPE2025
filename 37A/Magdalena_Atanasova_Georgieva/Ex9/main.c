#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
/* primer 1*/
/*
typedef struct Example{
    int a;
    int b;
    char *str;
} my_var;
int main()
{
    my_var *c=(my_var*)malloc(sizeof(my_var));
    if(c==NULL){
        exit(1);
    }
    c->a=1;
    c->b=3;
    c->str=(char*)malloc(20*sizeof(char));
    if (c->str==NULL)
    {
        exit(1);
    }
    strcpy(c->str,"C Programming");
    printf("%d %d %d",c->a,c->b,c->str);

    free(c->str);
    free(c);
    return 0;
}
*/
/*Primer 2*/
/*
struct Example{
    int a;
    int b;
    char *str;
} c;
int main()
{
    c.a=1;
    c.b=3;
    c.str=(char)malloc(20*sizeof(char));
    if (c.str==NULL)
    {
        exit(1);
    }
    strcpy(c.str,"C Programming");
    printf("%d %d %d",c.a,c.b,c.str);

    free(c.str);
    free(c.a);
    return 0;
}*/
/*Zad.1*/
/*
struct Vehicle{
    char brand[50];
    int max_speed;
    int year;
    float price;
};
typedef union Data {
    int horsepower;
    float displacement;
    int engine_count;
} u;
struct SpecialVehicle{
    char type[20];
    struct Vehicle base;
    union Data u;
    };
int main() {
    struct SpecialVehicle car = {
        "car",
        {"BMW", 210, 2020, 25000},
        203
    };
    struct SpecialVehicle motorcycle = {
        "motorcycle",
        {"Mercedes", 280, 2020, 15000},
        118
    };

    struct SpecialVehicle boat = {
        "boat",
        {"Lagoon 43", 70, 2018, 150000},
        8.2
    };

    struct SpecialVehicle airplane = {
        "airplane",
        {"Airbus", 302, 2015, 300000},
        1
    };
    printf("%s",car.type);
    return 0;
}
*/
/*Zad.2*/
/*
typedef struct {
    char name[50];
    float grade;
} Student;
typedef struct {
    Student *students;
    int numStudents;
    float averageGrade;
} Class;
typedef struct {
    Class *classes;
    int numClasses;
    float averageGrade;
} Graduation;
void Students(Class *class) {
    printf("Въведете брой ученици в класа: ");
    scanf("%d", &class->numStudents);
    class->students = (Student *)malloc(class->numStudents * sizeof(Student));
    for (int i=0; i<class->numStudents; i++) {
        printf("Въведете име на ученик %d: ", i+1);
        scanf("%s", class->students[i].name);
        printf("Въведете успех на ученик %d: ", i+1);
        scanf("%f", &class->students[i].grade);
    }
}
void average_clas(Class *class) {
    float sum = 0;
    for (int i=0;i<class->numStudents;i++) {
        sum += class->students[i].grade;
    }
    class->averageGrade = sum / class->numStudents;
}
void average_vipusk(Graduation *graduation) {
    float sum=0;
    for (int i=0;i<graduation->numClasses;i++) {
        sum += graduation->classes[i].averageGrade;
    }
    graduation->averageGrade=sum / graduation->numClasses;
}
int main() {
    Graduation graduation;
    printf("Въведете брой класове във випуска: ");
    scanf("%d", &graduation.numClasses);
    graduation.classes = (Class *)malloc(graduation.numClasses * sizeof(Class));
    for (int i=0;i<graduation.numClasses;i++) {
        printf("Въвеждане на данни за клас %d:\n",i+1);
        Students(&graduation.classes[i]);
        average_clas(&graduation.classes[i]);
        printf("Среден успех на клас %d: %.2f\n",i+1, graduation.classes[i].averageGrade);
    }
    average_vipusk(&graduation);
    printf("Среден успех на целия випуск: %.2f\n", graduation.averageGrade);
    for (int i=0; i<graduation.numClasses; i++) {
        free(graduation.classes[i].students);
    }
    free(graduation.classes);

    return 0;
}
*/
/*Zad.3*/

typedef struct {
    float x;
    float y;
    float z;
} Point;
float distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}
void Points(Point *points, int count) {
    for (int i=0; i<count; i++) {
        printf("Въведете данни за точката %d:", i+1);
        scanf("%f %f %f", &points[i].x, &points[i].y, &points[i].z);
    }
}
void Points_triangle(Point *points, int count) {
    printf("Въведени точки:\n");
    for (int i=0; i<count; i++) {
        printf("Точката %d: (%.2f, %.2f, %.2f)\n", i + 1, points[i].x, points[i].y, points[i].z);
    }
}
void Triangles(Point *points, int pointCount) {
    if (pointCount < 3) {
        printf("Няма достатъчно точки:\n");
        return;
    }
    int triangleCount = 0;
    for (int i = 0; i < pointCount - 2; i++) {
        for (int j = i + 1; j < pointCount - 1; j++) {
            for (int k = j + 1; k < pointCount; k++) {
                float ab, bc, ac;
                bool is_found = false;
                if ((points[i].x*(points[j].y - points[k].y) + points[j].x*(points[k].y - points[i].y) + points[k].x*(points[i].y - points[j].y)) != 0) { // checking if the points are collinear, the formula is taken from the net
                    ab = distance(points[i], points[j]);
                    bc = distance(points[j], points[k]);
                    ac = distance(points[i], points[k]);
                    triangleCount++;
                    is_found = true;
                }

                if (is_found){
                    printf("Дължини на страните:\n");
                    printf("AB = %.2f\n", ab);
                    printf("BC = %.2f\n", bc);
                    printf("AC = %.2f\n", ac);
                }

                else{
                    printf("Не съществува триъглник с такива координати!\n");
                }
            }
        }
    }
}
int main() {
    int pointCount;
    printf("Въведете брой точки: ");
    scanf("%d", &pointCount);
    Point *points = (Point *)malloc(pointCount * sizeof(Point));

    if (!points){
        printf("Не може да се задели динамична памет за масива. \n");
        exit(1);
    }

    Points(points, pointCount);
    Points_triangle(points, pointCount);
    Triangles(points, pointCount);

    free(points);
    return 0;
}
