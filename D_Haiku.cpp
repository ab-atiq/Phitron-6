#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> need = {5, 7, 5};
    vector<int> got(3, 0);
    string line;

    for (int i = 0; i < 3; i++)
    {
        getline(cin, line);
        if (line.empty())
        {
            i--;
            continue;
        }
        
        for (char c : line)
        {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                got[i]++;
        }
    }

    if (got == need)
        cout << "YES\n";
    else
        cout << "NO\n";
}
