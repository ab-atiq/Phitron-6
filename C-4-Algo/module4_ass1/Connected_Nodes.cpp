#include <bits/stdc++.h>
using namespace std;

// space complexity O(V + E) [vertex complexity fixed but edge complexity variable on input edges]
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
    // TC - O(q * E log E) [every query can maximum take O(E log E) time]
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
            // sort take Time complexity - O(E log E)
            sort(adj_list[x].rbegin(), adj_list[x].rend()); // Descending order
            for (int node : adj_list[x])
            {
                cout << node << " ";
            }
            cout << endl;

            // just reverse order print - O(E) time (it will not work because we have to sort descending)
            // for (int i = adj_list[x].size() - 1; i >= 0; i--)
            // {
            //     cout << adj_list[x][i] << " ";
            // }
            // cout << endl;
        }
    }

    return 0;
}
