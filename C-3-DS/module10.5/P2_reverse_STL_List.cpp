/*
Question: Take a doubly linked list as input and reverse it. After that print the linked list.

Sample Input
10 20 30 -1
Sample Output
30 20 10

Sample Input
10 20 30 40 -1
Sample Output
40 30 20 10
*/

#include <bits/stdc++.h>
using namespace std;
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
    // reverse the list using STL reverse function
    dll.reverse();

    // print the reversed list
    // for (int v : dll)
    // {
    //     cout << v << " ";
    // }
    for (auto it = dll.begin(); it != dll.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}