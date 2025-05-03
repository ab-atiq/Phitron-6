#include <stdio.h>
#include <string.h>

int main()
{
    char S[78]; // 77 characters + 1 for null terminator
    scanf("%s", S);

    int count[26] = {0}; // Initialize all counts to 0

    for (int i = 0; i < 77; i++) // strlen(S) == 77 max characters
    {
        count[S[i] - 'a']++; // Increment the count for the corresponding letter
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 2)
        {
            printf("%c\n", 'a' + i);
            break;
        }
    }

    return 0;
}