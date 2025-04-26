#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str); // ATIQUR

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count); // 6

    // length of string using strlen function
    int length = strlen(str); // 6
    printf("%d", length);     // 6

    return 0;
}