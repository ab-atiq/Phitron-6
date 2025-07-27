/* #include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total += a;
        }

        // Check if total is a perfect square
        long long root = sqrt(total);
        if (root * root == total)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int total = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total += a;
        }

        bool is_square = false;
        for (long long int i = 0; i * i <= total; i++)
        {
            if (i * i == total)
            {
                is_square = true;
                break;
            }
        }
        if (is_square)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}