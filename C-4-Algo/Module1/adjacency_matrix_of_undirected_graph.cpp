#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin >> node >> edge;

    // adj matrix - node start from 0
    int adj_mat[node][node];
    // vector<vector<int>> adj_matrix(node, vector<int>(node, 0)); // vector of 2d

    // adj matrix - node start from 1
    // int adj_mat[node + 1][node + 1];
    // vector<vector<int>> adj_matrix(node+1, vector<int>(node+1, 0));

    // method 1: memset does not need when we will iterate over adjacency matrix and set value 0 or 1.
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
            if (i == j)
                adj_mat[i][j] = 1; // if i==j then it is a self loop
    }

    // method 2: one loop for adjacency matrix 0 or 1 setup.
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
            if (i == j)
                adj_mat[i][j] = 1; // if i==j then it is a self loop
            else
                adj_mat[i][j] = 0; // no self loop
    }

    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirected
    }

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
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
1 1 1 1 0 0
1 1 0 1 1 0
1 0 1 0 1 1
1 1 0 1 0 0
0 1 1 0 1 0
0 0 1 0 0 1

*/

/*
// 1 index base node input:
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
Adjacency Matrix:
1 1 0 0 1 0
1 1 1 1 1 0
0 1 1 1 0 1
0 1 1 1 1 1
1 1 0 1 1 1
0 0 1 1 1 1
*/