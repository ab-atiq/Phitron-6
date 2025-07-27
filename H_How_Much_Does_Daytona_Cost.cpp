#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> val(n);
        for (int i = 0; i < n; ++i)
            val[i] = (a[i] == k) ? 1 : -1;

        int sum = 0, min_prefix = 0;
        bool found = false;

        for (int i = 0; i < n; ++i)
        {
            sum += val[i];
            if (sum - min_prefix > 0)
            {
                found = true;
                break;
            }
            min_prefix = min(min_prefix, sum);
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}
