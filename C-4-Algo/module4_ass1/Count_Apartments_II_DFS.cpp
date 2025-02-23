#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (grid[i][j] == '#')
        return false;
    return true;
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int room_count = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            room_count += dfs(ci, cj);
        }
    }
    return room_count;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> apartment_sizes;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int rooms = dfs(i, j);
                apartment_sizes.push_back(rooms);
            }
        }
    }

    sort(apartment_sizes.begin(), apartment_sizes.end());

    if (apartment_sizes.empty())
    {
        cout << "0\n";
    }
    else
    {
        for (int size : apartment_sizes)
        {
            cout << size << " ";
        }
        cout << "\n";
    }

    return 0;
}
