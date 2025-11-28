// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (char c : s)
    {
        c = toupper(c); // Convert to uppercase
        if (c == 'E')
            e++;
        else if (c == 'G')
            g++;
        else if (c == 'Y')
            y++;
        else if (c == 'P')
            p++;
        else if (c == 'T')
            t++;
    }

    cout << min({e, g, y, p, t}) << endl;
    return 0;
}

// solution using frequency array
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s)
    {
        c = toupper(c); // Convert to uppercase
        freq[c - 'A']++;
    }
    cout << min({freq['E' - 'A'], freq['G' - 'A'], freq['Y' - 'A'], freq['P' - 'A'], freq['T' - 'A']}) << endl;
    return 0;
}