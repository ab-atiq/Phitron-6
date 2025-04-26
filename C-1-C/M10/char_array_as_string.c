#include <stdio.h>
int main()
{
    char str[5];       // 4 char + 1 null character
    scanf("%s", str);  // A T I Q U R // if %s find space then it will stop
    printf("%s", str); // A
    scanf("%s", str);  // ATIQUR = {'A', 'T', 'I', 'Q', 'U', 'R', '\0'} // we take 5 char in str but we take 6 char in input. it is possible for OS. but, logically after 4 char it will stop and add one null character.
    printf("%s", str); // ATIQUR

    // single char input
    char str1[5]; // 4 char + 1 null character
    scanf("%c", str1); // ATIQUR 
    printf("%c", str1); // A
    return 0;
}