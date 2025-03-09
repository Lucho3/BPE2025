#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Zad.1*/
/*
float lice_kvadrat(float a)
{
     return a*a;
}
float lice_pravougulnik(float a,float b)
{
     return a*b;
}
float lice_pravougulen_triugulnik(float a,float b)
{
     return (a*b)/2;
}
float lice_okrujnost(float r)
{
     return M_PI*r*r;
}
int main()
{
    int num;
    printf("Въведете число: 1-квадрат, 2-правоъгълник, 3-правоъгълен триъгълник, 4-окръжност");
    scanf("%d",&num);
    if (num==1){
        float a;
        printf("Въведете а: ");
        scanf("%f", &a);
        printf("Геометричната фигура е: Квадрат\n");
        printf("Лицето на квадрата е: %.2f\n", lice_kvadrat(a));
    }
    else if (num==2){
        float a,b;
        printf("Въведете a и b: ");
        scanf("%f %f" , &a,&b);
        printf("Геометричната фигура е: Правоъгълник\n");
        printf("Лицето на правоъгълникът е: %.2f\n",lice_pravougulnik(a,b));
    }
    else if(num==3){
        float a,b;
        printf("Въведете a и b: ");
        scanf("%f %f" , &a,&b);
        printf("Геометричната фигура е: Правоъгълен триъгълник\n");
        printf("Лицето на триъгълникът е: %.2f\n", lice_pravougulen_triugulnik(a,b));
    }
    else if(num==4){
        float r;
        printf("Въведете r: ");
        scanf("%f" , &r);
        printf("Геометричната фигура е: Окръжност\n");
        printf("Лицето на окръжността е: %.2f\n", lice_okrujnost(r));
    }
    else{
        printf("Няма такава фигура");
    }
    */

/*Zad.2*/
/*
void change(int *num1, int *num2){
    int new_num=*num1;
    *num1=*num2;
    *num2=new_num;
}
int main(){
    int num1, num2;
    printf("Въведете две числа: ");
    scanf("%d %d", &num1, &num2);
    printf("Числата са: %d, %d\n", num1, num2);
    change(&num1, &num2);
    printf("Новата подредба на числата е: ");
    printf("%d, %d\n", num1, num2);
*/
/*Zad.3*/
/*
int even(num)
{
    return num;
}
int odd(num)
{
    return num;
}
int main(){
    int num;
    printf("Въведи число: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("Числото е четно!",even(num));
    }
    else if (num%2!=0){
        printf("Числото е нечетно!",odd(num));
    }
*/
/*Zad.4*/
/*
void numberToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
int main(){
    int num;
    printf("Въведете число: ");
    scanf("%d", &num);
    printf("Двоичното представяне e: %d ", num);
    numberToBinary(num);
    printf("\n");
*/
    return 0;
}
