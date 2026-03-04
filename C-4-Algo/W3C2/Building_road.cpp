#include <bits/stdc++.h>
using namespace std;

int par[100000 + 5];
int group_size[100000 + 5];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int find(int node) // O(logN)
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

    // memset(par, -1, sizeof(par));
    // memset(group_size, 1, sizeof(group_size));

    // for (int i = 0; i < 100005; i++)
    // {
    //     par[i] = -1;
    //     group_size[i] = 1;
    // }

    int n, m;
    cin >> n >> m;

    dsu_init(n);

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        int par_u = find(u);
        int par_v = find(v);

        if (par_u != par_v)
        {
            dsu_union(u, v);
        }
    }

    // solution way - 1
    int cnt = 0;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        int leader_1 = find(1);
        int leader_node = find(i);
        if (leader_1 != leader_node)
        {
            cnt++;
            dsu_union(leader_1, leader_node);
            v.push_back(leader_node);
        }
    }
    cout << cnt << endl;

    for (int val : v)
    {
        cout << 1 << " " << val << endl;
    }

    // solution way - 2
    // int cnt = 0;
    // vector<int> ans;
    // // vector<pair<int, int>> ans; // solution way - 3

    // for (int node = 1; node <= n; node++)
    // {
    //     int par_1 = find(1);       // 1 er parent
    //     int par_node = find(node); // i er parent

    //     if (par_1 != par_node)
    //     {
    //         cnt++;

    //         dsu_union(1, node);
    //         ans.push_back(node);
    //         // ans.push_back({1, node}); // solution way - 3
    //     }
    // }

    // cout << cnt << endl;

    // for (auto it : ans)
    // {
    //     cout << '1' << " " << it << endl;
    // }

    // solution way - 3
    // Print the edges to be added - pair input
    // for (auto it : ans)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // solution way - 4 - error
    // int cnt = 0;
    // vector<int> v;

    // int leader_1 = find(1);
    // v.push_back(leader_1);

    // for (int i = 2; i <= n; i++)
    // {
    //     int leader_node = find(i);
    //     if (leader_1 != leader_node)
    //     {
    //         cnt++;
    //         dsu_union(leader_1, leader_node);
    //         v.push_back(leader_node);
    //     }
    // }
    // cout << cnt << endl;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     cout << v[i] << " " << v[i + 1] << endl;
    // }

    return 0;
}