// https://leetcode.com/problems/all-paths-from-source-to-target/description/

// https://leetcode.com/problems/all-paths-from-source-to-target/solutions/7114475/dfs-by-piaaaas-2vaw/

// pias
class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    int n;

    void dfs(int src, vector<vector<int>> &graph)
    {
        tmp.push_back(src);
        if (src == n - 1)
            ans.push_back(tmp);

        for (int child : graph[src])
            dfs(child, graph);

        tmp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        n = graph.size();
        dfs(0, graph);
        return ans;
    }
};