#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005]; // adjacency list

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // Undirected Graph
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (adj_list[x].empty()) // No connected nodes
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(adj_list[x].rbegin(), adj_list[x].rend()); // Descending order
            for (int node : adj_list[x])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
