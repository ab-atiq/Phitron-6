/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.codechef.com/problems/ROOMALLOC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int rooms = 0;
        for (int i = 1; i <= n; i++)
        {
            int students;
            cin >> students;
            // both university will not stay same room
            // ceiling of students/2 is (students + 1) / 2
            rooms += (students + 1) / 2; // Each room can hold 2 students
        }
        cout << rooms << endl;
    }
    return 0;
}