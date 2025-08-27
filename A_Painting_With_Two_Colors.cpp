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
        long long n, a, b;
        cin >> n >> a >> b;

        if ((n - b) % 2 != 0)
        {
            cout << "NO\n";
        }
        else if (a <= b)
        {
            cout << "YES\n";
        }
        else
        {

            if ((n - a) % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
