#include <stdio.h>
#include <string.h>
int main()
{
    char str[101], strCpy[101];
    scanf("%s", &str);
    strcpy(strCpy, str);
    strCpy[strlen(str) - 1] = str[0];
    strCpy[0] = str[strlen(str) - 1];
    if (strcmp(str, strCpy) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}