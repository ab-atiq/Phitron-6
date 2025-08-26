#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int row, col;

bool valid(int i, int j)
{
    if (i < 0 || row <= i || j < 0 || col <= j)
    {
        return false;
    }
    return true;
}

// void dfs(int si, int sj)
// {
//     cout << si << " " << sj << endl;
//     vis[si][sj] = true;
//     // for (int i = 0; i < 4; i++)
//     for (pair<int, int> d : dir)
//     {
//         // int ci = si + dir[i].first;
//         // int cj = sj + dir[i].second;
//         int ci = si + d.first;
//         int cj = sj + d.second;
//         if (!vis[ci][cj] && valid(ci, cj))
//         {
//             dfs(ci, cj);
//         }
//     }
// }

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        cout << pi << " " << pj << endl;
        // for (int i = 0; i < 4; i++)
        for (pair<int, int> pai : dir)
        {
            // int ci = pi + dir[i].first;
            // int cj = pj + dir[i].second;
            int ci = pi + pai.first;
            int cj = pj + pai.second;
            if (!vis[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
            }
        }
    }
}

int main()
{

    cin >> row >> col;
    // vector<int> adj_list[node];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> grid[i][j];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    memset(vis, false, sizeof(vis));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    // dfs(si, sj);
    bfs(si, sj);
    if (vis[di][dj])
    {
        cout << level[di][dj] << endl;
    }
    return 0;
}