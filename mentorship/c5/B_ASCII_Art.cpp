/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc294/tasks/abc294_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    int arr[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print the array
    // for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // print . if value is 0 else print upper character of corresponding ascii value
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (arr[i][j] == 0)
                cout << ".";
            else
                cout << (char)('A' + arr[i][j] - 1);
        }
        cout << endl;
    }
    return 0;
}

// cps
#include <stdio.h>

int main()
{

    int h, w;
    scanf("%d%d", &h, &w);

    int A[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (A[i][j] == 0)
            {
                printf(".");
            }
            else
            {
                printf("%c", 64 + A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
