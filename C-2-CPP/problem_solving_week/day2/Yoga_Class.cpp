/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/YOGACLASS

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        // if (x >= y / 2) // int division getting wrong
        if (x * 2 >= y)
        {
            cout << n * x << "\n";
        }
        else
        {
            cout << (n / 2) * y + (n % 2) * x << "\n";
        }
    }
    return 0;
}