#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int ajd_mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                ajd_mat[i][j] = 0;
            }
            else
            {
                ajd_mat[i][j] = INT_MAX;
            }
        }
    }

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        ajd_mat[u][v] = w;
        // ajd_mat[v][u] = w; // For undirected graph
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ajd_mat[i][k] != INT_MAX && ajd_mat[k][j] != INT_MAX && ajd_mat[i][k] + ajd_mat[k][j] < ajd_mat[i][j])
                {
                    ajd_mat[i][j] = ajd_mat[i][k] + ajd_mat[k][j];
                }
            }
        }
    }

    bool cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (ajd_mat[i][i] < 0)
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative weighted cycle" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ajd_mat[i][j] == INT_MAX)
                {
                    cout << "INF ";
                }
                else
                {
                    cout << ajd_mat[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

/*
4 5
0 1 3
0 2 6
1 2 2
1 3 5
2 3 4

Output:
0 3 5 8
INF 0 2 5
INF INF 0 4
INF INF INF 0

// Can handle Negative weighted cycle
4 5
0 1 3
2 0 -6
1 2 2
1 3 5
2 3 4

output: this output present negative weighted cycle because diagonal element is negative
-1 2 4 6
-4 -1 1 3
-7 -4 -2 0
INF INF INF 0
*/