#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 100005;
const ll INF = 1e18;

vector<pair<int, int>> adj_list[N];
vector<ll> dis[N]; // store up to k shortest distances for each node
int n, m, k;

void dijkstra(int src)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        int par_node = par.second;
        ll par_dis = par.first;

        if (dis[par_node].size() >= k)
            continue; // already found k distances
        dis[par_node].push_back(par_dis);

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            ll newDis = par_dis + child_dis;

            if ((int)dis[child_node].size() < k)
            {
                pq.push({newDis, child_node});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
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
