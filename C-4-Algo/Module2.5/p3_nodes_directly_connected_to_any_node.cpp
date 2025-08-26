// Question: You will be given an undirected graph as input. Then you will be given a node N. You need to print the number of nodes that are directly connected to the node N.

/* #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    // Input edges and build the graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Since the graph is undirected
    }

    int N;
    cin >> N; // The node to check connections for

    // Output the number of nodes directly connected to node N
    cout << graph[N].size() << endl;

    return 0;
}
 */

// just like module
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];

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

    int input_node;
    cin >> input_node;

    // all nodes which directly connected to input_node
    cout << adj_list[input_node].size() << endl;

    // connected node print
    // for (int n : adj_list[input_node])
    // {
    //     cout << n << endl;
    // }

    return 0;
}