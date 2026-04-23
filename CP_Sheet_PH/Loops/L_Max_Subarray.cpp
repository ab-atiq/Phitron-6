/*
Constraints Insight
    N ≤ 100
    T ≤ 5

So worst case subarrays per test: N(N+1)/2≤5050

This is small → we can safely use O(N³) or optimized O(N²).

Approach:
We generate all subarrays using:
    Start index i
    End index j

While expanding subarray:
    Keep track of maximum so far
    Print it immediately

Efficient Approach (O(N²))

Instead of recomputing max each time, we maintain it while expanding.
*/

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> a(N);

        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        vector<int> ans;

        // generate all subarrays
        for (int i = 0; i < N; i++)
        {
            int mx = a[i];

            for (int j = i; j < N; j++)
            {
                mx = max(mx, a[j]);
                ans.push_back(mx);
            }
        }

        // print result
        for (int i = 0; i < (int)ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
} */

/*
Time: O(N³) (because printing each subarray takes O(length))
Works fine for N ≤ 100
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // store answers
        // vector<int> ans;

        // subarray size from small to big
        for (int len = 1; len <= n; len++)
        {
            for (int i = 0; i + len - 1 < n; i++)
            {
                int mx = a[i];

                for (int j = i; j < i + len; j++)
                {
                    mx = max(mx, a[j]);
                }

                // ans.push_back(mx);
                cout << mx << " ";
            }
        }

        // print in one line
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     cout << ans[i] << " ";
        // }
        cout << "\n";
    }

    return 0;
}