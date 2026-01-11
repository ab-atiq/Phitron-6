/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
// return vector from function
// vector<int> fun()
int *fun()
{
    // vector<int> v;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        // v.push_back(i + 1);
        arr[i] = i + 1;
    }
    // return v;
    return arr;
}
int main()
{
    // vector<int> re = fun();
    int *re = fun();
    for (int i = 0; i < 4; i++)
    {
        cout << re[i] << " ";
    }
    return 0;
}