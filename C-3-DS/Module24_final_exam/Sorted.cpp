#include <iostream>
#include <list>

using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int N;
        cin >> N;
        list<int> l;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            l.push_back(x);
        }
        l.sort();
        l.unique();
        for (auto i = l.begin(); i != l.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        set<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        // set print - 1
        // for (auto x : s)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        // set print - 2
        // for (auto it = s.begin(); it != s.end(); ++it)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;

        // set print - 3
        for (const auto &x : s)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}