#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    int odd_index = -1;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string first_half = "", middle = "", second_half = "";

    for (int i = 0; i < 26; i++)
    {
        string part(freq[i] / 2, 'A' + i);
        first_half += part;
        if (freq[i] % 2 != 0)
        {
            middle = string(freq[i], 'A' + i);
        }
    }

    second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half + middle + second_half << endl;

    return 0;
}

// appropriate code solution 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    int odd_index = -1;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string first_half = "", middle = "", second_half = "";

    for (int i = 0; i < 26; i++)
    {
        int half = freq[i] / 2;
        first_half += string(half, 'A' + i);
    }

    if (odd_index != -1)
    {
        middle = string(freq[odd_index] % 2, 'A' + odd_index);
    }

    second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half + middle + second_half << endl;

    return 0;
}
