/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/MINBOTTLES

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        int total_liter = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total_liter += a;
        }
        // ceil division to find minimum bottles
        int bottles = (total_liter + x - 1) / x;
        cout << bottles << endl;
    }
    return 0;
}