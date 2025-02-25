#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;  // Avoid integer overflow

vector<vector<pair<int, int>>> adj_list;
vector<long long> dis;
vector<int> parent;

void dijkstra(int src, int n)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    
    dis.assign(n + 1, INF);  // Efficient memory allocation
    parent.assign(n + 1, -1); // Track path reconstruction

    dis[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        auto [par_dis, par_node] = pq.top();
        pq.pop();

        if (par_dis > dis[par_node])
            continue; // Ignore outdated distances

        for (auto [child_node, child_dis] : adj_list[par_node])
        {
            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

void printPath(int n)
{
    if (dis[n] == INF)
    {
        cout << "-1\n"; // No path found
        return;
    }

    vector<int> path;
    for (int curr = n; curr != -1; curr = parent[curr])
        path.push_back(curr);

    reverse(path.begin(), path.end());
    for (int v : path) cout << v << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    adj_list.resize(n + 1); // Dynamically allocate adjacency list

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }

    dijkstra(1, n);
    printPath(n);

    return 0;
}
