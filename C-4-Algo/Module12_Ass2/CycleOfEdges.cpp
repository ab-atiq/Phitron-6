// BFS or DFS solution get TLE
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool vis[100005];
int parent[100005];

bool bfs(int src, int dest, int n)
{
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                parent[child] = par;
                q.push(child);
            }
        }
    }

    return vis[dest];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    int cycleEdges = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        if (bfs(a, b, n))
        {
            cycleEdges++;
        }
        else
        {
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
    }

    cout << cycleEdges << endl;

    return 0;
}

// DSU solution like module code - Accepted
#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;
    int cycle = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
            cycle++;
        else
            dsu_union(a, b);
    }

    cout << cycle;

    return 0;
}

// DSU solution but a node parent is that node. - Accepted
#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
int parent[N];

int find_parent(int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = find_parent(parent[x]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    int cycleEdges = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int pa = find_parent(a);
        int pb = find_parent(b);

        if (pa == pb)
        {
            cycleEdges++;
        }
        else
        {
            parent[pb] = pa;
        }
    }

    cout << cycleEdges << endl;
}

// DSU solution from chatgpt

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000; // Maximum number of nodes
int parent[MAXN + 1], sz[MAXN + 1];

// Find with path compression
int find(int u)
{
    if (parent[u] == u)
        return u;
    return parent[u] = find(parent[u]);
}

// Union by size (using sz instead of size)
bool unite(int u, int v)
{
    int rootU = find(u);
    int rootV = find(v);
    if (rootU == rootV)
        return false; // Cycle detected

    // Attach the smaller tree to the larger tree
    if (sz[rootU] > sz[rootV])
    {
        parent[rootV] = rootU;
        sz[rootU] += sz[rootV];
    }
    else
    {
        parent[rootU] = rootV;
        sz[rootV] += sz[rootU];
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;

    // Initialize DSU
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }

    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        if (!unite(a, b))
        {
            cycleEdges++; // Edge that forms a cycle
        }
    }

    cout << cycleEdges << '\n';
    return 0;
}
