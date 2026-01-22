/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/TOURIST

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int min_dist = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            // manhattan distance
            int dist = abs(x - a) + abs(y - b);
            min_dist = min(min_dist, dist);
        }
        cout << min_dist << endl;
    }
    return 0;
}