#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v.size() << endl; // 3
    v.resize(2);
    cout << v.size() << endl;          // 2
    for (int i = 0; i < v.size(); i++) // resize function only change the size
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size() + 5; i++) // out of range garbage value show
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(10);
    // resize vector to 10 size. now vector store 0 except the value is assigned in vector.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}