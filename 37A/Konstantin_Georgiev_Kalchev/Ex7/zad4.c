#include <stdio.h>

int main()
{
    char str1[512], str2[512];

    fgets(str1, sizeof(str1), stdin);

    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }

    if (len1 > len2)
    {
        printf("%s", str1);
    }
    else if (len2 > len1)
    {
        printf("%s", str2);
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}