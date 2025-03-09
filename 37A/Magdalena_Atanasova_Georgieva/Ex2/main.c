#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int c=0;
    printf("%d",c);
    switch(c){
        case 1:
            printf("edno\n");
            break;
        case 2:
            printf("dve\n");
            break;
        default:
            printf("Hello");
            break;
*/
/*int i;
for (i=1;i<11;i=i+1)
{

}
*/
/*
int i=0;
while (i!=5){
    scanf("%d",&i);
}
*/
/*const int rows=6;
const int columns=12;
    for(int i=0;i<rows; i++) {
        for(int j=0;j<columns;j++)
        {
            if(i==0 || i==rows-1){
                printf("-");
            }
            else
            {
                if(j==0 || j==columns-1){
                    printf("-");
                }
                else{
                      printf(" ");
                    }
            }

        }
        printf("\n");
    }
    */
/*int num;
if (num>6){
    printf("%d",num);
}
printf("");
*/
//Упражнение//

/*Zad 1*/
/*
int n=0;
scanf("%d",&n);
for (int i=1;i<=n;++i){
    for(int j=1;j<=i;++j){
        printf("%c",'1');
    }
    printf("\n");
}
*/

/*Zad.2*/
/*
int num;
scanf("%d",&num);
if (num>6){
    printf("По-голямо число!",num);
}
else{
    printf("Числото е по-малко",num);
}
*/

/*Zad.3*/
/*
int num;
scanf("%d",&num);
if (num%8>4){
    printf("Остатъкът е по-голям от 4 %d\n",num);
}
else{
    printf("Числото няма остатък %d\n",num);
}
*/

/*Zad.4*/
/*
int num1;
int num2;
int num3;
scanf("%d",&num1);
scanf("%d",&num2);
scanf("%d",&num3);
int min=num1;
if(num2<min){
    min=num2;
}
if(num3<min){
    min=num3;
}
printf("Най-малкото число е: %d\n", min);
*/
/*???????????????????
if(num1<num2)
    printf("Най-малкото число е:",num1);
    if(num1<num3){
        printf("Най-малкото число е:",num1);
    }
    else{
        printf("Най-малкото число е:",num2);
    }
}
if(num2<num1){
    printf("Най-малкото число е:",num2);
}
else {
    printf("Най-малкото число е:",num3);
}
????????????????????*/

/*Zad.5*/
/*
int num;
scanf("%d",&num);
switch(num){
    case 0:
        printf("Нула\n");
        break;
    case 1:
        printf("Едно\n");
        break;
    case 2:
        printf("Две\n");
        break;
    case 3:
        printf("Три\n");
        break;
    case 4:
        printf("Четири\n");
        break;
    case 5:
        printf("Пет\n");
        break;
    case 6:
        printf("Шест\n");
        break;
    case 7:
        printf("Седем\n");
        break;
    case 8:
        printf("Осем\n");
        break;
    case 9:
        printf("Девет\n");
        break;
    default:
        printf("Невалидно число\n");
        break;
}
*/

/*Zad.6*/
/*
int den;
scanf("%d",&den);
switch(den){
    case 1:
        printf("Понеделник\n");
        break;
    case 2:
        printf("Вторник\n");
        break;
    case 3:
        printf("Сряда\n");
        break;
    case 4:
        printf("Четвъртък\n");
        break;
    case 5:
        printf("Петък\n");
        break;
    case 6:
        printf("Събота\n");
        break;
    case 7:
        printf("Неделя\n");
        break;
    default:
        printf("Невалидно число\n");
        break;
    }
*/

/*Zad.7*/
/*
int num1;
int num2;
int start, end;
int sum = 0;
scanf("%d %d", &num1, &num2);
if (num1 < num2) {
    start = num1 + 1;
    end = num2 - 1;
}
else {
    start = num2 + 1;
    end = num1 - 1;
}
for (int i = start; i <= end; i++) {
    sum += i;
}
printf("Сумата на числата между %d и %d е: %d\n", num1, num2, sum);
*/

/*Zad.8*/
/*
int num1;
int num2;
int start;
int end;
int suma = 0;
long proizvedenie = 1;
scanf("%d", &num1);
scanf("%d", &num2);
if (num1 < num2) {
    start = num1;
    end = num2;
}
else {
    start = num2;
    end = num1;
}
for (int number = start + 1; number < end; number++) {
    if (number % 2 == 0) {
        suma += number;
    }
    else {
        proizvedenie *= number;
    }
}
printf("Сумата на четните числа между %d и %d е: %d\n", start, end, suma);
printf("Произведението на нечетните числа между %d и %d е: %ld\n", start, end, proizvedenie);
*/

/*Zad.9*/
/*
int N;
int K;
int count = 0;
printf("N: ");
scanf("%d", &N);
printf("K: ");
scanf("%d", &K);
printf("Въведете %d числа:\n", N);
for (int i = 0; i < N; i++) {
    int num;
    scanf("%d", &num);
    if (num > K && num % 3 == 0) {
        count++;
    }
}
printf("Числата по-големи от %d и се делят на 3, е: %d\n", K, count);
*/

/*Zad.10*/
/*
int num;
int sum = 0;
printf("Въведи числа и 0 за изход: \n");
do {
    scanf("%d",&num);
    sum +=num;
}
    while (num!= 0);
printf("Сборът е: %d\n", sum);
*/
/*Zad.11*/
/*
double start;
double end;
double x;
printf("Въведете начало: ");
scanf("%lf", &start);
printf("Въведете край: ");
scanf("%lf", &end);
if (start > end) {
        printf("Грешка")
    return 1;
}
////................////
for (x = start; x <= end; x += 0.01) {
    //......//
}
*/
return 0;
}
