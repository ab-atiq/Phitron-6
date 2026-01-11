/*
Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.

Sample Input:
1 4 5 2 7 -1
Sample Output:
1 2 4 5 7

Sample Input:
20 40 30 10 50 60 -1
Sample Output:
10 20 30 40 50 60
*/

#include <bits/stdc++.h>
using namespace std;

void print_list_forward(list<int> dll)
{
    for (int val : dll)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_list_backward(list<int> dll)
{
    for (auto it = dll.rbegin(); it != dll.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> dll;

    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        dll.push_back(val);
    }

    // print_list_forward(dll);
    // print_list_backward(dll);

    // Method 1: Sort the stl list in ascending order - using selection sort
    // auto current = dll.begin();
    // while (current != dll.end())
    // {
    //     auto next_node = next(current);
    //     while (next_node != dll.end())
    //     {
    //         if (*current > *next_node)
    //         {
    //             // Swap values
    //             swap(*current, *next_node);
    //         }
    //         next_node = next(next_node);
    //     }
    //     current = next(current);
    // }

    // Method 2: Using built-in sort function of stl list
    dll.sort();
    // descending order:
    // dll.sort(greater<int>());

    print_list_forward(dll);
    // print_list_backward(dll);
    return 0;
}