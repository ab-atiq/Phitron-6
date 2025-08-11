#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long removals = 0;
    int i = 0;

    while (i < N)
    {
        long long val = a[i];
        int count = 0;

        while (i < N && a[i] == val)
        {
            count++;
            i++;
        }

        if (count > val)
        {
            removals += (count - val);
        }
        else if (count < val)
        {
            removals += count;
        }
    }

    cout << removals << "\n";
    return 0;
}
