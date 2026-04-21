#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin >> r;
    double pi = 3.141592653;
    double area = pi * r * r;
    // cout << fixed << setprecision(9) << area << endl; // 9 is the number of digits after the decimal point

    // cout << setprecision(11) << area << endl; // 11 is the total number of digits with decimal point

    cout << fixed << setprecision(9); // after this line, all the numbers will be printed with 9 digits after the decimal point
    cout << area << endl;

    return 0;
}

