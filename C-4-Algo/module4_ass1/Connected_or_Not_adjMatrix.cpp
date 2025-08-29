#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    // space complexity O(n^2)
    int adj_mat[n][n];
    memset(adj_mat, 0, sizeof(adj_mat));

    // input using graph
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         if(i==j)
    //             adj_mat[i][j] = 1;
    // }

    // all edges input from user
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    // print adj matrix
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout << adj_mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;
    // TC - O(q)
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        // TC - O(1)
        if (adj_mat[a][b] == 1 || a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}