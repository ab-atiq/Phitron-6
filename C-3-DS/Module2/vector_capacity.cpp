#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << endl; // 0
    v.push_back(10);
    cout << v.size() << endl; // 1
    v.push_back(20);
    cout << v.size() << endl; // 2
    v.push_back(30);
    cout << v.size() << endl; // 4
    v.push_back(40);
    cout << v.size() << endl; // 4
    // v.resize(7); // all remaining address will fillup with 0
    v.resize(7, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}