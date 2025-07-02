#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(100);
    cout << (int)&v[4] << " " << (int)&v[5];
    // cout << "Address of 5th element: " << (uintptr_t)&v[4] << endl; // cpp can not print address using int. sometime getting out of range.
    return 0;
}