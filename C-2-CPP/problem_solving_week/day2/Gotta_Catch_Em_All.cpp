/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/GCEA

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total_cost = 0;
        for (int i = 0; i < n; i++)
        {
            int op1 = arr[i] * x; // cost if we buy normal pekoballs
            int op2 = y;          // cost if we buy master pekoballs
            total_cost += min(op1, op2);
        }
        cout << total_cost << endl;
    }
    return 0;
}