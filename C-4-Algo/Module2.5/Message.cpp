#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 100000 + 5; // Support large constraints
vector<int> adj[MAXN];
bool vis[MAXN];
int parent[MAXN];
int level[MAXN];
 
void bfs(int src, int dest, int n)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1; // Level starts from 1 to count number of computers
 
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
 
        for (int child : adj[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
                q.push(child);
 
                // Stop BFS early if we reach destination
                if (child == dest)
                    return;
            }
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
 
    // Graph input
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
 
    bfs(1, n, n); // Start BFS from node 1, aiming for node n
 
    if (!vis[n])
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
 
    // Reconstruct the path from `n` to `1`
    vector<int> path;
    int node = n;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
 
    cout << path.size() << '\n';
    for (int x : path)
    {
        cout << x << " ";
    }
    cout << '\n';
 
    return 0;
}