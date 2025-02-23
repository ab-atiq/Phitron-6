class Solution
{
public:
    int n, m;
    bool vis[11][11];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    bool isValid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    int dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        int fish = grid[si][sj];

        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] > 0)
            {
                fish += dfs(ci, cj, grid);
            }
        }

        return fish;
    }

    int findMaxFish(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        memset(vis, false, sizeof(vis));
        int maxFish = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] > 0 && !vis[i][j])
                {
                    int res = dfs(i, j, grid);
                    maxFish = max(maxFish, res);
                }
            }
        }

        return maxFish;
    }
};
