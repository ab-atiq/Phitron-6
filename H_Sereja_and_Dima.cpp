#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn_sereja = true;

    while (l <= r)
    {
        int chosen;
        if (a[l] > a[r])
        {
            chosen = a[l];
            l++;
        }
        else
        {
            chosen = a[r];
            r--;
        }

        if (turn_sereja)
            sereja += chosen;
        else
            dima += chosen;

        turn_sereja = !turn_sereja;
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}
