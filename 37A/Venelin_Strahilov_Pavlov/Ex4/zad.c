#include <stdio.h>
#include <stdlib.h>

void calc_Area(){
  int choice;
  double side_a;
  double side_b;
  printf("Enter Choice: 1-Kvadrat 2-Pravougulnik 3-Pravougulen Triugulnik 4-Okrujnost");
  scanf("%d", &choice);
  double result = 0;
  switch(choice){
    case 1: //kvadrat
      scanf("%lf", &side_a);
      result = side_a * side_a;
      printf("Kvadrat %.2lf\n", result);
      break;
    case 2: // pravougulnik
      scanf("%lf %lf", &side_a, side_b);
      result = side_a * side_b;
      printf("Pravougulnik %.2lf\n", result);
      break;
    case 3: // pravoug triug
      scanf("%lf", &side_a);
      result = 2/(side_a * side_a);
      printf("Pravougulen triugulnik %.2lf\n", result);
      break;
    case 4: // okrujnost
      scanf("%lf", &side_a);
      result = (side_a * side_a)*3.14;
      printf("Okrujnost %.2lf\n", result);
      break;
    default:
      break;
  }
}

void swapNums(int *x,int *y) {
  printf("Predi razmqna: \n");
  printf("int x: %d \n",x);
  printf("int y: %d \n",y);
  int temp = x;
  x = y;
  y = temp;
  printf("Sled razmqna: \n");
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

void decToBin(int num) {
  if (num ==0) {
    printf("%d is zero\n",num);
  }
  int binary[32], i = 0;
  while (num > 0) {
    binary[i++] = num % 2;
    num /= 2;
  }

  while (--i >= 0)
    printf("%d", binary[i]);
}

int main() {

  //calc_Area();
  //swapNums(5,3);
  //isEven(5);
  //isEven(2);
  //decToBin(78);
  return 0;
}