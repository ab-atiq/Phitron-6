#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> lst;
    string str;

    while (true)
    {
        cin >> str; // dinajpur rangpur natore dhaka cumilla chittagong end
        if (str == "end")
        {
            break;
        }
        // cout << str << endl;
        lst.push_back(str);
    }
    // for (string loc : lst)
    // for(auto loc: lst)
    // {
    //     cout << loc << endl;
    // }

    list<string>::iterator current_loc = lst.end();
    int query;
    cin >> query;
    for (int i = 0; i < query; i++)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string location;
            cin >> location;
            // cout << location;
            // for(auto it = lst.begin(); it!=lst.end(); it++){

            // }
            auto find_loc = find(lst.begin(), lst.end(), location);
            // list<string>::iterator find_loc = find(lst.begin(), lst.end(), location);
            if (find_loc != lst.end())
            {
                cout << *find_loc << endl;
                current_loc = find_loc;
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else if (command == "next")
        {
            if (current_loc == lst.end())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                auto next_ptr = next(current_loc);
                if (next_ptr == lst.end())
                {
                    cout << "Invalid" << endl;
                }
                else
                {
                    cout << *next_ptr << endl;
                    current_loc = next_ptr;
                }
            }
        }
        else if (command == "prev")
        {
            if (current_loc == lst.end())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                if (current_loc == lst.begin())
                {
                    cout << "Invalid" << endl;
                }
                else
                {
                    auto prev_ptr = prev(current_loc);
                    cout << *prev_ptr << endl;
                    current_loc = prev_ptr;
                }
            }
        }
    }

    return 0;
}