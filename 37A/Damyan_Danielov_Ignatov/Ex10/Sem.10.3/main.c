#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[128];
    int age;
    double height;
} person;

typedef struct student {
    person personal;
    char department[5];
    char facultyNum[9];
    double grade;
} student;

typedef struct studentGroup {
    Student* students;
} StudentGroup

typedef struct specialty {
   StudentGroup* groups
}

void printPerson(Student s) {
    printf("Name: %s \n Age: %d \n Height: %f \n Department: %s \n Faculty number: %s \n Grade: %f \n", s.personal.name,s.personal.age,s.personal.height,s.department, s.facultyNum, s.grade);
}
int main()
{
    Student s1;
    strcpy(s1.personal.name,"Drugarq Georgi Dimitrov");
    s1.personal.age = 58;
    s1.personal.height = 1.58;
    strcpy(s1.department,"FCST");
    strcpy(s1.facultyNum,"121224111");
    s1.grade = 3.60;
    printPerson(s1);
    return 0;
}
