#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    vector<pair<int, int>> st; // (value, count)
    long long total = 0;

    for (int i = 0; i < N; i++)
    {
        int x = a[i];
        if (!st.empty() && st.back().first == x)
        {
            st.back().second++;
        }
        else
        {
            st.push_back({x, 1});
        }
        total++;

        // check for explosion
        if (st.back().second == st.back().first)
        {
            total -= st.back().first;
            st.pop_back();
        }

        cout << total << "\n";
    }

    return 0;
}
