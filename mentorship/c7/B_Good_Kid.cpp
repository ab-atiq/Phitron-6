/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1873/problem/B

// Time: O(t × n²) → at most 10⁴ × 9 × 9 (very small)
// Memory: O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            a[i]++; // add 1 to exactly one digit

            long long product = 1;
            for (int j = 0; j < n; j++)
            {
                product *= a[j];
            }

            ans = max(ans, product);
            a[i]--; // restore
        }

        cout << ans << '\n';
    }

    return 0;
}

// another approach - optimized
// Time: O(t × n log n) → at most 10⁴ × 9 × 3.17 (very small)
// Memory: O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        // minimum element index value increase by 1
        // int min_val = INT_MAX, min_idx = -1;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        //     if (arr[i] < min_val)
        //     {
        //         min_val = arr[i];
        //         min_idx = i;
        //     }
        // }
        // arr[min_idx] = arr[min_idx] + 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        arr[0] += 1; // Add 1 to the smallest element

        // product calculation
        int mul = 1;
        for (int i = 0; i < n; i++)
        {
            mul *= arr[i];
        }
        cout << mul << endl;
    }
    return 0;
}