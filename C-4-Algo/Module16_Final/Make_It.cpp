#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int dp[N];
bool makeIt(int s, int n)
{
    if (s == n)
        return true;
    if (s > n)
        return false;
    if (dp[s] != -1)
        return dp[s];
    return dp[s] = makeIt(s + 3, n) || makeIt(s * 2, n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if (makeIt(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}