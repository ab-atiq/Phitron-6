/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i += k)
    {
        int min_val = v[i]; // Every group minimum value find
        for (int j = i; j < i + k && j < n; j++)
        {
            min_val = min(min_val, v[j]);
        }
        cout << min_val << " ";
    }
    return 0;
}