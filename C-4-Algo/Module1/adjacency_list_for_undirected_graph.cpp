#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin >> node >> edge;
    int a[node]; // array of integers

    // adj_list 0 index based
    // vector<int> adj_list[node]; // array of vector
    // vector<vector<int>> adj_list(node, vector<int>()); // vector of vectors, empty vector assign
    vector<vector<int>> adj_list(node); // vector of vectors, automatically created vector

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected
    }

    for (int i = 0; i < node; i++)
    {
        cout << i << " -> ";
        for (int x : adj_list[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}

/*

input:
6 7
0 2
0 3
0 1
1 3
2 5
2 4
1 4

output:
0 -> 2 3 1
1 -> 0 3 4
2 -> 0 5 4
3 -> 0 1
4 -> 2 1
5 -> 2

*/

/*

input: 1 index base node
6 10
1 2
1 5
2 5
2 4
2 3
5 4
5 6
3 4
3 6
4 6
output:
1-> 2 5
2-> 1 5 4 3
3-> 2 4 6
4-> 2 5 3 6
5-> 1 2 4 6
6-> 5 3 4

*/