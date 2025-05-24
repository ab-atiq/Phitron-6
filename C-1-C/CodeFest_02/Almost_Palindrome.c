#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char str[101];
        scanf("%s", str);
        int fre[26] = {0};
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            fre[str[i] - 'a']++;
        }

        int cnt_odd_frequency_character = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 1)
            {
                cnt_odd_frequency_character++;
            }
        }

        if (cnt_odd_frequency_character == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", cnt_odd_frequency_character - 1);
        }
    }

    return 0;
}