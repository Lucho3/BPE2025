#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int numberInClass;
    float grade;
} Student;

typedef struct Vipusk
{
    Student students[5];
} Vipusk;

int main()
{
    Vipusk vipusks[5];
    float avg = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &vipusks[i].students[j].numberInClass);
            scanf("%d", &vipusks[i].students[j].grade);
            avg = vipusks[i].students[j].grade;
        }
    }
    avg /= 5;

    printf("Average grade: %lf", avg);

    return 0;
}
