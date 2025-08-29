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
        adj_list[a].push_back(b); // directed graph
    }

    int q;
    cin >> q;
    // TC - O(V*q) [every query can take O(V) time]
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        bool found = false;
        // TC - O(V) [every node can maximum connect with V-1 other nodes]
        // direct connection check between a and b
        for (int child : adj_list[a])
        {
            if (child == b)
            {
                found = true;
                break;
            }
        }

        if (found || a == b) // if a and b are same or direct connection found
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
