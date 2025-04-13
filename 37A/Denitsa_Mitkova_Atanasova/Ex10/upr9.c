#include <stdio.h>  
#include <ctype.h>  

// зад1
int stringLength(const char* str) 
{  
    int length = 0;  
    while (str[length] != '\0') 
    {  
        length++;  
    }  
    return length;  
}  

// зад2  
int countWords(const char* str) 
{  
    int count = 0, inWord = 0;  
    while (*str) 
    {  
        if (isspace(*str)) 
        {  
            inWord = 0; // Вън от дума  
        }
        else if (inWord == 0) 
        {  
            inWord = 1; // Вътре в дума  
            count++;  
        }  
        str++;  
    }  
    return count;  
}  

// зад3 
void countLetters(const char* str) 
{  
    int letters[26] = {0}; // За всяка буква от a до z  
    while (*str) 
    {  
        if (isalpha(*str)) 
        {  
            letters[tolower(*str) - 'a']++;  
        }  
        str++;  
    }  
    for (int i = 0; i < 26; i++) 
    {  
        if (letters[i] > 0) 
        {  
            printf("%c: %d\n", i + 'a', letters[i]);  
        }  
    }  
}  

// зад4
int stringCompare(const char* str1, const char* str2) 
{  
    while (*str1 && (*str1 == *str2)) 
    {  
        str1++;  
        str2++;  
    }  
    return *(unsigned char*)str1 - *(unsigned char*)str2;  
}  

// зад5  
int countVowels(const char* str) 
{  
    int count = 0;  
    while (*str) 
    {  
        char ch = tolower(*str);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {  
            count++;  
        }  
        str++;  
    }  
    return count;  
}  

// зад6  
void toUpperCase(char* str) 
{  
    while (*str) 
    {  
        *str = toupper(*str);  
        str++;  
    }  
}  

int main() 
{  
    const char* testString = "Здр. това е пробен низ.";  
      
    printf("Дължина на низа: %d\n", stringLength(testString));  
    printf("Брой на думите: %d\n", countWords(testString));  
    printf("Честота на буквите:\n");  
    countLetters(testString);  
    const char* str1 = "Hello";  
    const char* str2 = "Hello";  
    printf("Сравняване на '%s' и '%s': %d\n", str1, str2, stringCompare(str1, str2));  
    printf("Брой на гласните: %d\n", countVowels(testString));  
    char strToChange[] = "hello world!";  
    toUpperCase(strToChange);  
    printf("След замяна: %s\n", strToChange);  
    return 0;  
}  