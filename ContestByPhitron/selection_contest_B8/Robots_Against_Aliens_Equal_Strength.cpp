/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/robots-against-aliens-equal-strength

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int row_has_zero[n + 1] = {0};
    int row_total_power[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                row_has_zero[i] = 1;
            }
            else
            {
                row_total_power[i] += x;
            }
        }
    }

    // Edge case: If there's only one row, it's trivially "YES"
    if (n == 1)
    {
        cout << "YES" << endl;
        return 0;
    }

    // Find the maximum common power among rows without zeros - this problem statement confirms that at least one such row exists that has no zeros.
    int max_common_power = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (row_total_power[i] < max_common_power && row_has_zero[i] == 0)
        {
            max_common_power = row_total_power[i];
        }
    }
    // cout << "Debug: Max Common Power: " << max_common_power << endl;

    // Check if all rows without zeros have the same total power as max_common_power
    bool all_row_strength_equal = true;
    for (int i = 1; i <= n; i++)
    {
        if (row_has_zero[i] == 0 && row_total_power[i] != max_common_power)
        {
            all_row_strength_equal = false;
            // cout << "Debug: Row " << i << " failed the check." << endl;
            break;
        }
    }

    
    if (all_row_strength_equal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}