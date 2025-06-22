// array accending order sorted or not
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

        // method 1: check consecutive two value
        // bool sorted = true;

        // // for (int i = 1; i < n; i++)
        // //     if (v[i - 1] > v[i])

        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (v[i] > v[i + 1])
        //     {
        //         sorted = false;
        //         break;
        //     }
        // }

        // method 2: new array create then sort new array. then check array and new array same or not.
        vector<int> v2(v);
        sort(v2.begin(), v2.end());

        bool sorted = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v2[i])
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