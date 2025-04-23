#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int fre[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        fre[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}