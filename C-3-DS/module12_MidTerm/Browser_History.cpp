#include <iostream>
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

    auto it = STL_list.begin();

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
                    cout << visit_address << endl;
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
}