#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
int parent[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();
        ll par_node = par.second;
        ll par_dis = par.first;

        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_dis = child.second;
            ll cost = child_dis + par_dis;
            if (cost < dis[child_node])
            {
                dis[child_node] = cost;
                pq.push({cost, child_node});
                parent[child_node] = par_node;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (ll i = 0; i <= n; i++)
        dis[i] = 1e18;

    memset(parent, -1, sizeof(parent));

    dijkstra(1);

    // for(int i = 1; i <= n; i++) cout << parent[i] << " "; cout << endl;

    if (dis[n] == 1e18)
    {
        cout << "-1" << endl;
        return 0;
    }
    vector<ll> ans;
    int cur_node = n;
    while (cur_node != -1)
    {
        ans.push_back(cur_node);
        cur_node = parent[cur_node];
    }
    reverse(ans.begin(), ans.end());
    for (int v : ans)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}