#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; // vector<vector<int>> adj_list(1005);
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // oi node ke niye kaj
        cout << par << " ";

        // children gulo push kora
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
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
    bfs(0);
    return 0;
}

/*
7 8
0 5
5 1
1 4
1 6
4 6
6 3
3 2
4 2
0 5 1 4 6 2 3
*/