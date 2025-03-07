#include <bits/stdc++.h>
using namespace std;
// bool dp[100001] = {false};
bool dp[100001];
int N;

void solve()
{
    dp[1] = true;
    for (int i = 1; i <= N; i++)
    {
        if (dp[i])
        {
            if (i + 5 <= N)
                dp[i + 5] = true;
            if (i * 4 <= N)
                dp[i * 4] = true;
        }
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        cin >> N;
        memset(dp, false, sizeof(dp));
        /*
        dp[1] = true;
        for (int i = 1; i <= N; i++)
        {
            if (dp[i])
            {
                if (i + 3 <= N)
                    dp[i + 3] = true;
                if (i * 2 <= N)
                    dp[i * 2] = true;
            }
        }
        */
        solve();
        if (dp[N])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
