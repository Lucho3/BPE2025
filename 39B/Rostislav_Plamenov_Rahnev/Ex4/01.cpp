//Да се напише програма, в която се въвежда цяло число, което представлява код на геометрична фигура –
// 1 – квадрат,
// 2 – правоъгълник, 
// 3 – правоъгълен триъгълник, 
// 4 – окръжност.
// След това се въвеждат размерите на избраната геометрична фигура.
// Програмата трябва да изведе типа на геометричната фигура, както и нейното лице.
// За пресмятането на лицето да се напишат подходящи функции

#include <iostream>


double SquareArea(double a) {
	return a * a;
}

double PravoygylnikArea(double a, double b) {
	return a * b;
}

double TriangleArea(double a, double b) {
	return a * b * 0.5;
}

double CircleArea(double a) {
	return a * a * 3.14;
}

int main()
{
	int command;
	double a, b;
	double area = 0;
	scanf_s("%d", &command);
	scanf_s("%lf", &a);

	if (command == 1) {
		printf("Square: %.2f", SquareArea(a));
	}
	else if (command == 2) {
		scanf_s("%lf", &b);
		printf("Pravoygylnik: %.2f", PravoygylnikArea(a, b));
	}
	else if (command == 3) {
		scanf_s("%lf", &b);
		printf("Triangle: %.2f", TriangleArea(a, b));
	}
	else  if (command == 4) {
		printf("Circle: %.2f", CircleArea(a));

	}
	else
		printf("Error");

}
