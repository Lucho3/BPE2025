// Напишете функция, която превръща от десетично в двоично едно число.

#include <iostream>
void func(int num) {
    while (true) {
        if (num == 1)
        {
            printf("1");
            break;
        }
        if (num % 2 == 1) {
            num--;
            printf("1");
        }
        else
            printf("0");

        num /= 2;
    }
    return;
}

int main()
{
    int num;
    scanf_s("%d", &num);

    func(num);
}

