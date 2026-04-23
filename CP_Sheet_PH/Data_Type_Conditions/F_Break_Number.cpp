/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F

#include <bits/stdc++.h>
using namespace std;
int count_divide(long long int x)
{
    int cnt = 0;
    while (x % 2 == 0)
    {
        cnt++;
        x /= 2;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int mx_divide = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        // cout << count_divide(x) << endl;
        if (mx_divide < count_divide(x))
        {
            mx_divide = count_divide(x);
        }
    }
    cout << mx_divide << endl;
    return 0;
}