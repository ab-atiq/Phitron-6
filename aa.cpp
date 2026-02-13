#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    // adjacency matrix
    // vector<vector<int>> adj_mat(n, vector<int>(n));
    // for (int i = 0; i < e; i++)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     adj_mat[a][b] = 1;
    //     adj_mat[b][a] = 1;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << adj_mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // adjacency list
    // vector<vector<int>> adj_list(n);
    // for (int i = 0; i < e; i++)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     adj_list[a].push_back(b);
    //     adj_list[b].push_back(a);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Node " << i << " -> ";
    //     for (int val : adj_list[i])
    //     {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }

    // edge list
    vector<pair<int, int>> edge_list;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
        edge_list.push_back({b, a});
    }

    for (auto p : edge_list)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}