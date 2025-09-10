#include <bits/stdc++.h>
using namespace std;

int w[1001], v[1001];
int dp[1001][1001]; // dp[i][j] = max value using first i items with capacity j

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, max_w;
        cin >> n >> max_w;

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        // Initialize dp table
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= max_w; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (w[i - 1] <= j)
                {
                    // Option 1: take item i-1
                    int op1 = v[i - 1] + dp[i - 1][j - w[i - 1]];
                    // Option 2: skip item i-1
                    int op2 = dp[i - 1][j];
                    dp[i][j] = max(op1, op2);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j]; // can't take item i-1
                }
            }
        }

        cout << dp[n][max_w] << endl;
    }
    return 0;
}
