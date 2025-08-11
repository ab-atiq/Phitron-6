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
        vector<string> grid(8);
        for (int i = 0; i < 8; i++)
        {
            cin >> grid[i];
        }

        bool red_last = false;
        for (int i = 0; i < 8; i++)
        {
            if (grid[i] == "RRRRRRRR")
            {
                red_last = true;
                break;
            }
        }

        cout << (red_last ? 'R' : 'B') << "\n";
    }
    return 0;
}
