// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;
        int flag = 1; // assume n is prime

        // solution 1 - TLE for large n
        // for (int i = 2; i < n; i++)
        // {
        //     if (n % i == 0)
        //     {
        //         flag = 0;
        //         break;
        //     }
        // }

        // solution 2 - Optimized approach
        if (n == 1)
        {
            flag = 0; // 1 is not a prime number
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}