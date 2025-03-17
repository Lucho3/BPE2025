#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
/*Primer 1*/
/*
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
*/
/*Primer 2*/
/*
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
*/

/*Zad.1*/
/*
int my_str_len(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
char input_string[] = "Hello I am Magdalena";
printf("Дължината е: %d\n", my_str_len(input_string));
*/
/*Zad.2*/
/*
bool is_delimiter(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' ;
}
int count_words(const char *text) {
    int word_count = 0;
    bool in_word = false;
    while (*text) {
        if (is_delimiter(*text)) {
            if (in_word) {
                word_count++;
                in_word = false;
            }
        } else {
        in_word = true;
        }
        text++;
    }
    if (in_word) {
        word_count++;
    }
    return word_count;
    }
int main() {
    char text[1000];
    printf("Въведете текст: ");
    fgets(text, sizeof(text), stdin);
    int word_count = count_words(text);
    printf("Броят на думите в текста е: %d\n", word_count);
*/
/*Zad.3*/
/*
#define ALPHABET_SIZE 26
int main() {
    char text[1000];
int letter_count[ALPHABET_SIZE] = {0};
printf("Въведете текст: ");
fgets(text, sizeof(text), stdin);
for (int i = 0; text[i] != '\0'; i++) {
    char current_char = tolower(text[i]);
    if (current_char >= 'a' && current_char <= 'z') {
        letter_count[current_char - 'a']++;
    }
}
printf("Брой срещания на всяка буква:\n");
for (int i = 0; i < ALPHABET_SIZE; i++) {
    if (letter_count[i] > 0) {
        printf("%c: %d\n", 'a' + i, letter_count[i]);
    }
}
*/
/*Zad.4*/
/*
int compare_strings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
return *str1 - *str2;
}
int main() {
char str1[100], str2[100];
printf("Въведете първия низ: ");
fgets(str1, sizeof(str1), stdin);
printf("Въведете втория низ: ");
fgets(str2, sizeof(str2), stdin);
str1[strcspn(str1, "\n")] = '\0';
str2[strcspn(str2, "\n")] = '\0';
int result = compare_strings(str1, str2);
if (result == 0) {
    printf("Двата низа са еднакви.\n");
}
else if (result < 0) {
    printf("Първият низ е по-малък.\n");
}
else {
    printf("Първият низ е по-голям.\n");
}
*/
/*Zad.5*/
/*
int count_vowels(const char *str) {
int count = 0;
for (int i = 0; str[i] != '\0'; i++) {
    char current_char = tolower(str[i]);
    if (current_char == 'a' || current_char == 'e' || current_char == 'i' ||
        current_char == 'o' || current_char == 'u') {
        count++;
    }
}
return count;
}
int main(){
char text[1000];
printf("Въведи текст: ");
fgets(text,sizeof(text),stdin);
text[strcspn(text, "\n")]='\0';
int vowel_count=count_vowels(text);
printf("Броят на гласните букви е: %d\n",vowel_count);
*/

/*Zad.6*/
/*
void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}
int main() {
char text[1000];
printf("Въведете текст: ");
fgets(text, sizeof(text), stdin);
text[strcspn(text, "\n")] = '\0';
to_uppercase(text);
printf("Текстът с големи букви: %s\n", text);
*/
    return 0;
}
