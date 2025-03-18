#include <stdio.h>

int main() 
{
    char text[1000];
    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) 
    {
        if (text[i] >= 'a' && text[i] <= 'z') 
        {
            text[i] = text[i] - ('a' - 'A');  
        }
    }

    printf("Текст с главни букви: %s", text);
    return 0;
}