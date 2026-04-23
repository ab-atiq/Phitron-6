/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long l, r;
        cin >> l >> r;

        long long L = min(l, r);
        long long R = max(l, r);

        long long sum = (R * (R + 1) / 2) - ((L - 1) * L / 2);
        cout << sum << '\n';
    }
    return 0;
}