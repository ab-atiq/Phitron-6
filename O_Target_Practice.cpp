#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string grid[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }

        int total_points = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] == 'X')
                {
                    int ring = 0;
                    int dist = min(min(i, 9 - i), min(j, 9 - j));

                    ring = 5 - dist;
                    ring = dist + 1;

                    total_points += ring;
                }
            }
        }

        cout << total_points << "\n";
    }

    return 0;
}
