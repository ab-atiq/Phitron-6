#include <bits/stdc++.h>
using namespace std;
int grid[8][8]; // not need
bool vis[8][8];
int level[8][8];
vector<pair<int, int>> dir = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n = 8, m = 8;

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
        string src, dest;
        cin >> src >> dest;

        int si = src[1] - '1';
        int sj = src[0] - 'a';

        int di = dest[1] - '1';
        int dj = dest[0] - 'a';

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        BFS(si, sj);

        cout << level[di][dj] << endl;
    }

    return 0;
}