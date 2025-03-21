#include <bits/stdc++.h>
using namespace std;
long long int adj_mat[101][101];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0; // same node cost 0 set
            }
            else
            {
                adj_mat[i][j] = LONG_MAX;
            }
        }
    }
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        adj_mat[a][b] = min(adj_mat[a][b], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != LONG_MAX && adj_mat[k][j] != LONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (adj_mat[x][y] == LONG_MAX)
        {
            cout << -1 << endl; // no path
        }
        else
        {
            cout << adj_mat[x][y] << endl;
        }
    }

    return 0;
}