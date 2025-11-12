// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // char str[101];
    char str[n + 1]; // +1 for null terminator - memory limit exceeded
    scanf("%s", str);
    // solution 1 - selection sort - time limit exceeded
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min_index = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (str[j] < str[min_index])
    //         {
    //             min_index = j;
    //         }
    //     }
    //     // Swap characters
    //     char temp = str[i];
    //     str[i] = str[min_index];
    //     str[min_index] = temp;
    // }
    // printf("%s\n", str);

    // solution 2 - frequency array
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        // while loop
        // while (freq[i]--)
        // {
        //     putchar(i + 'a');
        // }
        // for (int j = 0; j < freq[i]; j++) // for loop
        for (int j = 1; j <= freq[i]; j++) // for loop - 1 indexed
        {
            // putchar(i + 'a');
            printf("%c", i + 'a');
        }
    }
    // putchar('\n');
    printf("\n");
    return 0;
}

// This problem memory limit is 4MB. So, we can not store in char array or string of size 10^6(1MB) or more.

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int freq[26] = {0};
    char c;

    // Read one char at a time and count
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &c); // space before %c skips whitespace/newlines
        freq[c - 'a']++;
    }

    // Output sorted string
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            putchar('a' + i);
        }
    }

    return 0;
}

// 
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // consume the newline after the integer input
    int freq[26] = {0};
    char c;

    for (int i = 0; i < N; i++) {
        scanf("%c", &c);
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            putchar('a' + i);
        }
    }

    return 0;
}
