/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa

/*
1      1
12    21
123  321
12344321
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 4;
//     // cin>>n;
//     // loop for every line
//     for (int i = 1; i <= n; i++)
//     {
//         // print first num
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         // print space
//         for (int j = 8; j >= i * 2 + 1; j--)
//         {
//             cout << " ";
//         }
//         // print last num reverse
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r = 5;

//     int flag = 0;
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             // cout << j % 2 << " ";
//             // cout << (j + i - 1) % 2 << " ";
//             cout << (j + flag) % 2 << " ";
//         }
//         cout << endl;
//         flag == 0 ? flag = 1 : flag = 0;
//     }
//     return 0;
// }

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r = 6;
//     int mid_cnt = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         // space print
//         for (int j = 1; j <= (r - i); j++)
//         {
//             cout << " ";
//         }
//         // asc character print
//         // for (int j = 1; j <= (i / 2 + 1); j++) // wrong
//         for (int j = 1; j <= mid_cnt; j++)
//         {
//             cout << (char)('A' + j - 1);
//         }

//         // reverse character print
//         // for (int j = i / 2; j >= 1; j--) // wrong
//         for (int j = mid_cnt - 1; j >= 1; j--)
//         {
//             cout << (char)('A' + j - 1);
//         }
//         cout << endl;
//         mid_cnt++;
//     }
//     return 0;
// }

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - i;
            int bottom = (2 * n - 2) - j;
            int min_dis = min({top, left, right, bottom});
            // cout << min_dis;
            cout << n - min_dis;
        }
        cout << endl;
    }
    return 0;
}