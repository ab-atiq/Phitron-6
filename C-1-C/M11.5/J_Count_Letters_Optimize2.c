// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include <stdio.h>
#include <string.h>

#define SIZE 10000001 // 10^7 + 1

int main()
{
    char S[SIZE];
    scanf("%s", S);      // Read the entire string at once
    int count[26] = {0}; // Initialize all counts to 0

    // Count each character in the string
    for (int i = 0; S[i] != '\0'; i++)
    {
        count[S[i] - 'a']++; // Increment count for the character
    }

    // Print counts in alphabetical order
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}