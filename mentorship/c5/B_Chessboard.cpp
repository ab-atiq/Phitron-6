/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc296/tasks/abc296_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 8, col = 8;
    char chessboard[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> chessboard[i][j];
        }
        cin.ignore(); // To ignore the newline character after each row input
    }
    // print the chessboard
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << chessboard[i][j];
    //     }
    //     cout << endl;
    // }
    // Find the position of the start '*'
    int ri, rj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (chessboard[i][j] == '*')
            {
                ri = i;
                rj = j;
            }
        }
    }
    // Calculate the position of the target
    int target_i = 7 - ri;                    // since calculating from bottom
    char target_j = 'a' + rj;                 // converting to character
    cout << target_j << target_i + 1 << endl; // +1 because rows are 1-indexed in chess notation
    return 0;
}

// solution using string array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 8, col = 8;
    string chessboard[row];
    for (int i = 0; i < row; i++)
    {
        // getline(cin, chessboard[i]);
        cin >> chessboard[i];
    }
    // Find the position of the start '*'
    int ri, rj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (chessboard[i][j] == '*')
            {
                ri = i;
                rj = j;
            }
        }
    }
    // Calculate the position of the target
    int target_i = 7 - ri;                    // since calculating from bottom
    char target_j = 'a' + rj;                 // converting to character
    cout << target_j << target_i + 1 << endl; // +1 because rows are 1-indexed in chess notation
    return 0;
}