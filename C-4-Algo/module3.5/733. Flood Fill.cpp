// https://leetcode.com/problems/flood-fill/solutions/7102435/simple-beginner-friendly-dfs-beats-100-b-j6j7/

class Solution
{
public:
    int visited[55][55];
    int n, m;
    vector<pair<int, int>> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }

    void dfs(vector<vector<int>> &image, int i, int j, int val, int newColor)
    {
        if (!isValid(i, j))
            return;
        if (visited[i][j] || image[i][j] != val)
            return;

        image[i][j] = newColor;
        visited[i][j] = true;

        for (auto d : direc)
        {
            dfs(image, i + d.first, j + d.second, val, newColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        n = image.size();
        m = image[0].size();
        int val = image[sr][sc];
        dfs(image, sr, sc, val, newColor);
        return image;
    }
};

// my code - wow
class Solution
{
public:
    int n, m, initial_color;
    bool vis[55][55];
    vector<pair<int, int>> d = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    bool valid(int cr, int cc)
    {
        if (cr < 0 || cr >= n || cc < 0 || cc >= m)
        {
            return false;
        }
        return true;
    }
    void dfs(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vis[sr][sc] = true;
        image[sr][sc] = color;
        for (int i = 0; i < 4; i++)
        {
            int cr = sr + d[i].first;
            int cc = sc + d[i].second;
            if (valid(cr, cc) && !vis[cr][cc] &&
                image[cr][cc] == initial_color)
            {
                dfs(image, cr, cc, color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int color)
    {
        initial_color = image[sr][sc];
        n = image.size();
        m = image[0].size();
        memset(vis, false, sizeof(vis));
        dfs(image, sr, sc, color);
        return image;
    }
};