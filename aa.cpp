// cycle detect undirected graph

#include <bits/stdc++.h>
using namespace std;
bool vis[1005];
bool cycle = false;
int parent[1005];

void dfs(int src, vector<vector<int>> &adj_list)
{
    vis[src] = true;
    for (int ch : adj_list[src])
    {
        if (vis[ch] && parent[src] != ch)
        {
            cycle = true;
        }
        if (!vis[ch])
        {
            parent[ch] = src;
            dfs(ch, adj_list);
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<vector<int>> adj_list(node);
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    dfs(0, adj_list);

    if (cycle)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout << "No Cycle detected";
    }
    return 0;
}

/* 


*/