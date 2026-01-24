/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        if (l == 1)
        {
            // l = 2;
            l++;
        }
        if (r == n)
        {
            // r = n - 1;
            r--;
        }
        for (int i = l; i <= r; i++)
        {
            if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

// optimized approach of this solution
// time complexity: O(n + q)
// space complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> prefixCount(n + 1, 0);
    for (int i = 2; i < n; i++)
    {
        prefixCount[i] = prefixCount[i - 1];
        if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
        {
            prefixCount[i]++;
        }
    }
    prefixCount[n] = prefixCount[n - 1]; // last element will be same as n-1 th element

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            l = 2;
        }
        if (r == n)
        {
            r = n - 1;
        }
        int cnt = prefixCount[r] - prefixCount[l - 1];
        cout << cnt << endl;
    }
    return 0;
}

// /*
// ________________________
// |                      |
// |     AB Atiq          |
// |______________________|
// */

// // Problem link:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n + 1];
//     for (int i = 1; i <= n; i++) // 10^5
//     {
//         cin >> arr[i];
//     }

//     // 10^10
//     int q;
//     cin >> q;
//     while (q--) // 10^5
//     {
//         int l, r;
//         cin >> l >> r;
//         int cnt = 0;
//         if (l == 1)
//         {
//             // l++;
//             // l = l + 1;
//             l = 2;
//         }
//         if (r == n)
//         {
//             // r--;
//             r = n - 1;
//         }
//         for (int i = l; i <= r; i++) // 10^5
//         {
//             if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
//             {
//                 cnt++;
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }

//
// int prefixCount[100005];
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++) // 10^5
    {
        cin >> arr[i];
    }

    // int prefixCount[n + 1];
    vector<int> prefixCount(n + 1, 0);
    // prefixCount[1] = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        int flag = 0;
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            flag = 1;
        }

        prefixCount[i] = prefixCount[i - 1] + flag;
    }
    prefixCount[n] = prefixCount[n - 1];

    int q;
    cin >> q;
    while (q--) // 10^5
    {
        int l, r;
        cin >> l >> r;

        // if (l == 1)
        // {
        //     // l++;
        //     // l = l + 1;
        //     l = 2;
        // }
        // TC= O(1)
        cout << prefixCount[r] - prefixCount[l - 1] << endl;
    }
    return 0;
}