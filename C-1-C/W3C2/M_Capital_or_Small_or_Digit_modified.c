/*
#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if ('0' <= x && x <= '9')
    {
        printf("IS DIGIT");
    }
    else if ('a' <= x && x <= 'z')
    {
        printf("IS SMALL");
    }
    else if ('A' <= x && x <= 'Z')
    {
        printf("IS CAPITAL");
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char s[10001];
        scanf("%s", s);
        int cnt_cap = 0, cnt_sml = 0, cnt_dig = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                cnt_dig++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt_sml++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cnt_cap++;
            }
        }
        printf("%d %d %d\n", cnt_cap, cnt_sml, cnt_dig);
    }
    return 0;
}