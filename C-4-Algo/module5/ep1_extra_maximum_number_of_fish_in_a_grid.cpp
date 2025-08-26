// https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/

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

// my code
class Solution
{
public:
    bool vis[11][11];
    vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    int row, col;

    bool valid(int ci, int cj)
    {
        if (ci < 0 || ci >= row || cj < 0 || cj >= col)
        {
            return false;
        }
        return true;
    }

    int cnt;
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        cnt += grid[si][sj];
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] > 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int findMaxFish(vector<vector<int>> &grid)
    {
        row = grid.size();
        col = grid[0].size();
        memset(vis, false, sizeof(vis));
        int max_fish = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!vis[i][j] && grid[i][j] > 0)
                {
                    cnt = 0;
                    dfs(i, j, grid);
                    max_fish = max(max_fish, cnt);
                }
            }
        }
        return max_fish;
    }
};