#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        int64 a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;

        // Build prefix positions for one cycle (include starting point)
        vector<pair<int64, int64>> pref;
        pref.reserve(n + 1);
        int64 x = 0, y = 0;
        pref.emplace_back(x, y);
        for (char c : s)
        {
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else if (c == 'W')
                x--;
            pref.emplace_back(x, y);
        }

        int64 dx = pref.back().first; // net displacement after one cycle
        int64 dy = pref.back().second;

        auto can_reach = [&](int64 px, int64 py) -> bool
        {
            // Want px + k*dx == a and py + k*dy == b for some integer k >= 0
            if (dx == 0 && dy == 0)
            {
                // Path is closed; only positions in one cycle are reachable
                return (px == a && py == b);
            }

            if (dx == 0 && dy != 0)
            {
                if (px != a)
                    return false;
                int64 dyNeed = b - py;
                if (dy == 0)
                    return false; // handled above, but keep guard
                if (dyNeed % dy != 0)
                    return false;
                int64 k = dyNeed / dy;
                return k >= 0;
            }

            if (dy == 0 && dx != 0)
            {
                if (py != b)
                    return false;
                int64 dxNeed = a - px;
                if (dx == 0)
                    return false; // handled above
                if (dxNeed % dx != 0)
                    return false;
                int64 k = dxNeed / dx;
                return k >= 0;
            }

            // Both dx and dy non-zero
            int64 dxNeed = a - px;
            int64 dyNeed = b - py;
            if (dxNeed % dx != 0 || dyNeed % dy != 0)
                return false;
            int64 kx = dxNeed / dx;
            int64 ky = dyNeed / dy;
            return (kx == ky && kx >= 0);
        };

        bool ok = false;
        for (auto [px, py] : pref)
        {
            if (can_reach(px, py))
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
