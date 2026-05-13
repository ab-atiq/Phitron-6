#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            flag = true;
            cout << i << endl;
            break;
        }
    }
    if (flag == false)
    {
        cout << -1 << endl;
    }
    return 0;
}