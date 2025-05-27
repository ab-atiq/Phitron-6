#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min({a, b, c}), mx = max({a, b, c});

    cout << mn << " " << mx << endl;
    return 0;
}