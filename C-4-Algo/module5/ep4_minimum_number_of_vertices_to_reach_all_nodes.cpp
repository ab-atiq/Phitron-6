// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/solutions/7112574/simple-parent-check-approach-no-algorith-mka3

class Solution
{
public:
    bool has_parent[100005];
    vector<int> ans;

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        memset(has_parent, false, sizeof(has_parent));
        for (auto v : edges)
            has_parent[v[1]] = true;

        for (int i = 0; i < n; i++)
            if (!has_parent[i])
                ans.push_back(i);

        return ans;
    }
};