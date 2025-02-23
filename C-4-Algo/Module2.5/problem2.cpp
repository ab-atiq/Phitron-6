#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void bfs(int n, vector<vector<int>> &graph, int L)
{
    vector<int> level(n, -1); // To store level of each node
    vector<int> result;       // To store nodes at level L

    queue<int> q;
    q.push(0); // Start BFS from node 0
    level[0] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node])
        {
            if (level[neighbor] == -1)
            { // If the node has not been visited yet
                level[neighbor] = level[node] + 1;
                q.push(neighbor);
            }
        }
    }

    // Collect nodes at level L
    for (int i = 0; i < n; i++)
    {
        if (level[i] == L)
        {
            result.push_back(i);
        }
    }

    // Sort in descending order
    sort(result.rbegin(), result.rend());

    // Print the result
    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    // Input edges
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int L;
    cin >> L;

    // Call BFS and print nodes at level L
    bfs(n, graph, L);

    return 0;
}
