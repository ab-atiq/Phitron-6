#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005; // Large enough for constraints
vector<int> adj[MAXN];   // Adjacency list

// BFS to find the shortest path from `src` to all other nodes
int bfs(int src, int dest, int n)
{
    vector<int> dist(n + 1, -1); // Initialize all distances as -1
    queue<int> q;

    q.push(src);
    dist[src] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node])
        {
            if (dist[neighbor] == -1)
            { // Unvisited node
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
                if (neighbor == dest)
                    return dist[dest]; // Stop early if found
            }
        }
    }
    return dist[dest]; // -1 if no path exists
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; // Nodes and edges
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    int q; // Number of queries
    cin >> q;

    while (q--)
    {
        int src, dest;
        cin >> src >> dest;
        cout << bfs(src, dest, n) << '\n';
    }

    return 0;
}
