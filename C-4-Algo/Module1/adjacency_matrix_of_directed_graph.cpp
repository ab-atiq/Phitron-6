#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    // method 1: memset does not need when we will iterate over adjacency matrix and set value 0 or 1.
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i == j)
                adj_mat[i][j] = 1; // if i==j then it is a self loop
    }

    // method 2: one loop for adjacency matrix 0 or 1 setup.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         if (i == j)
    //             adj_mat[i][j] = 1; // if i==j then it is a self loop
    //         else
    //             adj_mat[i][j] = 0; // no self loop
    // }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}