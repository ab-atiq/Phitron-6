#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l;

    // method 1: using frequency array with list
    vector<int> fre(1001, 0);
    int n;
    while (cin >> n && n != -1)
    {
        if (fre[n] == 0)
        {
            l.push_back(n);
            fre[n]++;
        }
    }
    l.sort();
    for (int i : l)
    {
        cout << i << " ";
    }

    // method 2: using list and unique
    list<int> lst;
    int val;
    while (cin >> val && val != -1)
    {
        lst.push_back(val);
    }
    lst.sort();
    lst.unique();
    for (int i : lst)
    {
        cout << i << " ";
    }
    return 0;
}