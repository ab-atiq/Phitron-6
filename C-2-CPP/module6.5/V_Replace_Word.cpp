// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size();)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            cout << ' ';
            i += 5;
        }
        else
        {
            cout << s[i];
            i++;
        }
    }
    cout << endl;
    return 0;
}

// solution - 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    for (size_t i = 0; i < s.length();)
    {
        //  if (strncmp(&s[i], "EGYPT", 5) == 0) // it is for character array

        if (s.substr(i, 5) == "EGYPT")
        {
            result += ' ';
            i += 5;
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
}

// find & replace method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string target = "EGYPT";

    // Replace all occurrences of "EGYPT" with a space
    size_t pos = s.find(target);
    while (pos != string::npos)
    {
        s.replace(pos, target.size(), " ");
        pos = s.find(target, pos + 1); // continue searching
    }

    cout << s;
    return 0;
}
