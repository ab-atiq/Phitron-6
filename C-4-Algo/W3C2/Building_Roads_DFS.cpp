#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];

void dfs(int node)
{
    visited[node] = true;
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    // Initialize adjacency list and visited array
    // adj.resize(n + 1);
    // visited.assign(n + 1, false);

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Find connected components using DFS
    vector<int> cities;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cities.push_back(i); // Store one node from each component
            dfs(i);
        }
    }

    // Step 3: Print the required roads
    int roads_needed = cities.size() - 1;
    cout << roads_needed << "\n";

    for (int i = 0; i < roads_needed; i++)
    {
        cout << cities[i] << " " << cities[i + 1] << "\n";
    }

    return 0;
}