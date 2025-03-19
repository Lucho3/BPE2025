//1.Напишете функция, която намира дължината на низ без да ползвате вградените.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50];
    int i = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("%d", i - 1);
    return 0;

	
}
