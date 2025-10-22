// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    // gets(s);
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        // else if (s[i] == ',')
        else
        {
            printf(" ");
        }
    }

    return 0;
}