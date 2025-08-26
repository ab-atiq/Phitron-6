#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> teams(n);

    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].first >> teams[i].second;
    }

    sort(teams.begin(), teams.end(), cmp);

    int pk = teams[k - 1].first;
    int tk = teams[k - 1].second;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (teams[i].first == pk && teams[i].second == tk)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
