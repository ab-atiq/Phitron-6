/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, cur;
    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n == 2)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < n; i++)
        {
            cur = a + b;
            a = b;
            b = cur;
            // cout << cur << " "; // correct
            cout << b << " "; // correct as well, since b is updated to cur before the next iteration
        }
    }
    return 0;
}