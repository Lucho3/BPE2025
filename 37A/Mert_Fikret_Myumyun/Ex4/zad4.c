#include <stdio.h>
#include <stdlib.h>

void Area()
{
  int choice;
  double a;
  double b;

  printf("Enter Choice: 1-Square 2-Rectangle 3-Triangle 4-Cirle");
  scanf("%d", &choice);

  double result = 0;

  switch(choice)
  {
    case 1: 
      scanf("%lf", &a);
      result = a * a;
      printf("Square: %.2lf\n", result);
      break;
    case 2: 
      scanf("%lf %lf", &a, b);
      result = a * b;
      printf("Rectangle: %.2lf\n", result);
      break;
    case 3: 
      scanf("%lf", &a);
      result = 2/(a * a);
      printf("Triangle: %.2lf\n", result);
      break;
    case 4: 
      scanf("%lf", &a);
      result = (a * a)*3.14;
      printf("Circle: %.2lf\n", result);
      break;
    default:
      break;
  }
}

void Swap(int *x,int *y) 
{
  printf("Before: \n");
  printf("int x: %d \n",x);
  printf("int y: %d \n",y);
  int temp = x;
  x = y;
  y = temp;
  printf("After: \n");
  printf("int x: %d \n",x);
  printf("int y: %d \n",y);
}

void isEven(int num) {
  if(num % 2 == 0) {
    printf("%d Is Even\n",num);
  }else {
    printf("%d Is Not Even\n",num);
  }
}

void toBin(int num) 
{
  if (num ==0) 
  {
    printf("%d is zero\n",num);
  }
  int binary[32], i = 0;
  while (num > 0) 
  {
    binary[i++] = num % 2;
    num /= 2;
  }

  while (--i >= 0)
    printf("%d", binary[i]);
}

int main() {
  //Area();
  //Swap(5,3);
  //isEven(5);
  //isEven(2);
  //ToBin(78);
  return 0;
}