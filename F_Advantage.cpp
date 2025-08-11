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
        cin >> n;
        vector<long long> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        vector<long long> sorted = s;
        sort(sorted.begin(), sorted.end());
        long long max1 = sorted[n - 1];
        long long max2 = sorted[n - 2];

        int cnt_max1 = count(s.begin(), s.end(), max1);

        for (int i = 0; i < n; i++)
        {
            long long other_max;
            if (s[i] == max1 && cnt_max1 == 1)
            {
                other_max = max2;
            }
            else
            {
                other_max = max1;
            }
            cout << s[i] - other_max << " ";
        }
        cout << "\n";
    }
    return 0;
}
