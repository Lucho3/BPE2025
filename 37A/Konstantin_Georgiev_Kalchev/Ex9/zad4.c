#include <stdio.h>
#include <stdlib.h>

int count_words(const char *str)
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
    char *text;

    text = (char *)malloc(1000 * sizeof(char));
    if (text == NULL)
    {
        return 1;
    }
    printf("Enter text: ");
    fgets(text, 1000 * sizeof(char), stdin);

    printf("Count words: %d\n", count_words(text));
    free(text);
    return 0;
}