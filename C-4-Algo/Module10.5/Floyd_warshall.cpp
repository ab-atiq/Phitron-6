#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void shortestDistance(vector<vector<int>> &mat)
    {
        int V = mat.size();
        const int INF = 1001;

        // Step 1: Convert -1 to INF (except diagonal elements)
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (mat[i][j] == -1)
                {
                    mat[i][j] = INF;
                }
            }
        }

        // Step 2: Apply Floyd-Warshall Algorithm
        for (int k = 0; k < V; k++)
        {
            for (int i = 0; i < V; i++)
            {
                for (int j = 0; j < V; j++)
                {
                    if (mat[i][k] != INF && mat[k][j] != INF && mat[i][k] + mat[k][j] < mat[i][j])
                    {
                        mat[i][j] = mat[i][k] + mat[k][j];
                    }
                }
            }
        }

        // Step 3: Convert INF back to -1 for unreachable pairs
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (mat[i][j] == INF)
                {
                    mat[i][j] = -1;
                }
            }
        }
    }
};