#include <stdio.h>

int str_len(char str[])
{
    int count = 0;
    for (char *c = str; *c != '\0'; ++c)
    {
        count++;
    }
    return count;
}

int main()
{
    char text[50];
    printf("Въведи текст: ");
    fgets(text, sizeof(text), stdin);
    printf("Дължина: %d", str_len(text));
}