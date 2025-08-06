#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> numbers;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '+')
        {
            numbers.push_back(s[i]);
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); ++i)
    {
        if (i > 0)
            cout << "+";
        cout << numbers[i];
    }

    cout << endl;
    return 0;
}
