/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1669/problem/B

// Time: O(n) per test case
// Space: O(n)

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

        vector<int> freq(n + 1, 0);
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;

            // If this value appears 3 times, store it
            if (freq[x] == 3 && ans == -1)
            {
                ans = x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

// using array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n], fre[n + 1];
        for (int i = 1; i <= n; i++)
        {
            fre[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            fre[arr[i]]++;
        }
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (fre[i] >= 3)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

// Time: O(n log n) (because map)
// Space: O(n)
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

        map<int, int> mp;
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;

            if (mp[x] == 3 && ans == -1)
            {
                ans = x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

// Average Time: O(n)
// Worst Case: O(n²) (rare, hash collision)
// Space: O(n)
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

        unordered_map<int, int> mp;
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;

            if (mp[x] == 3 && ans == -1)
            {
                ans = x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
