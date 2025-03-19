#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "SoMe RanDom WorDs";

    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("%s \n", str);

    return 0;
}