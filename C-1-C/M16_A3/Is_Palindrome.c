#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    // method 1
    // int n = strlen(s);
    // int i = 0, j = n - 1;
    // while (i < j)
    // {
    //     if (s[i] != s[j])
    //     {
    //         // printf("NO");
    //         return 0;
    //     }
    //     i++;
    //     j--;
    // }
    // // printf("YES");
    // return 1;

    // method 2: check first and last of string
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}