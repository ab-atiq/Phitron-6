/*
Question: Take two doubly linked lists as input and check if they are the same or not.
Sample Input:
10 20 30 40 50 -1
10 20 30 40 50 -1
Sample Output:
YES

Sample Input:
10 20 30 40 50 -1
10 20 30 40 -1
Sample Output:
NO

Sample Input:
10 20 30 40 -1
10 20 30 40 50 -1
Sample Output:
NO

Sample Input:
10 20 30 40 -1
40 30 20 10 -1
Sample Output:
NO

Sample Input:
1 2 3 4 5 -1
5 4 1 2 6 -1
Sample Output:
NO

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1, list2;
    int val;
    // Input for first list
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list1.push_back(val);
    }
    // Input for second list
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list2.push_back(val);
    }

    // Mentod 1: Check if both lists are the same
    // if (list1 == list2)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    // Method 2: Check if both lists are the same using size check
    if (list1.size() != list2.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool are_same = true;
        auto it1 = list1.begin();
        auto it2 = list2.begin();
        while (it1 != list1.end() && it2 != list2.end())
        {
            if (*it1 != *it2)
            {
                are_same = false;
                break;
            }
            ++it1;
            ++it2;
        }
        if (are_same)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    
    return 0;
}