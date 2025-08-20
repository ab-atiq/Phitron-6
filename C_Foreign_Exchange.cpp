#include <bits/stdc++.h>
using namespace std;

struct PairHash
{
    size_t operator()(const pair<int, int> &p) const
    {
        return hash<long long>()(((long long)p.first << 32) ^ p.second);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<pair<int, int>, int, PairHash> mp;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            mp[{a, b}]++;
        }

        bool ok = true;
        for (auto &entry : mp)
        {
            auto p = entry.first;
            int countAB = entry.second;
            int countBA = mp[{p.second, p.first}];
            if (countAB != countBA)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
