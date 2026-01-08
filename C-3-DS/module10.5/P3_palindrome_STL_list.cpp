/*
Question: Take a doubly linked list as input and check if it forms any palindrome or not.

Sample Input:
10 20 30 20 10 -1
Sample Output:
YES

Sample Input:
10 20 30 30 20 10 -1
Sample Output:
YES

Sample Input:
10 20 30 40 20 10 -1
Sample Output:
NO

Sample Input:
10 20 30 20 40 -1
Sample Output:
NO

Sample Input:
10 20 30 10 10 -1
Sample Output:
NO

Sample Input:
10 20 20 20 10 -1
Sample Output:
YES
*/

// Approach using STL list - front and back insertions
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1, list2;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        list1.push_back(val);
        list2.push_front(val);
    }

    if (list1 == list2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
*/

// Approach using STL list - two iterators
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        lst.push_back(val);
    }

    auto front_itr = lst.begin();
    auto back_itr = prev(lst.end());
    // cout << *front_itr << " " << *back_itr << endl;

    bool is_palindrome = true;
    while (front_itr != back_itr && prev(front_itr) != back_itr)
    {
        if (*front_itr != *back_itr)
        {
            is_palindrome = false;
            break;
        }
        front_itr++;
        back_itr--;
    }

    if (is_palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
} */

// solution using reverse of stl list
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst, rev_lst;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        lst.push_back(val);
    }

    rev_lst = lst;
    rev_lst.reverse();

    // directly checking equality of both lists
    // if (lst == rev_lst)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    // checking equality using iterators
    auto it1 = lst.begin();
    auto it2 = rev_lst.begin();
    bool is_palindrome = true;
    while (it1 != lst.end() && it2 != rev_lst.end())
    {
        if (*it1 != *it2)
        {
            is_palindrome = false;
            break;
        }
        it1++;
        it2++;
    }

    if (is_palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}