// https://leetcode.com/problems/shortest-bridge/solutions/7166385/dfs-multi-source-bfs-by-piaaaas-2r3i/

class Solution
{
public:
    bool vis[105][105];

    vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    int n;

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= n)
            return false;
        return true;
    }

    int shortest_dist(vector<vector<int>> &grid)
    {
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1)
                    q.push({{i, j}, 0});

        while (!q.empty())
        {
            auto par = q.front();
            q.pop();
            int par_i = par.first.first;
            int par_j = par.first.second;
            int dist = par.second;
            for (int i = 0; i < 4; i++)
            {
                int ci = par_i + d[i].first;
                int cj = par_j + d[i].second;
                if (valid(ci, cj) && grid[ci][cj] == 2)
                    return dist;

                if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 1)
                {
                    q.push({{ci, cj}, dist + 1});
                    vis[ci][cj] = true;
                }
            }
        }
        return 1;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        grid[si][sj] = 2;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
                dfs(ci, cj, grid);
        }
    }

    int shortestBridge(vector<vector<int>> &grid)
    {
        n = grid.size();
        memset(vis, false, sizeof(vis));

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        return shortest_dist(grid);
    }
};