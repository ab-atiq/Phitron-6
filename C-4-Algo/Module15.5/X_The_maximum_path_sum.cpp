// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X


#include <bits/stdc++.h>
using namespace std;
int n, m;
long long mat[15][15];
long long dp[15][15];
long long max_sum(int r, int c)
{
    if (r >= n || c >= m)
        return -1e9;
    if (r == n - 1 && c == m - 1)
        return mat[r][c];
    if (dp[r][c] != -1)
        return dp[r][c];
    long down = max_sum(r + 1, c);
    long right = max_sum(r, c + 1);
    return dp[r][c] = mat[r][c] + max(down, right);
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            dp[i][j] = -1;
        }
    }

    cout << max_sum(0, 0);

    return 0;
}