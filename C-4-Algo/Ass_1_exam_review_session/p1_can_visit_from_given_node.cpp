// Question: You will be given an undirected graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

int cnt = 0; // count total dfs count which is total visited node
void dfs(int src)
{
    cnt++;
    vis[src] = true;
    for (int nei : adj_list[src])
    {
        if (!vis[nei])
        {
            dfs(nei);
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src;
    cin >> src;
    dfs(src);
    cout << cnt << endl;

    // count total visited node from visited array.
    int cnt2 = 0;
    for (int i = 0; i < 1005; i++)
    {
        if (vis[i] == true)
        {
            cnt2++;
        }
    }
    cout << cnt2 << endl;
    return 0;
}

/*
input:
6 5
0 1
0 2
0 3
2 3
4 5
2
output:
4

input:
6 5
0 1
0 2
0 3
2 3
4 5
4
output:
2

input:
7 6
0 1
1 2
2 3
1 3
4 0
5 6
1
output:
5
*/