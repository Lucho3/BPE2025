#include <stdio.h>
int main()
{
    char text[100];
    int count = 0;
    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin);
    for (char *str = text; *str != '\0'; str++)
    {
        char ch = *str;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    printf("Брой на гласните: %d\n", count);

    return 0;
}