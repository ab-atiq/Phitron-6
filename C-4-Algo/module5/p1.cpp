class Solution
{
public:
    int n, m, cntPerimeter;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool visited[105][105];
    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(vector<vector<int>> &grid, int si, int sj)
    {
        visited[si][sj] = true;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + directions[i].first;
            int cj = sj + directions[i].second;
            if (valid(ci, cj) == false)
            {
                cntPerimeter++;
            }
            else if (valid(ci, cj) == true &&[ci][cj] == 0)
            {
                cntPerimeter++;
            }
            else if (valid(ci, cj) == true && !visited[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(grid, ci, cj);
            }
        }
    }

    int
    islandPerimeter(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        cntPerimeter = 0;
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    dfs(grid, i, j);
                }
            }
        }
    }
};