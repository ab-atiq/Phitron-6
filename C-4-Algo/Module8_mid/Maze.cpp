#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000;
char grid[MAX_N][MAX_N];
bool vis[MAX_N][MAX_N];
pair<int, int> par[MAX_N][MAX_N];
// int level[1001][1001];

vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // right, left, up, down
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
    // level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = x + moves[i].first;
            int cj = y + moves[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                // level[ci][cj] = level[x][y];
                par[ci][cj] = {x, y};

                // Stop BFS when exit is found (Optimization)
                if (grid[ci][cj] == 'D')
                    return;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    // memset(level, -1, sizeof(level));
    BFS(si, sj);

    // If the exit is unreachable, print the maze as is.
    if (!vis[di][dj])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << endl;
        }
        return 0;
    }

    int x = di, y = dj;
    while (true)
    {
        pair<int, int> p = par[x][y];
        x = p.first;
        y = p.second;
        if (grid[x][y] == 'R')
            break;
        grid[x][y] = 'X';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}