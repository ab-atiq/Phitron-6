/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        int cnt = 0;

        // Use the special attack once if it can be used
        if (h >= y)
        {
            h -= y;
            cnt++;
        }

        // Use the normal attack until the monster is defeated
        while (h > 0)
        {
            h -= x;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}