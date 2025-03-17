#include <stdio.h>

//zad1
int stringLenght(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
 //zad2
 int countWords(char str[])
 {
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if (!inWord)
            {
                count++;
                inWord = 1;
            }
        }
        else 
        {
            inWord = 0;
        }
    }
    return count;
 }

 //zad3
 void countLetters(char str[])
 {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z'))
        {
            freq[(unsigned char) str [i]]++;
        }
    }
    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", i , freq[i]);
        }
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (freq[i] >0)
        {
            printf("%c: %d\n", i , freq[i]);
        }
    }
 }

//zad4
int compareStrings(char str1[], char str2[])
{
    int i (str1[i] != '\0' && str2[i] !='\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

//zad5
int countVowels(char str[])
{
    int count = 0;
    char vowels[] = "aqiouAEIOU";
    for (int i = 0; str[i] != '\0'; i++)
    {
        for(int j = 0; vowels[j] != '\0'; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
            }
        }
    }
    return count;
}

//zad6
void toUpperCase(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -=32;
        }
    }
}
int main()
{
    char str[100], str2[100];
    printf("въведете низ: ");
    fgets(str, sizeof(str), stdin); 
    printf("Дължина на низа: %d\n", stringLength(str));
    printf("Брой думи: %d\n", countWprds(str));
    printf("Честота на буквите: \n");
    countLertters(str);
    printf("въведете втори низ за сравнение: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Резултат от сравнение: %d\n", compareString(str, str2));
    printf("брой гласни: %d\n", countVowels(str));
    toUpperCase(str);
    printf("низ с главни букви: %s\n", str);
}