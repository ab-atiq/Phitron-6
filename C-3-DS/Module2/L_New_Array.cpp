#include <bits/stdc++.h>
using namespace std;

// void NewArray(vector<int> a, vector<int> b, vector<int> c, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // c[i] = b[i];
//         c.push_back(b[i]);
//     }
//     int idx = n;
//     for (int i = 0; i < n; i++)
//     {
//         // c[idx++] = a[i];
//         c.push_back(a[i]);
//     }

//     for (int i = 0; i < n + n; i++)
//     {
//         cout << c[i] << " ";
//     }
// }

void NewArray(vector<int> a, vector<int> b, vector<int> c, int n)
{
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        // c[i] = b[i];
        d.push_back(b[i]);
    }
    int idx = n;
    for (int i = 0; i < n; i++)
    {
        // c[idx++] = a[i];
        d.push_back(a[i]);
    }

    for (int i = 0; i < n + n; i++)
    {
        cout << d[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // method 1: just print
    // for (int i = 0; i < n; i++)
    // {
    //     cout << b[i] << " ";
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // method 2: copy in c vector
    vector<int> c(n + n);
    // for (int i = 0; i < n; i++)
    // {
    //     c[i] = b[i];
    // }
    // int idx = n;
    // for (int i = 0; i < n; i++)
    // {
    //     c[idx++] = a[i];
    // }

    // for (int i = 0; i < n + n; i++)
    // {
    //     cout << c[i] << " ";
    // }

    // method 3: using function
    NewArray(a, b, c, n);

    return 0;
}