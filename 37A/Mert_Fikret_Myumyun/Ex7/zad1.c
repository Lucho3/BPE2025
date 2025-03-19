#include <stdio.h>

int strlen(char str[])
{
    int ctr = 0;

    for (char* c = str; *c !='\0'; ++c)
    {
        ctr += 1;
    }

    return ctr;
}

int main() 
{
    char str[100];

    printf("Въведете низ: ");
    fgets(str, sizeof(str), stdin);

    printf("Дължината на низа е: %d\n", strlen(str));

    return 0;
}
