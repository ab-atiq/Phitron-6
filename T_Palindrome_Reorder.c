/* #include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    int count[26] = {0};

    scanf("%s", s);
    int len = strlen(s);

    // Count frequency of each character
    for (int i = 0; i < len; i++) {
        count[s[i] - 'A']++;
    }

    int oddCount = 0;
    int oddCharIndex = -1;

    // Count how many characters have odd frequency
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            oddCount++;
            oddCharIndex = i;
        }
    }

    if (oddCount > 1) {
        printf("NO SOLUTION\n");
        return 0;
    }

    char firstHalf[1000001], secondHalf[1000001];
    int pos = 0;

    // Build first half of palindrome
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i] / 2; j++) {
            firstHalf[pos++] = 'A' + i;
        }
    }
    firstHalf[pos] = '\0';

    // Print first half
    printf("%s", firstHalf);

    // Print middle part if any character has odd frequency
    if (oddCharIndex != -1) {
        for (int i = 0; i < count[oddCharIndex]; i++) {
            printf("%c", 'A' + oddCharIndex);
        }
    }

    // Print reverse of first half
    for (int i = pos - 1; i >= 0; i--) {
        printf("%c", firstHalf[i]);
    }

    printf("\n");
    return 0;
}
 */

#include <stdio.h>
#include <string.h>

char input[1001000];
int count[26];

int main()
{
    scanf("%s", input);
    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        count[input[i] - 'A']++;
    }

    int odd_count = 0, odd_index = -1;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
        {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1)
    {
        printf("NO SOLUTION\n");
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i] / 2; j++)
        {
            printf("%c", 'A' + i);
        }
    }

    if (odd_index != -1)
    {
        for (int j = 0; j < count[odd_index]; j++)
        {
            printf("%c", 'A' + odd_index);
        }
    }

    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < count[i] / 2; j++)
        {
            printf("%c", 'A' + i);
        }
    }

    printf("\n");
    return 0;
}
