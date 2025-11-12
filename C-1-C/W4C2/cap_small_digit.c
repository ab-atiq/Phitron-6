// Count the number of capital letters, small letters, and digits in given strings.
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

// Alternate implementation
#include <stdio.h>

// no return, parameter

int count_cap_small_dig(char str[])
{
    int cnt_cap = 0, cnt_small = 0, cnt_dig = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z')
        {
            // small
            cnt_small++;
        }
        else if ('A' <= ch && ch <= 'Z')
        {
            // capital
            cnt_cap++;
        }
        else if ('0' <= ch && ch <= '9')
        {
            // digit
            cnt_dig++;
        }
    }
    printf("%d %d %d\n", cnt_cap, cnt_small, cnt_dig);
    // arr[3];
    // arr[0]=cnt_cap;
    // arr[1]=cnt_small;
    // arr[2]=cnt_dig;
}

// no return, parameter (pass br reference to calculate cnt_cap, cnt_small, cnt_dig) - Home work

// code
void count_cap_small_dig_ref(char str[], int *cnt_cap, int *cnt_small, int *cnt_dig)
{
    *cnt_cap = 0;
    *cnt_small = 0;
    *cnt_dig = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ('a' <= ch && ch <= 'z')
        {
            // small
            (*cnt_small)++;
        }
        else if ('A' <= ch && ch <= 'Z')
        {
            // capital
            (*cnt_cap)++;
        }
        else if ('0' <= ch && ch <= '9')
        {
            // digit
            (*cnt_dig)++;
        }
    }
}

int main()
{
    char str[100005];
    scanf("%s", str);
    // printf("%s", str);

    // solve - 1
    count_cap_small_dig(str);

    // solve - 2 (using pass by reference)
    int cnt_cap, cnt_small, cnt_dig;
    count_cap_small_dig_ref(str, &cnt_cap, &cnt_small, &cnt_dig);
    printf("%d %d %d\n", cnt_cap, cnt_small, cnt_dig);

    return 0;
}