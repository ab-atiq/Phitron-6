// Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. The source will be 0 always.

/*
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

        // level node collect - method 1
        if (level[node] == L)
        {
            result.push_back(node);
        }

        for (int neighbor : graph[node])
        {
            if (level[neighbor] == -1)
            { // If the node has not been visited yet
                level[neighbor] = level[node] + 1;
                q.push(neighbor);
            }
        }
    }

    // Collect nodes at level L - method 2
    // for (int i = 0; i < n; i++)
    // {
    //     if (level[i] == L)
    //     {
    //         result.push_back(i);
    //     }
    // }

    // Sort in descending order
    // sort(result.rbegin(), result.rend());
    sort(result.begin(), result.end(), greater<int>());

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

    // vector<int> adj_list[n];
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
} */

// just like module
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int vis[1005];
int level[1005];
vector<int> store_level_node;

void bfs(int src, int lev)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // level node store - method 1
        // if (level[par] == lev)
        // {
        //     store_level_node.push_back(par);
        // }

        for (int ch : adj_list[par])
        {
            if (!vis[ch])
            {
                vis[ch] = true;
                level[ch] = level[par] + 1;
                q.push(ch);
            }
        }
    }
}

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

    int input_level;
    cin >> input_level;
    bfs(0, input_level); // source always 0

    // store level node - method 2
    for (int i = 0; i < 1005; i++)
    {
        if (level[i] == input_level)
        {
            store_level_node.push_back(i);
        }
    }

    // sort vector descending order
    sort(store_level_node.begin(), store_level_node.end(), greater<int>());

    for (int ele : store_level_node)
    {
        cout << ele << " ";
    }

    return 0;
}