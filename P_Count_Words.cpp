#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int counter = 0;
    bool inWord = false;

    for (char ch : s)
    {
        if (isalpha(ch))
        {
            if (!inWord)
            {
                counter++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << counter << "\n";

    return 0;
}
