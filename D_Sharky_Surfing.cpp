#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long L;
        cin >> n >> m >> L;

        vector<pair<long long, long long>> hurdles(n);
        for (int i = 0; i < n; i++)
        {
            cin >> hurdles[i].first >> hurdles[i].second; // l, r
        }

        vector<pair<long long, long long>> powerups(m);
        for (int i = 0; i < m; i++)
        {
            cin >> powerups[i].first >> powerups[i].second; // x, v
        }

        int hurdleIdx = 0, puIdx = 0;
        long long pos = 1, k = 1;
        int taken = 0;
        priority_queue<long long> pq; // max-heap of power-up values
        bool possible = true;

        while (pos < L)
        {
            long long reach = pos + k; // naive max reach

            // If next hurdle is within reach and blocks us
            if (hurdleIdx < n && hurdles[hurdleIdx].first <= reach)
            {
                if (hurdles[hurdleIdx].first <= pos)
                {
                    // stuck at or before hurdle start
                    possible = false;
                    break;
                }
                reach = min(reach, hurdles[hurdleIdx].first - 1);
            }

            // Add all power-ups within reachable positions
            while (puIdx < m && powerups[puIdx].first <= reach)
            {
                pq.push(powerups[puIdx].second);
                puIdx++;
            }

            if (reach >= L)
                break; // can reach the end now

            // If we can't move forward
            if (reach == pos)
            {
                if (pq.empty())
                {
                    possible = false;
                    break;
                }
                // Take largest available boost
                k += pq.top();
                pq.pop();
                taken++;
                continue;
            }

            pos = reach; // move forward

            // If we land just before/at a hurdle, skip it
            if (hurdleIdx < n && pos == hurdles[hurdleIdx].second)
            {
                pos = hurdles[hurdleIdx].second + 1;
                hurdleIdx++;
            }
        }

        if (possible)
            cout << taken << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
