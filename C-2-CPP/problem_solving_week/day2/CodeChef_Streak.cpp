/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/CS2023_STK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<long long> A(N), B(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        int om_streak = 0, addy_streak = 0;
        int om_max = 0, addy_max = 0;

        // Count Om's streak
        for (int i = 0; i < N; i++)
        {
            if (A[i] > 0)
            {
                om_streak++;
                om_max = max(om_max, om_streak);
            }
            else
            {
                om_streak = 0;
            }
        }

        // Count Addy's streak
        for (int i = 0; i < N; i++)
        {
            if (B[i] > 0)
            {
                addy_streak++;
                addy_max = max(addy_max, addy_streak);
            }
            else
            {
                addy_streak = 0;
            }
        }

        if (om_max > addy_max)
        {
            cout << "Om\n";
        }
        else if (addy_max > om_max)
        {
            cout << "Addy\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }

    return 0;
}
