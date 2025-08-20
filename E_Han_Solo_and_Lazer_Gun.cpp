#include <bits/stdc++.h>
using namespace std;

int mygcd(int a, int b)
{
    if (b == 0)
        return abs(a);
    return mygcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int x0, y0;
    cin >> n >> x0 >> y0;

    vector<pair<int, int>> slopes;
    slopes.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int dx = x - x0;
        int dy = y - y0;

        int g = mygcd(dx, dy);
        dx /= g;
        dy /= g;

        // Normalize slope sign
        if (dx < 0)
        {
            dx = -dx;
            dy = -dy;
        }
        else if (dx == 0)
        {
            dy = 1; // vertical line
        }

        slopes.push_back({dx, dy});
    }

    sort(slopes.begin(), slopes.end());

    int unique_count = 0;
    for (int i = 0; i < (int)slopes.size(); i++)
    {
        if (i == 0 || slopes[i] != slopes[i - 1])
        {
            unique_count++;
        }
    }

    cout << unique_count << "\n";
    return 0;
}
