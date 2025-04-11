#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int freq[26] = {0};
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        freq[str[i] - 'a']++;
    }
    string result = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            result += char('a' + i);
        }
    }
    cout << result << endl;
    return 0;
}