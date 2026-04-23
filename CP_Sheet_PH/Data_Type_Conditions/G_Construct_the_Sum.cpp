/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n, s;
        cin >> n >> s;

        long long max_sum = n * (n + 1) / 2;

        if (s > max_sum)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> ans;

        for (long long i = n; i >= 1; i--)
        {
            if (i <= s)
            {
                ans.push_back(i);
                s -= i;
            }
        }

        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}