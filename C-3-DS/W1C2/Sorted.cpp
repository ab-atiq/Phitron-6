// array descending order sorted or not
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // method 1: check consecutive two value - TC: O(n)
        // bool sorted = true;

        // // for (int i = 1; i < n; i++)
        // //     if (v[i - 1] > v[i]) // for ascending order check

        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (v[i] < v[i + 1]) // for descending order check
        //     {
        //         sorted = false;
        //         break;
        //     }
        // }

        // method 2: new array create then sort new array. then check array and new array same or not. TC: O(n log n)
        vector<int> v2(v);
        sort(v2.begin(), v2.end(), greater<int>());

        bool sorted = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v2[i]) // compare original array and sorted array
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
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

/*
input
3
5
5 4 3 2 1
4
3 2 1 0
3
1 2 3

output
YES
YES
NO
*/