#include <bits/stdc++.h>
using namespace std;

bool ok(int x, int y)
{
    int M = max(x, y), m = min(x, y);
    return M <= 2 * m + 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x1 = a, y1 = b;         // first half goals
        int x2 = c - a, y2 = d - b; // second half additional goals

        bool possible = ok(x1, y1) && ok(x2, y2);
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
