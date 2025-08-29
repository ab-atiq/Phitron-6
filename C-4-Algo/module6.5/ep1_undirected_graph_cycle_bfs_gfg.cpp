// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> adj_list[100005]; // big enough for constraints
    // vector<bool> vis;
    // vector<int> parent;
    bool vis[100005];
    int parent[100005];
    bool bfs(int src)
    {
        queue<int> q;
        q.push(src);
        vis[src] = true;

        while (!q.empty())
        {
            int par = q.front();
            q.pop();

            for (int child : adj_list[par])
            {
                if (vis[child] && parent[par] != child)
                    return true; // cycle found
                if (!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                    parent[child] = par;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>> &edges)
    {
        // build adjacency list from edges vector/list
        for (auto &e : edges)
        {
            int u = e[0], v = e[1];
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        // vis.assign(V, false);
        // parent.assign(V, -1);
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));

        // check each component
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (bfs(i))
                    return true;
            }
        }
        return false;
    }
};
