#include <bits/stdc++.h>
using namespace std;

int solveOne()
{
    int n, m, L;
    cin >> n >> m >> L;

    vector<pair<int, int>> hurdles(n);
    for (int i = 0; i < n; i++)
        cin >> hurdles[i].first >> hurdles[i].second;

    vector<pair<int, int>> powerups(m);
    for (int i = 0; i < m; i++)
        cin >> powerups[i].first >> powerups[i].second;

    int idx = 0;            // pointer for powerups
    priority_queue<int> pq; // max-heap for available power-ups

    long long pos = 1, power = 1;
    int used = 0;

    // add a dummy hurdle at end [L, L]
    hurdles.push_back({L, L});
    int hidx = 0;

    while (hidx < (int)hurdles.size())
    {
        int target = hurdles[hidx].first; // need to jump before this hurdle
        int hurdle_end = hurdles[hidx].second;

        // while we cannot even reach the start of this hurdle
        while (pos + power < target)
        {
            while (idx < m && powerups[idx].first <= pos)
            {
                pq.push(powerups[idx].second);
                idx++;
            }
            if (pq.empty())
                return -1;
            power += pq.top();
            pq.pop();
            used++;
        }

        // we can reach at least `target`. Jump over hurdle
        pos = max(pos, (long long)hurdle_end + 1);

        // collect power-ups at new pos
        while (idx < m && powerups[idx].first <= pos)
        {
            pq.push(powerups[idx].second);
            idx++;
        }

        if (pos >= L)
            break;
        hidx++;
    }

    return used;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cout << solveOne() << "\n";
    }
}
