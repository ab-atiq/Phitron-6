#include <bits/stdc++.h>
using namespace std;

// void print_list_forward(list<int> &lst) // no issue with reference forward print. Because, list contain all value pointer or iterator not change.
void print_list_forward(list<int> lst)
{
    for (auto it : lst)
    {
        cout << it << " ";
    }
    cout << endl;
    // another way to print list
    // for (auto it = lst.begin(); it != lst.end(); it++)
    // {
    //     cout << *it << " ";
    // }
}

// void print_list_backward(list<int> &lst) // create problem with reference backward print. Because, when reverse the list, it will change the original list.
void print_list_backward(list<int> lst)
{
    // for (auto it = lst.rbegin(); it != lst.rend(); ++it)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // another way to print list in reverse
    // for (auto it = lst.end(); it != lst.begin(); --it)
    // {
    //     cout << *it << " ";
    // }

    // alternative way using reverse function then printing
    // reverse(lst.begin(), lst.end());
    lst.reverse(); // reverse the list
    for (auto it : lst)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    list<int> lst;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val; // idx == X, val == V
        cin >> idx >> val;

        // int size = size_of_list(head);
        int size = lst.size();
        // cout << "Size " << size << endl;

        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            // insert_at_head(head, tail, val);
            // print_list_forward(head);
            // print_list_backward(tail);
            lst.push_front(val);
            print_list_forward(lst);
            print_list_backward(lst);
        }
        else if (idx == size)
        {
            // insert_at_tail(head, tail, val);
            // print_list_forward(head);
            // print_list_backward(tail);
            lst.push_back(val);
            print_list_forward(lst);
            print_list_backward(lst);
        }
        else
        {
            // insert_at_any_position(head, tail, idx, val);
            // print_list_forward(head);
            // print_list_backward(tail);
            auto it = next(lst.begin(), idx);
            lst.insert(it, val);
            print_list_forward(lst);
            print_list_backward(lst);
        }
    }

    // int val;
    // while (cin >> val)
    // {
    //     if (val == -1)
    //     {
    //         break; // Exit on -1 input
    //     }
    //     insert_at_head(head, tail, val);
    // }
    // print_list(head);

    return 0;
}