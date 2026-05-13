/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/1722/C

// xpsc - map of vector solution
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
        int n, m = 3;
        cin >> n;

        map<string, vector<int>> mp;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> points(m + 1, 0); // m players
        for (auto [x, y] : mp)
        {
            if (y.size() == 1)
            {
                points[y[0]] += 3;
            }
            else if (y.size() == 2)
            {
                points[y[0]] += 1;
                points[y[1]] += 1;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            cout << points[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}