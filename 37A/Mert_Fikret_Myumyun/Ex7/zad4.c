#include <stdio.h>

int compareStrings(char* str1, char* str2) 
{
    while (*str1 && *str2 && *str1 == *str2) 
    {
        str1++;
        str2++;
    }
    return *str1 - *str2; 
}

int main() 
{
    char str1[100], str2[100];

    printf("Въведете първи низ: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Въведете втори низ: ");
    fgets(str2, sizeof(str2), stdin);

    
    int result = compareStrings(str1, str2);
    if (result == 0) 
    {
        printf("Низовете са еднакви.\n");
    }
    else 
    {
        printf("Низовете не са еднакви.\n");
    }

    return 0;
}
