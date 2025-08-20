#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    deque<long long> dq;
    bool rev = false;

    for (int i = 0; i < n; i++)
    {
        if (!rev)
        {
            dq.push_back(a[i]);
        }
        else
        {
            dq.push_front(a[i]);
        }
        rev = !rev; // flip after each operation
    }

    if (!rev)
    {
        for (int i = 0; i < dq.size(); i++)
        {
            cout << dq[i] << (i + 1 == dq.size() ? '\n' : ' ');
        }
    }
    else
    {
        for (int i = dq.size() - 1; i >= 0; i--)
        {
            cout << dq[i] << (i == 0 ? '\n' : ' ');
        }
    }

    return 0;
}
