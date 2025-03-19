#include <stdio.h>
#include <string.h>

int main() 
{
    int count = 0;
    char str[] = "SoMe RanDom WorDs";
    for (int i = 0; i <= strlen(str); i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            count++;
        }
    }
    printf("%d \n", count);

    return 0;
}