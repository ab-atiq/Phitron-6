// https://leetcode.com/problems/flood-fill/solutions/7102435/simple-beginner-friendly-dfs-beats-100-b-j6j7/

class Solution {
public:
    int visited[55][55];
    int n,m;
    vector<pair<int,int>> direc = {{0,-1},{0,1},{-1,0},{1,0}};

    bool isValid(int i, int j)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }

    void dfs(vector<vector<int>>& image, int i, int j,int val, int newColor)
    {
        if(!isValid(i,j))
            return;
        if(visited[i][j] || image[i][j] != val)
            return;

        image[i][j] = newColor;
        visited[i][j] = true;

        for(auto d:direc)
        {
            dfs(image,i+d.first, j+d.second, val, newColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        n = image.size();
        m = image[0].size();
        int val = image[sr][sc];
        dfs(image,sr,sc,val,newColor);
        return image;
    }
};