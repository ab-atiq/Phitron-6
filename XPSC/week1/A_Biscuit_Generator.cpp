#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int cnt = 0;
    while (t >= 0)
    {
        if (a <= t)
        {
            t -= a;
            cnt += b;
        }
        else
        {
            t--;
        }
    }
    cout << cnt << endl;
    return 0;
}