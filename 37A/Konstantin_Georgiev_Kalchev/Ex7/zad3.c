#include <stdio.h>
#include <stdlib.h>

#define ALPHABET_SIZE 26

int main()
{
    char text[1000];
    int counts[ALPHABET_SIZE] = {0};

    fgets(text, sizeof(text), stdin);

    int i = 0;
    while (text[i] != '\0')
    {
        if (isalpha(text[i]))
        {
            char lower = tolower(text[i]);
            counts[lower - 'a']++;
        }
        i++;
    }
    i = 0;
    while (i < ALPHABET_SIZE)
    {
        if (counts[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, counts[i]);
        }
        i++;
    }

    return 0;
}