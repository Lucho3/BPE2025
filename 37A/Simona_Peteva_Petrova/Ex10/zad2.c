typedef struct 
{
     char name[50];
     float grade;
 } Student;
 typedef struct 
 {
     Student *students;
     int numStudents;
     float averageGrade;
 } Class;
 typedef struct 
 {
     Class *classes;
     int numClasses;
     float averageGrade;
 } Graduation;
 void Students(Class *class) 
 {
     printf("Въведете брой ученици в класа: ");
     scanf("%d", &class->numStudents);
     class->students = (Student *)malloc(class->numStudents * sizeof(Student));
     for (int i=0; i<class->numStudents; i++) 
     {
         printf("Въведете име на ученик %d: ", i+1);
         scanf("%s", class->students[i].name);
         printf("Въведете успех на ученик %d: ", i+1);
         scanf("%f", &class->students[i].grade);
     }
 }
 void average_clas(Class *class) 
 {
     float sum = 0;
     for (int i=0;i<class->numStudents;i++) 
     {
         sum += class->students[i].grade;
     }
     class->averageGrade = sum / class->numStudents;
 }
 void average_vipusk(Graduation *graduation) 
 {
     float sum=0;
     for (int i=0;i<graduation->numClasses;i++) 
     {
         sum += graduation->classes[i].averageGrade;
     }
     graduation->averageGrade=sum / graduation->numClasses;
 }
 int main() 
 {
     Graduation graduation;
     printf("Въведете брой класове във випуска: ");
     scanf("%d", &graduation.numClasses);
     graduation.classes = (Class *)malloc(graduation.numClasses * sizeof(Class));
     for (int i=0;i<graduation.numClasses;i++) 
     {
         printf("Въвеждане на данни за клас %d:\n",i+1);
         Students(&graduation.classes[i]);
         average_clas(&graduation.classes[i]);
         printf("Среден успех на клас %d: %.2f\n",i+1, graduation.classes[i].averageGrade);
     }
     average_vipusk(&graduation);
     printf("Среден успех на целия випуск: %.2f\n", graduation.averageGrade);
     for (int i=0; i<graduation.numClasses; i++) 
     {
         free(graduation.classes[i].students);
     }
     free(graduation.classes);
 
     return 0;
 }