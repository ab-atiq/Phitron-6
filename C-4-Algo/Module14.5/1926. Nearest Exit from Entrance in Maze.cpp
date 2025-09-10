// https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/solutions/7157349/step-by-step-with-bfs-by-piaaaas-daqz

class Solution
{
public:
    bool vis[105][105];
    int level[105][105];
    vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    int bfs(int si, int sj, vector<vector<char>> &maze)
    {
        queue<pair<int, int>> q;
        q.push({si, sj});
        vis[si][sj] = true;
        level[si][sj] = 0;
        while (!q.empty())
        {
            pair<int, int> par = q.front();
            q.pop();
            int par_i = par.first;
            int par_j = par.second;

            for (int i = 0; i < 4; i++)
            {
                int ci = par_i + d[i].first;
                int cj = par_j + d[i].second;
                if (!valid(ci, cj) && (par_i != si || par_j != sj))
                {
                    // If a neighbor is outside the grid and not the entrance, return the number of steps taken so far → that’s the nearest exit.
                    return level[par_i][par_j];
                }
                if (valid(ci, cj) && !vis[ci][cj] && maze[ci][cj] == '.')
                {
                    q.push({ci, cj});

                    vis[ci][cj] = true;
                    level[ci][cj] = level[par_i][par_j] + 1;
                }
            }
        }
        return -1;
    }
    int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
    {
        n = maze.size();
        m = maze[0].size();
        memset(vis, false, sizeof(vis));
        return bfs(entrance[0], entrance[1], maze);
    }
};