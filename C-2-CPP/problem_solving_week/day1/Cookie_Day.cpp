/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/ADVITIYA3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        bool any_poss_provide = false;
        int min_waste = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a >= k)
            {
                any_poss_provide = true;
                min_waste = min(min_waste, a % k);
            }
        }
        if (any_poss_provide)
        {
            cout << min_waste << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}