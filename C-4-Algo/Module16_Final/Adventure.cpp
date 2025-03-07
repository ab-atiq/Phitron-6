#include <bits/stdc++.h>
using namespace std;
int w[1001], v[1001];
int dp[1001][1001];

int knapsack(int n, int max_w)
{
    if (n < 0 || max_w <= 0)
        return 0;

    if (dp[n][max_w] != -1)
    {
        return dp[n][max_w];
    }
    // 1. nibo
    if (w[n] <= max_w)
    {
        int op1 = knapsack(n - 1, max_w - w[n]) + v[n];
        int op2 = knapsack(n - 1, max_w);
        return dp[n][max_w] = max(op1, op2);
    }
    // 2. nibo na
    else
    {
        int op2 = knapsack(n - 1, max_w);
        return dp[n][max_w] = op2;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, max_w;
        cin >> n >> max_w;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        cout << knapsack(n - 1, max_w) << endl;
    }
    return 0;
}