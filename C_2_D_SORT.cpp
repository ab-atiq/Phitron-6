#include <bits/stdc++.h>
using namespace std;

struct Point
{
    long long x, y;
};

bool cmp(const Point &a, const Point &b)
{
    if (a.x != b.x)
        return a.x < b.x; // smaller x comes first
    return a.y > b.y;     // if same x, larger y comes first
}

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
        vector<Point> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i].x >> points[i].y;
        }

        sort(points.begin(), points.end(), cmp);

        for (auto &p : points)
        {
            cout << p.x << " " << p.y << "\n";
        }
    }
    return 0;
}
