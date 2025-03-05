//Напишете функция, която проверява дали конкретно число е четно или нечетно. 

#include <iostream>
void func(int num) {
	if (num % 2 == 0)
		printf("Even");
	else
		printf("Odd");
}
int main()
{
	int num;
	printf("Insert number: ");
	scanf_s("%d", &num);
	
	func(num);
}

