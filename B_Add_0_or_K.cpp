#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long rem = a[0] % k;

        for (int i = 0; i < n; i++)
        {
            long long cur = a[i] % k;
            if (cur <= rem)
            {
                a[i] += (rem - cur);
            }
            else
            {
                a[i] += (k - (cur - rem));
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
