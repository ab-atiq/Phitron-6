#include <iostream>
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
