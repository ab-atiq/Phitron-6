#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ops = 0;
        for (int i = 0; i <= n - k;)
        {
            if (s[i] == 'B')
            {
                ops++;
                for (int j = 0; j < k; ++j)
                    s[i + j] = 'W'; 
                i++;                
            }
            else
            {
                i++;
            }
        }

        for (int i = n - k + 1; i < n; ++i)
        {
            if (s[i] == 'B')
            {
                ops++;
                break; 
            }
        }

        cout << ops << "\n";
    }

    return 0;
}
