#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

vector<vector<pair<int, int>>> adj_list;
vector<long long> path;
vector<int> parent;

void dijkstra(int src, int n)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

    path.assign(n + 1, INF);
    parent.assign(n + 1, -1);

    path[src] = 0;
    q.push({0, src});

    while (!q.empty())
    {
        auto [par_dis, par_node] = q.top();
        q.pop();

        if (par_dis > path[par_node])
            continue;

        for (auto [child_node, child_dis] : adj_list[par_node])
        {
            if (par_dis + child_dis < path[child_node])
            {
                path[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                q.push({path[child_node], child_node});
            }
        }
    }
}

void printPath(int n)
{
    if (path[n] == INF)
    {
        cout << "-1\n";
        return;
    }

    vector<int> result;
    for (int curr = n; curr != -1; curr = parent[curr])
        result.push_back(curr);

    reverse(result.begin(), result.end());
    for (int v : result)
        cout << v << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    adj_list.resize(n + 1);

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    dijkstra(1, n);
    printPath(n);

    return 0;
}
