#include <bits/stdc++.h>
using namespace std;

long long minCost(vector<long long> &arr)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
    long long cost = 0;

    while (pq.size() > 1)
    {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        long long sum = a + b;
        cost += sum;
        pq.push(sum);
    }
    return cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << minCost(arr) << "\n";
    }
    return 0;
}
