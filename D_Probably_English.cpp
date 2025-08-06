#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string word;
    bool found = false;

    for (int i = 0; i < N; ++i)
    {
        cin >> word;
        if (word == "and" || word == "not" || word == "that" || word == "the" || word == "you")
        {
            found = true;
        }
    }

    if (found)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
