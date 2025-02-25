#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    // memset(group_size, 1, sizeof(group_size));
    for (int i = 0; i < 1005; i++)
    {
        group_size[i] = 1;
    }
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Node: " << i << " Parent: " << par[i] << " Group Size: " << group_size[i] << endl;
    }

    return 0;
}

/*
5 3
1 2
2 0
3 1
Node: 1 Parent: -1 Group Size: 4
Node: 2 Parent: 1 Group Size: 1
Node: 3 Parent: 1 Group Size: 1
Node: 4 Parent: -1 Group Size: 1
Node: 5 Parent: -1 Group Size: 1
*/