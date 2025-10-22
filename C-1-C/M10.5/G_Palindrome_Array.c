// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // method 1: first and last value check
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr[n - 1 - i]) // if first and last value does not match then that is Not palindrome.
    //     {
    //         printf("NO");
    //         return 0;
    //     }
    // }
    // printf("YES");

    // method 2: two pointer technique
    // int i = 0, j = n - 1;
    // while (i < j)
    // {
    //     if (arr[i] != arr[j])
    //     {
    //         printf("NO");
    //         return 0;
    //     }
    //     i++;
    //     j--;
    // }
    // printf("YES");

    // methode 3: array reverse using two pointer then check
    int copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        copy_arr[i] = arr[i];
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }

    // check copy array and array. if same then palindrome
    int flag = 1; // 1 means palindrome
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != copy_arr[i])
        {
            flag = 0;
        }
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}