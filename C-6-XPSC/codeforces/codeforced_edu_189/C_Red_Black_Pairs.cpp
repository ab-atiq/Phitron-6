#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[2];
        cin >> s[0] >> s[1];

        int INF = 1e9;
        vector<int> dp(n + 1, INF);
        dp[0] = 0;

        for (int i = 1; i <= n; ++i)
        {
            int costR = (s[0][i - 1] == 'B') + (s[1][i - 1] == 'B');
            int costB = (s[0][i - 1] == 'R') + (s[1][i - 1] == 'R');
            dp[i] = min(dp[i], dp[i - 1] + min(costR, costB));

            if (i >= 2)
            {
                int topRR = (s[0][i - 2] == 'B') + (s[0][i - 1] == 'B');
                int topBB = (s[0][i - 2] == 'R') + (s[0][i - 1] == 'R');

                int botRR = (s[1][i - 2] == 'B') + (s[1][i - 1] == 'B');
                int botBB = (s[1][i - 2] == 'R') + (s[1][i - 1] == 'R');

                int horizontal_cost = min(topRR, topBB) + min(botRR, botBB);
                dp[i] = min(dp[i], dp[i - 2] + horizontal_cost);
            }
        }

        cout << dp[n] << "\n";
    }
    return 0;
}