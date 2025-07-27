#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[200005];
    cin >> s;

    bool seen[26][200005] = {false};
    int result = 0;

    int i = 0;
    while (i < n)
    {
        char ch = s[i];
        int len = 1;
        while (i + len < n && s[i + len] == ch)
        {
            len++;
        }

        int index = ch - 'a';
        for (int l = 1; l <= len; l++)
        {
            if (!seen[index][l])
            {
                seen[index][l] = true;
                result++;
            }
        }

        i += len;
    }

    cout << result << endl;
    return 0;
}
