#include <stdio.h>

int countVowels(char* str) 
{
    int count = 0;
    while (*str) 
    {
        char ch = *str;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            count++;
        }
        str++; 
    }
    return count;
}

int main() 
{
    char text[200];

    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin);

    printf("Брой гласни букви: %d\n", countVowels(text));
}