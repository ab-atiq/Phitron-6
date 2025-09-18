#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<int, int>> adj_list[100005];
vector<ll> dis[100005]; // store up to k shortest distances for each node
int n, m, k;

void dijkstra(int src)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});

    dis[src][0] = 0; // shortest distance to source is 0

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        int par_node = par.second;
        ll par_dis = par.first;

        if (dis[par_node][k - 1] < par_dis)
            continue; // already found k distances

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            ll newDis = par_dis + child_dis;

            if (newDis < dis[child_node][k - 1])
            {
                dis[child_node][k - 1] = newDis; // replace the largest distance
                pq.push({newDis, child_node});
                sort(dis[child_node].begin(), dis[child_node].end());
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        dis[i].resize(k); // preallocate space for k distances
        for (int j = 0; j < k; j++)
            dis[i][j] = 1e18; // initialize with large value
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c}); // directed graph
    }

    dijkstra(1);

    for (ll x : dis[n])
        cout << x << " ";
    cout << "\n";

    return 0;
}
