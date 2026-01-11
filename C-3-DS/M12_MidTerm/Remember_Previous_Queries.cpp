#include <iostream>
#include <list>
using namespace std;

void print_list(list<int> l)
{
    cout << "L -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "R -> ";
    // for (auto it = l.rbegin(); it != l.rend(); it++)
    // {
    //     cout << *it << " ";
    // }
    l.reverse();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            l.push_front(V);
            print_list(l);
        }
        else if (X == 1)
        {
            l.push_back(V);
            print_list(l);
        }
        else if (X == 2)
        {
            int idx = V;
            // invalid index handle
            if (idx < 0 || idx >= l.size())
            {
                print_list(l);
                continue;
            }
            // iterate from start to specific index
            // auto it = l.begin();
            // for (int i = 0; i < idx; i++)
            // {
            //     it++;
            // }
            // l.erase(it); // erase index

            // iterate using next
            auto it = next(l.begin(), idx);
            l.erase(it); // erase index
            print_list(l);
        }
    }

    return 0;
}