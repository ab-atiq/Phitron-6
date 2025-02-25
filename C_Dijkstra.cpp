#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
const int N = 1e5 + 5; // Large enough for constraints

vector<pair<int, int>> adj_list[N];
int dis[N], parent[N];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dis[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();
        int par_node = par.second;
        int par_dis = par.first;

        if (par_dis > dis[par_node])
            continue; // Ignore outdated distances

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }

    // for(int i=1;i<=n;i++)
    //     dis[i] = INF;
    // memset(parent, -1, sizeof(parent));
    
    fill(dis, dis + n + 1, INF);
    fill(parent, parent + n + 1, -1);

    dijkstra(1);

    if (dis[n] == INF)
    {
        cout << "-1"<<endl; // No path found
        return 0;
    }

    vector<int> path;
    int curr = n;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());
    for (int v : path)
        cout << v << " ";
    cout << endl;

    return 0;
}
