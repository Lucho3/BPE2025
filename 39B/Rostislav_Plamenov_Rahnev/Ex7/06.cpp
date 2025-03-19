//6.Напишете програма, която заменя малките букви в низ с големи

#include <stdio.h>
#include <ctype.h>

void to_uppercase(char* str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    char str[50];
    fgets(str, sizeof(str), stdin);
    to_uppercase(str);
    puts(str);
    
}
