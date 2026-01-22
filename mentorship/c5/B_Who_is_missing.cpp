/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc236/tasks/abc236_b

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int total_numbers = n * 4 - 1; // total numbers given
//     int arr[total_numbers];
//     for (int i = 0; i < total_numbers; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + total_numbers);
//     for (int i = 0; i < total_numbers; i += 4)
//     {
//         if (arr[i] != arr[i + 3]) // 1st and 4th are not same.
//         {
//             cout << arr[i] << endl;
//             break;
//         }
//     }
//     return 0;
// }

// solution - frequency array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total_numbers = n * 4 - 1; // total numbers given
    int freq[n + 1];               // frequency array 1 to n
    for (int i = 0; i <= n; i++)
    {
        freq[i] = 0; // initialize frequency array to 0
    }

    for (int i = 0; i < total_numbers; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] % 4 != 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// cps
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[4 * n - 1];
    for (int i = 0; i < 4 * n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int F[n + 1];
    for (int i = 1; i <= n; i++)
    {
        F[i] = 0;
    }

    for (int i = 0; i < 4 * n - 1; i++)
    {
        F[arr[i]]++;
    }

    int ans;

    for (int i = 1; i <= n; i++)
    {
        if (F[i] == 3)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}

// all unique numbers 4 multiply sum and all given sum difference
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total_numbers = n * 4 - 1; // total numbers given
    int arr[total_numbers];
    int given_sum = 0;
    for (int i = 0; i < total_numbers; i++)
    {
        cin >> arr[i];
        given_sum += arr[i];
    }
    int unique_sum = (n * (n + 1)) / 2; // sum of first n natural numbers
    int expected_sum = unique_sum * 4;  // each number appears 4 times
    int missing_number = expected_sum - given_sum;
    cout << missing_number << endl;
    return 0;
}

// same with different approach
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total_numbers = n * 4 - 1; // total numbers given
    int arr[total_numbers];
    long long given_sum = 0;
    for (int i = 0; i < total_numbers; i++)
    {
        cin >> arr[i];
        given_sum += arr[i];
    }
    long long unique_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // unique_sum += i;
        unique_sum += i * 4; // directly multiply by 4 here
    }
    // long long expected_sum = unique_sum * 4; // each number appears 4 times
    long long expected_sum = unique_sum; // already multiplied by 4
    long long missing_number = expected_sum - given_sum;
    cout << missing_number << endl;
    return 0;
}