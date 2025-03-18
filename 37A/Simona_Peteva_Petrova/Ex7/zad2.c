#include <stdio.h>

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
    char text[1000];

    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin); 

    printf("Брой думи: %d\n", count_words(text));
    return 0;
}