#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int len = strlen(s);
    // int consonat_cnt = 0;
    int vowels_cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels_cnt++;
            // continue;
        }
        // consonat_cnt++;
    }
    // printf("%d\n", consonat_cnt);
    printf("%d\n", vowels_cnt);
    return 0;
}