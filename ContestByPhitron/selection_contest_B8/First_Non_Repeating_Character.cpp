/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem Link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/first-non-repeating-character-19-2

// Time Complexity: O(N)
// Space Complexity: O(26) ~ O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     int freq[26] = {0};
//     for (char ch : str)
//     {
//         freq[ch - 'a']++;
//     }
//     for (char ch : str)
//     {
//         if (freq[ch - 'a'] == 1)
//         {
//             cout << ch << endl;
//             return 0;
//         }
//     }
//     cout << -1 << endl;
//     return 0;
// }

// another approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        bool isUnique = true;
        // wrong approach
        // for (int j = i + 1; j < len; j++)
        // {
        //     if (str[i] == str[j])
        //     {
        //         isUnique = false;
        //         break;
        //     }
        // }
        for (int j = 0; j < len; j++)
        {
            if (i != j && str[i] == str[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << str[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}