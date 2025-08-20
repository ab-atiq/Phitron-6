#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<array<int, 3>> customers(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        customers[i] = {a, b, i};
    }

    sort(customers.begin(), customers.end(), [](auto &x, auto &y)
         { return x[0] < y[0]; });

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> ans(n);
    int room_count = 0;

    for (auto &c : customers)
    {
        int a = c[0], b = c[1], idx = c[2];
        if (!pq.empty() && pq.top().first < a)
        {
            auto [dep, room] = pq.top();
            pq.pop();
            ans[idx] = room;
            pq.push({b, room});
        }
        else
        {
            room_count++;
            ans[idx] = room_count;
            pq.push({b, room_count});
        }
    }

    cout << room_count << "\n";
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
