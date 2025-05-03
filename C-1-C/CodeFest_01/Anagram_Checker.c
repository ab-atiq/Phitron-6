#include <stdio.h>
#include <string.h>

int main()
{
    char word1[101], word2[101];
    scanf("%s %s", word1, word2);

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 != len2)
    {
        printf("No\n");
        return 0;
    }

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        count1[word1[i] - 'a']++;
        count2[word2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}