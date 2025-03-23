#include <stdio.h>

int count_words(char str[])
{
    int count = 0;
    while (*str)
    {
        if (*str == ' ')
        {
            count++;
        }
        str++;
    }
    return count + 1;
}

int main()
{
    char text[50];
    printf("Въведи текст: ");
    fgets(text, sizeof(text), stdin);
    printf("Брой думи: %d\n", count_words(text));
    return 0;
}
