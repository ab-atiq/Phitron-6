/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/m-th-character-of-compression

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp_str;
    int m;
    cin >> inp_str >> m;
    int len = inp_str.length();
    string result = "";
    for (int i = 0; i < len; i++)
    {
        char ch = inp_str[i];
        int num = -1; // default value indicating no digit found
        if (inp_str[i + 1] != '\0')
            num = inp_str[i + 1] - '0';
        if ((ch >= 'a' && ch <= 'z') && (num >= 0 && num <= 9))
        {
            for (int j = 0; j < num; j++)
            {
                result += ch;
            }
            i++;
        }
        else
        {
            result += ch;
        }
    }
    // cout << result << endl;
    cout << result[m - 1] << endl;
    return 0;
}