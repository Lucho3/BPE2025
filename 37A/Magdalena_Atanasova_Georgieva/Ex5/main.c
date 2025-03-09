#include <stdio.h>
#include <stdlib.h>
/*Zad.3*/
/*
double Subirane(double num1, double num2){
    return num1+num2;
}
double Izvajdane(double num1, double num2){
    return num1-num2;
}
double Umnojenie(double num1, double num2){
    return num1*num2;
}
double Delenie(double num1, double num2){
    if (num2==0){
        printf("Не се дели на 0");
        return;
    }
    return num1/num2;
}
int main(void)
{
    int num=5;
    int* numukazatel;
    numukazatel=&num;
    printf("Първото число е: %d\n",num);
    printf("Адресът на клетката е: %p\n",numukazatel);
    double num1,num2;
    printf("Въведи числа:");
    scanf("%num1 %num2", &num1, &num2);
    printf("Събиране: %lf\n",Subirane(num1,num2));
    printf("Изважданe: %lf\n",Izvajdane(num1,num2));
    printf("Умножение: %lf\n",Umnojenie(num1,num2));
    printf("Деление: %lf\n",Delenie(num1,num2));
}
*/
/*Seminarni upr.*/
/*1*/
/*
double bigger_number(double* number1, double* number2){
if (*number1 >= *number2){
    return *number1;
}
return *number2;
}
double smaller_number(double* number1, double* number2){
if(*number1 <= *number2){
    return *number1;
}
return *number2;
}
int main(){
double curr_num;
scanf("%lf", &curr_num);
double max_number = curr_num, min_number = curr_num;
while (curr_num){
    max_number = bigger_number(&max_number, &curr_num);
    min_number = smaller_number(&min_number, &curr_num);
    scanf("%lf", &curr_num);
}
printf("The biggest number is: %lf\n", max_number);
printf("The smallest number is: %lf\n", min_number);
*/
/*2*/
/*
void calculating_time(int* hours, int* minutes){
int total_time = *hours*60 + *minutes + 15;
int new_hours = (total_time / 60) % 24;
int new_minutes = total_time % 60;
    if (new_minutes < 10){
        printf("%d:0%d\n", new_hours, new_minutes);
    }
    else{
        printf("%d:%d\n", new_hours, new_minutes);
    }
}
int main(){
int hours, minutes;
scanf("%d %d", &hours, &minutes);
if (hours >= 24 || minutes >= 60 || hours < 0 || minutes < 0){
    exit(2);
}
calculating_time(&hours, &minutes);
*/
/*7*/
/*
void minimal_transport(double* n, char* period){
    double minimal_price = 0.0;
    if (*n < 20){
        if (*period == 'D'){
            minimal_price = *n * 0.79 + 0.7;
        }
        else{
            minimal_price = 0.7 + *n * 0.9;
        }
    }
    else if (*n >= 20 && *n < 100){
        minimal_price = *n * 0.09;
    }
    else{
        minimal_price = *n * 0.06;
    }
    printf("Minimal transport price is: %.2lf.\n", minimal_price);
}
int main(){
double n;
char period;
scanf("%lf %c", &n, &period);
if (n <= 0 || (period != 'D' && period != 'N')){
exit(1);
}
minimal_transport(&n , &period);
*/
/*12*/
/*
void drawing_butterfly(int* rows){
int height = 2*(*rows - 2) +1;
int width = *rows * 2 -1;
int one_side = *rows - 1;
int speical_symbol_row = height / 2;
for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
        if (i == speical_symbol_row){
            if (j == one_side){
                printf("@");
            }
            else{
                printf(" ");
            }
        }
        else if (i < speical_symbol_row){
            if ((j >= 0 && j < one_side-1) || (j>=one_side+2)){
                if (i % 2 == 0){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            else if (j == one_side -1){
                printf("\\");
            }
            else if(j == one_side){
                printf(" ");
            }
            else{
                printf("/");
            }
        }
        else if (i > speical_symbol_row){
            if ((j >= 0 && j < one_side-1) || (j>=one_side+2)){
                if (i % 2 == 0){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            else if (j == one_side -1){
                printf("/");
            }
            else if(j == one_side){
                printf(" ");
            }
            else{
                printf("\\");
            }
        }

    }
printf("\n");
  }
}
int main(){
int rows;
scanf("%d", &rows);
if (rows < 3){
    exit(1);
}
drawing_butterfly(&rows);
*/
return 0;
}
