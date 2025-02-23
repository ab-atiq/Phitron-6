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
        adj_list[a].push_back(b); // directed graph
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        bool found = false;
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
