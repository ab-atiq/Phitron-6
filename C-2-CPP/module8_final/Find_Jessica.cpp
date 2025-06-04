#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    stringstream ss(S);

    string word;
    bool found = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}