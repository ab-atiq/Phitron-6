#include <bits/stdc++.h>
using namespace std;
int grid[8][8]; // not need
bool vis[100][100];
int level[100][100];
vector<pair<int, int>> dir = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n, m;

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}

void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = par.first + dir[i].first;
            int cj = par.second + dir[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par.first][par.second] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;

        int ki, kj;
        cin >> ki >> kj;
        int qi, qj;
        cin >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        BFS(ki, kj);

        cout << level[qi][qj] << endl;
    }

    return 0;
}