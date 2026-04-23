/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int id, row_col;
//     cin >> id;
//     row_col = id / 4;
//     int is_found = 0;
//     for (int i = 0; i <= row_col + 1; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             long long int seat_id_val;
//             if (i % 2 == 0)
//             {
//                 // seat_id_val = (i * 4) + j + 1; // 1 indexed
//                 seat_id_val = (i * 4) + j;
//             }
//             else
//             {
//                 // seat_id_val = (i * 4) + (4 - j); // 1 indexed
//                 // seat_id_val = ((i + 1) * 4) + (i + j); // incorrect
//                 seat_id_val = (i * 4) + (3 - j);
//             }
//             if (seat_id_val == id)
//             {
//                 cout << i << " " << j << endl;
//                 is_found = 1;
//                 break;
//             }
//         }
//         if (is_found)
//         {
//             break;
//         }
//     }
//     return 0;
// }

/*
-> Key Idea: Each row has 4 seats, so:
    row = id / 4;

Now the tricky part is column pattern
    Even rows (0, 2, 4, …) → left to right
    Odd rows (1, 3, 5, …) → right to left

Column Formula
if (row % 2 == 0)
    col = id % 4;
else
    col = 3 - (id % 4);
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long id;
    cin >> id;

    long long row = id / 4;
    long long col;

    if (row % 2 == 0)
        col = id % 4;
    else
        col = 3 - (id % 4);

    cout << row << " " << col;

    return 0;
}