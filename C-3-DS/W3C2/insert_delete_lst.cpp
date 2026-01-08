#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst;
    // for (string loc : lst)
    // for(auto loc: lst)
    // {
    //     cout << loc << endl;
    // }

    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int val;
            cin >> val;
            lst.push_front(val);
            // print forward
            for (auto ii = lst.begin(); ii != lst.end(); ii++)
            {
                cout << *ii << " ";
            }
            cout << endl;
        }
        else if (command == 1)
        {
            int val;
            cin >> val;
            lst.push_back(val);
            // print forward
            for (auto ii = lst.begin(); ii != lst.end(); ii++)
            {
                cout << *ii << " ";
            }
            cout << endl;
        }
        else if (command == 2)
        {
            int idx;
            cin >> idx;
            if (idx < 0 || idx >= lst.size())
            {
                // continue;
                cout << "Invalid" << endl;
            }
            else
            {
                auto it = next(lst.begin(), idx);
                lst.erase(it);

                // print forward
                for (auto ii = lst.begin(); ii != lst.end(); ii++)
                {
                    cout << *ii << " ";
                }
                cout << endl;

                // print backward

                // for (auto ii = lst.rbegin(); ii != lst.rend(); ii--)
                // {
                //     cout << *ii << " ";
                // }
                // cout << endl;
                list<int> copy_lst(lst);
                copy_lst.reverse();
                 for (auto ii = copy_lst.begin(); ii != copy_lst.end(); ii++)
                {
                    cout << *ii << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}