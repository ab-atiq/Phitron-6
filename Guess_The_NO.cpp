#include <bits/stdc++.h>
using namespace std;

bool canReachTarget(int T)
{
    for (int y = 0; y * 4 <= T; y++)
    {
        if ((T - y * 4) % 3 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    if (canReachTarget(T))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
