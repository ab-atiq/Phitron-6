// Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

/* #include <bits/stdc++.h>
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
} */

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, e;
vector<ll> edge_list[100005];
bool vis[100005];
ll level[100005];

void bfs(int src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        ll par = q.front();
        q.pop();

        for (ll child : edge_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list[a].push_back(b);
        edge_list[b].push_back(a);
    }

    //
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(src);

        if (!vis[des])
            cout << -1 << endl;
        else
            cout << level[des] << endl;
    }
    return 0;
}
*/

// just like module
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int ch : adj_list[par])
        {
            if (!vis[ch])
            {
                vis[ch] = true;
                level[ch] = level[par] + 1;
                q.push(ch);
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(src);
        if (vis[des])
        {
            cout << level[des] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}