// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char s[101]; // Max length 100 + null terminator
        scanf("%s", &s);
        int len = strlen(s);
        if (len > 10)
        {
            // Abbreviate: first char + (len-2) + last char
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}