#include <iostream>
#include <list>

using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        int N;
        cin >> N;
        list<int> l;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            l.push_back(x);
        }
        l.sort();
        l.unique();
        for (auto i = l.begin(); i != l.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
    return 0;
}