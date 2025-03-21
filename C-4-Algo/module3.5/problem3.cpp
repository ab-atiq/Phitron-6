#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
vector<int> v;
int cnt = 0;
void dfs(int src)
{
    cnt++;
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (vis[child] == false)
            dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            cnt = 0;
            dfs(i);
            v.push_back(cnt);
        }
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}