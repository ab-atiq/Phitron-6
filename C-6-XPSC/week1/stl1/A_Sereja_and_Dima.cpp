/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/problemset/problem/381/A

// sort in descending
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int sereja_point = 0, dima_point = 0;
//     sort(v.begin(), v.end(), greater<int>()); // wrong process. Because, You sorted the array in decreasing order. But in the game, players cannot take any card they want. They can only take: i) the leftmost card, ii) or the rightmost card. So the original order of the array is very important.

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//         if (i % 2 == 0)
//         {
//             sereja_point += v[i];
//         }
//         else
//         {
//             dima_point += v[i];
//         }
//     }
//     cout << endl;
//     cout << sereja_point << " " << dima_point << endl;
//     return 0;
// }

// Two pointer technique solution - array or vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = n - 1;

    int sereja_point = 0;
    int dima_point = 0;

    bool sereja_turn = true;

    while (l <= r)
    {
        int taken;

        if (v[l] > v[r])
        {
            taken = v[l];
            l++;
        }
        else
        {
            taken = v[r];
            r--;
        }

        if (sereja_turn)
        {
            sereja_point += taken;
        }
        else
        {
            dima_point += taken;
        }

        // sereja_turn = !sereja_turn;
        sereja_turn == true ? sereja_turn = false : sereja_turn = true;
    }

    cout << sereja_point << " " << dima_point << endl;

    return 0;
}

// // greedy but choose only from first or last element - list solution
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     list<int> l;
//     int x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         l.push_back(x);
//     }

//     int sereja_point = 0, dima_point = 0;
//     bool choose_tern = true; // true means sereja
//     while (!l.empty())
//     {
//         int mx = max(l.front(), l.back());
//         if (choose_tern)
//         {
//             sereja_point += mx;
//             // choose_tern = false;
//         }
//         else
//         {
//             dima_point += mx;
//             // choose_tern = true;
//         }

//         if (mx == l.front())
//         {
//             l.pop_front();
//         }
//         else
//         {
//             l.pop_back();
//         }
//         choose_tern ? choose_tern = false : choose_tern = true;
//     }
//     cout << sereja_point << " " << dima_point << endl;
//     return 0;
// }

// greedy but choose only from first or last element - deque solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int sereja_point = 0, dima_point = 0;
    bool choose_tern = true; // true means sereja
    int who = 1;
    while (!dq.empty())
    {
        // method 1
        // int mx = max(dq.front(), dq.back());
        // if (choose_tern)
        // {
        //     sereja_point += mx;
        //     // choose_tern = false;
        // }
        // else
        // {
        //     dima_point += mx;
        //     // choose_tern = true;
        // }

        // if (mx == dq.front())
        // {
        //     dq.pop_front();
        // }
        // else
        // {
        //     dq.pop_back();
        // }
        // choose_tern ? choose_tern = false : choose_tern = true;

        // method 2
        // if (dq.front() < dq.back())
        // {
        //     if (choose_tern)
        //     {
        //         sereja_point += dq.back();
        //         choose_tern = false;
        //         dq.pop_back();
        //     }
        //     else
        //     {
        //         dima_point += dq.back();
        //         choose_tern = true;
        //         dq.pop_back();
        //     }
        // }
        // else
        // {
        //     if (choose_tern)
        //     {
        //         sereja_point += dq.front();
        //         choose_tern = false;
        //         dq.pop_front();
        //     }
        //     else
        //     {
        //         dima_point += dq.front();
        //         choose_tern = true;
        //         dq.pop_front();
        //     }
        // }

        // method 3 - xpsc
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if (who % 2 == 1)
        {
            sereja_point += mx;
        }
        else
        {
            dima_point += mx;
        }

        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        who++;
    }
    cout << sereja_point << " " << dima_point << endl;
    return 0;
}