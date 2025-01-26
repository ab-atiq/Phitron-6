#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l;
    vector<int> fre(1001);
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
    return 0;
}