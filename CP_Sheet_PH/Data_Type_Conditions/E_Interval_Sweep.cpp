/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) // for 0 0 case, output will be "NO"
    {
        cout << "NO\n";
    }
    // if (abs(a - b) <= 1 && a != b) // wrong 78 78
    else if (abs(a - b) <= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}