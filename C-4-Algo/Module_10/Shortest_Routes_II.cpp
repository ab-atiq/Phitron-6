#include <bits/stdc++.h>
using namespace std;
long long int adj_mat[501][501]; // set limit as value long long because total node 500 with 1e9 value overflow in int.
int main()
{
    long long int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j) // same node distance 0
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = 1e18;
            }
        }
    }

    while (m--)
    {
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c); // minimum edge value set from multiple edges between 2 nodes
        adj_mat[b][a] = min(adj_mat[b][a], c);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != 1e18 && adj_mat[k][j] != 1e18 && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
    while (q--)
    {
        long long int a, b;
        cin >> a >> b;
        if (adj_mat[a][b] == 1e18)
        {
            cout << -1 << endl; // no path between 2 nodes
        }
        else
        {
            cout << adj_mat[a][b] << endl;
        }
    }

    return 0;
}