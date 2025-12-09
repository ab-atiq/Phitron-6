#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // solution-1: conditional check
    // int mn = a, mx = a;
    // if (b < mn)
    //     mn = b;
    // if (c < mn)
    //     mn = c;

    // if (b > mx)
    //     mx = b;
    // if (c > mx)
    //     mx = c;

    // solution-2: using loop
    int mn = INT_MAX, mx = INT_MIN;
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        // mn = min(mn, arr[i]);
        // mx = max(mx, arr[i]);
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }

    // solution-3: short solution
    // int mn = min({a, b, c}), mx = max({a, b, c});

    cout << mn << " " << mx << endl;
    return 0;
}