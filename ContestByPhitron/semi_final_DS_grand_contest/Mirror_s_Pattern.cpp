/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else if (n == 2)
    {
        cout << "12" << endl;
        cout << "21" << endl;
    }
    else if (n == 3)
    {
        cout << "123" << endl;
        cout << "2 2" << endl;
        cout << "321" << endl;
    }
    else if (n == 4)
    {
        cout << "1234" << endl;
        cout << "2  3" << endl;
        cout << "3  2 " << endl;
        cout << "4321" << endl;
    }
    else if (n == 5)
    {
        cout << "12345" << endl;
        cout << "2   4" << endl;
        cout << "3   3" << endl;
        cout << "4   2" << endl;
        cout << "54321" << endl;
    }
    else if (n == 6)
    {
        cout << "123456" << endl;
        cout << "2    5" << endl;
        cout << "3    4" << endl;
        cout << "4    3" << endl;
        cout << "5    2" << endl;
        cout << "654321" << endl;
    }
    else if (n == 7)
    {
        cout << "1234567" << endl;
        cout << "2     6" << endl;
        cout << "3     5" << endl;
        cout << "4     4" << endl;
        cout << "5     3" << endl;
        cout << "6     2" << endl;
        cout << "7654321" << endl;
    }
    else if (n == 8)
    {
        cout << "12345678" << endl;
        cout << "2      7" << endl;
        cout << "3      6" << endl;
        cout << "4      5" << endl;
        cout << "5      4" << endl;
        cout << "6      3" << endl;
        cout << "7      2" << endl;
        cout << "87654321" << endl;
    }
    else if (n == 9)
    {
        cout << "123456789" << endl;
        cout << "2       8" << endl;
        cout << "3       7" << endl;
        cout << "4       6" << endl;
        cout << "5       5" << endl;
        cout << "6       4" << endl;
        cout << "7       3" << endl;
        cout << "8       2" << endl;
        cout << "987654321" << endl;
    }
    return 0;
}


// my code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    // first row -> 1-N print
    for (int f = 1; f <= n; f++)
    {
        cout << f;
    }
    cout << endl;

    // middle row -> num space num
    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int s = 1; s <= (n - 2); s++)
        {
            cout << " ";
        }
        cout << (n - i + 1) << endl;
    }

    // last row -> N-1 print
    for (int l = n; l >= 1; l--)
    {
        cout << l;
    }
    cout << endl;

    return 0;
}

// solve this problem using loops for better understanding and less code.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Print the first line
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    // Print the middle lines
    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }
        cout << n - i + 1 << endl;
    }

    // Print the last line if n > 1
    if (n > 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}



// /*
// ________________________
// |                      |
// |     AB Atiq          |
// |______________________|
// */

// // Problem link:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         cout << "1" << endl;
//     }
//     else if (n == 2)
//     {
//         cout << "12\n21" << endl;
//     }
//     else if (n == 3)
//     {
//         cout << "123\n2 2\n321" << endl;
//     }
//     else if (n == 4)
//     {
//         cout << "1234\n2  3\n3  2\n4321" << endl;
//     }
//     else if (n == 5)
//     {
//         cout << "12345\n2   4\n3   3\n4   2\n54321" << endl;
//     }
//     else if (n == 6)
//     {
//         cout << "123456\n2    5\n3    4\n4    3\n5    2\n654321" << endl;
//     }
//     else if (n == 7)
//     {
//         cout << "1234567\n2     6\n3     5\n4     4\n5     3\n6     2\n7654321" << endl;
//     }
//     else if (n == 8)
//     {
//         cout << "12345678\n2      7\n3      6\n4      5\n5      4\n6      3\n7      2\n87654321" << endl;
//     }
//     else if (n == 9)
//     {
//         cout << "123456789\n2       8\n3       7\n4       6\n5       5\n6       4\n7       3\n8       2\n987654321" << endl;
//     }
//     return 0;
// }

// loop solutionj
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // if (n == 1)
    // {
    //     cout << "1" << endl;
    //     return 0;
    // }
    
    // first row print 1 to n
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    // 2 row to n-1 row print
    for (int r = 2; r <= n - 1; r++)
    {
        // first column value
        cout << r;
        // space print
        for (int s = 1; s <= n - 2; s++)
        {
            cout << " ";
        }
        // last column value
        cout << n - r + 1 << endl;
    }

    // last row print n to 1
    if (n != 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}