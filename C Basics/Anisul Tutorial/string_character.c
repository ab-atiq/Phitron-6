#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="Abul Bashar Atiqur Rahman";
    int i,k;


    // length of string using loop
    for (i = 0; string[i] != '\0'; ++i);
    printf("Length of the string: %d\n", i);


    // string length use library function. strlen() does not count '\0' character.
    int len = strlen(string);
    printf("Size of String is : %zu\n",len);

    // all character
    for(k=0; k<strlen(string); k++)
    {
        printf("%c \t",string[k]);
    }

    return 0;
}
