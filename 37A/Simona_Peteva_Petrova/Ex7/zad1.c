#include <stdio.h>

int my_strlen(const char *str) 
{
    int count = 0;
    while (*str != '\0') 
    {
        count++;
        str++;
    }
    return count;
}

int main() 
{
    char text[50];
    printf("Въведи текст: ");
    fgets(text, sizeof(text), stdin); 
    printf("Дължината на низа е: %d\n", my_strlen(text));
    return 0;
}