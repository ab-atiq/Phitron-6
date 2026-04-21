// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) // n>=2
    {
        int x = i; // copy of i to x
        int flag = 0;
        for (int j = 2; j < x; j++)
        {
            if (x % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            // prime number
            cout << x << " ";
        }
        else
        {
            // not a prime number
        }
    }
    return 0;
}