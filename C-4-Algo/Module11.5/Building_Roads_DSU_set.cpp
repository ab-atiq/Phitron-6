#include <bits/stdc++.h>
using namespace std;

vector<int> par, group_size;

int find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = find(par[node]); // Path compression
}

void unite(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (leader1 != leader2)
    { // Only unite if they are in different components
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
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // Resize vectors for DSU
    par.assign(n + 1, -1);
    group_size.assign(n + 1, 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        unite(u, v);
    }

    // Step 1: Find unique components
    set<int> components;
    for (int i = 1; i <= n; i++)
    {
        components.insert(find(i));
    }

    // Step 2: Convert set to vector
    vector<int> leaders(components.begin(), components.end());

    // Step 3: Print required roads
    int roads_needed = leaders.size() - 1;
    cout << roads_needed << "\n";

    for (int i = 0; i < roads_needed; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << "\n";
    }

    return 0;
}