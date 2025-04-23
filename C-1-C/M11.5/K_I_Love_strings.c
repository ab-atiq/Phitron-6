#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);

        int len_s = strlen(s);
        int len_t = strlen(t);

        // both string print
        int i = 0, j = 0;
        while (i < len_s && j < len_t)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }

        // s string remaining print
        while (i < len_s)
        {
            printf("%c", s[i]);
            i++;
        }

        // t string remaining print
        while (j < len_t)
        {
            printf("%c", t[j]);
            j++;
        }
        printf("\n"); // test case seperated by new line
    }

    return 0;
}