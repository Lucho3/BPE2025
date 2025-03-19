//5.Напишете функция, която връща броя на гласните в низ.

#include <iostream>

int main()
{
    char glasni[] = { 'a', 'y', 'o', 'u', 'e', 'i' };
    char str[50];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < sizeof(glasni); i++)
    {
        printf("%c:", glasni[i]);
        for (int j = 0; j < sizeof(str); j++)
        {
            if (str[j] == '\n' || str[j] == '\0')
            {
                break;
            }
            if (glasni[i] == str[j])
            {
                count++;
            }
        }
        printf("%d", count);
        printf("\n");
        count = 0;
    }

}