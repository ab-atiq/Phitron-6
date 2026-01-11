/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc304/tasks/abc304_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int sz = n.size();
    if (sz <= 3)
    {
        cout << n << endl;
    }
    else
    {
        cout << n[0] << n[1] << n[2];
        for (int i = 3; i < sz; i++)
        {
            cout << "0";
        }
    }
    return 0;
}