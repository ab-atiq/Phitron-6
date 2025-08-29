// Question: You will be given an undirected graph as input. You need to tell the number of components in this graph.

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
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

    int cnt = 0; // count total dfs call which is total components of graph
    for (int i = 0; i < node; i++)
    {
        if (vis[i] == false)
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;
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

output:
2

input:
9 7
0 1
0 2
0 3
2 3
4 5
6 8
7 6

output:
3

input:
7 7
0 1
1 2
2 3
1 3
4 0
0 5
5 6

output:
1

input:
10 5
1 2
2 3
1 3
4 0
5 6

output:
6
(Because 7 8 and 9 nodes are not connected, but they are also components)

*/