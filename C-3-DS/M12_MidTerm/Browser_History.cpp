/* #include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> STL_list;
    string address;
    while (cin >> address && address != "end")
    {
        STL_list.push_back(address);
    }

    // for (string s : STL_list)
    // {
    //     cout << s << endl;
    // }

    // auto it = STL_list.begin();
    // list<string>::iterator it = STL_list.begin();
    list<string>::iterator it;

    int q;
    cin >> q;
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "visit")
        {
            string visit_address;
            cin >> visit_address;
            bool flag = false;
            for (auto i = STL_list.begin(); i != STL_list.end(); i++)
            {
                if (visit_address == *i)
                {
                    cout << visit_address << endl; // *i
                    it = i;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (op == "prev")
        {
            bool flag = false;
            for (auto i = STL_list.begin(); i != STL_list.end(); i++)
            {
                if (*next(i) == *it) // corner case handle also (*next(STL_list.end()) is NULL)
                {
                    cout << *i << endl;
                    flag = true;
                    it = i;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (op == "next")
        {
            bool flag = false;
            for (auto i = STL_list.begin(); i != STL_list.end(); i++)
            {
                if (*next(it) == *i) // corner case handle also (*next(STL_list.end()) is NULL)
                {
                    cout << *i << endl;
                    flag = true;
                    it = i;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> STL_list;
    string address;
    while (cin >> address && address != "end")
    {
        STL_list.push_back(address);
    }
    list<string>::iterator cur_address = STL_list.begin();
    int q;
    cin >> q;
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "visit")
        {
            string visit_address;
            cin >> visit_address;
            auto isFound = find(STL_list.begin(), STL_list.end(), visit_address);
            if (isFound != STL_list.end())
            {
                cout << visit_address << endl;
                cur_address = isFound;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (op == "prev")
        {
            if (cur_address == STL_list.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                // --cur_address;
                // cout << *cur_address << endl;
                auto prev_it = prev(cur_address);
                cout << *prev_it << endl;
                cur_address = prev_it;
            }
        }
        else if (op == "next")
        {
            auto next_it = next(cur_address);
            if (next_it == STL_list.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *next_it << endl;
                cur_address = next_it;
            }
        }
    }
    return 0;
}