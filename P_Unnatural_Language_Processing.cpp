#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;

        string result;
        int i = 0;
        while (i < n)
        {
            if (i + 1 < n && !isVowel(word[i]) && isVowel(word[i + 1]))
            {
                if (i + 2 < n && !isVowel(word[i + 2]))
                {
                    if (i + 3 < n && isVowel(word[i + 3]))
                    {
                        result += word[i];
                        result += word[i + 1];
                        result += '.';
                        i += 2;
                    }
                    else
                    {
                        result += word[i];
                        result += word[i + 1];
                        result += word[i + 2];
                        result += '.';
                        i += 3;
                    }
                }
                else
                {
                    result += word[i];
                    result += word[i + 1];
                    result += '.';
                    i += 2;
                }
            }
            else
            {
                result += word[i];
                i++;
            }
        }

        if (!result.empty() && result.back() == '.')
        {
            result.pop_back();
        }

        cout << result << "\n";
    }
    return 0;
}
