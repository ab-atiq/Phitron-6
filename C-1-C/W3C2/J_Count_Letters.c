#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000001]; // 1e7 + 1 for null terminator
    scanf("%s", str);

    int fre[26] = {0}; // Array to store counts of each letter

    // for (int i = 0; str[i] != '\0'; i++) // okay
    // for (int i = 0; i < strlen(str); i++) // time limit exceeded
    int len = strlen(str);
    for (int i = 0; i < len; i++) // time limit exceeded
    {
        fre[str[i] - 'a']++; // Increment the count for the letter
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0) // Skip letters that are not present in the string
            continue;
        printf("%c : %d\n", 'a' + i, fre[i]); // Print the letter and its count
    }
    return 0;
}