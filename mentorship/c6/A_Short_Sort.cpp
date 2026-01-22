/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/contest/1873/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
