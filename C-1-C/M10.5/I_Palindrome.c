// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    // method 1: first and last value check
    // int sz = strlen(s); // strlen return character length from 0 index to before '\0'
    // for (int i = 0; i < sz; i++)
    // {
    //     if (s[i] != s[sz - 1 - i]) // if first and last value does not match then that is Not palindrome.
    //     {
    //         printf("NO");
    //         return 0;
    //     }
    // }
    // printf("YES");

    // method 2: two pointer technique
    // int n = strlen(s);
    // int i = 0, j = n - 1;
    // while (i < j)
    // {
    //     if (s[i] != s[j])
    //     {
    //         printf("NO");
    //         return 0;
    //     }
    //     i++;
    //     j--;
    // }
    // printf("YES");

    // methode 3: array or char array reverse using two pointer then check
    int n = strlen(s);
    char copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        copy_arr[i] = s[i];
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        int tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }

    // check copy array and array. if same then palindrome
    int flag = 1; // 1 means palindrome
    for (int i = 0; i < n; i++)
    {
        if (s[i] != copy_arr[i])
        {
            flag = 0;
        }
    }
    // if (flag)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }
    printf("%s", flag ? "YES" : "NO");
    return 0;
}