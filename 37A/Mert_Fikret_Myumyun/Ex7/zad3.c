#include <stdio.h>

void countLetters(char* str) 
{
    int count[26] = { 0 }; 

    while (*str) 
    {
        char ch = *str;
        if (ch >= 'A' && ch <= 'Z') 
        {
            count[ch - 'A']++; 
        }
        else if (ch >= 'a' && ch <= 'z') 
        {
            count[ch - 'a']++; 
        }
        str++; 
    }

    for (int i = 0; i < 26; i++) 
    {
        if (count[i] > 0) 
        {
            printf("%c: %d\n", 'A' + i, count[i]);
        }
    }
}

int main() 
{
    char text[200];

    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin);

    countLetters(text);

    return 0;
}
