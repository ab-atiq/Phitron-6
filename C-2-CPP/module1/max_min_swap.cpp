#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // cin >> a >> b;
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    // max() use
    cout << max(a, b) << endl;

    // minimum value find
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    // min() use
    cout << min(a, b) << endl;

    // before swap
    cout << "Before swap a=" << a << ", b=" << b << endl;
    // int temp = a;
    // a = b;
    // b = temp;
    // after swap
    swap(a, b);
    cout << "After swap a=" << a << ", b=" << b << endl;
    return 0;
}