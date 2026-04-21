/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    // long form
    // if (r1 < l2)
    // {
    //     cout << -1 << endl;
    // }
    // else if (r2 < l1)
    // {
    //     cout << -1 << endl;
    // }
    // short form
    if (r1 < l2 || r2 < l1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(l1, l2) << " " << min(r1, r2) << endl;
    }
    return 0;
}