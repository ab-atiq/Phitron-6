#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    // time complexity: O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // total time complexity: O(n * q)
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        // linear search - O(n)
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}
