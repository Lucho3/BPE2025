#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*ZAD1
    int c = 0;
    char str[] = "Test";
    while (str[c] != '\0') {
        c++;
    }
    printf("%d", c);
    */

    /*ZAD2
    int c = 0;
    char str[] = "TEST ZA 2";
    for (char *i = str; *i != '\0'; i++) {
            if (*i == ' '){
                c++;
            }

    }
    printf("%d", c);
    */

        /*zad3
    int nums[26] = {0};
    char str[] = "dsgdgsgdfhdfhd";
    for( char *c = str; *c != '\0'; ++c){
        nums[*c - 97] ++;
    }
    for(int i = 0;i < 26; i++){
        printf("%c: %d\n", i + 97, nums[i]);
    }
    return 0;
    */

    /*ZAD4
    char str1[] = "hui";
    char str2[] = "putka";

    int i = strcmp(str1, str2);

    if (i == 0) {
        printf("ya\n");
    } else {
        printf("nein\n");
    }

    return 0;
    */
    /*ZAD5
    int c = 0;
    char str[] = "hui";
    for (char *i = str; *i != '\0'; i++) {
            if (*i == 'a' || *i == 'o' || *i == 'u' || *i == 'e' || *i == 'i' || *i == 'y'){
                c++;
            }

}
    printf("%d", c);
*/

    //ZAD6
    char str[] = "Zdravey, kak si? abcdefg";
    char *ptr = str;
    for (; *ptr != '\0'; ptr++) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr -= 32;
        }
    }
    printf("%s\n", str);

    return 0;
}
