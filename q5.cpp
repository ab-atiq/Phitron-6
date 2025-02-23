#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int max_s_val = 0;
        string max_s = "";
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_s_val || (mp[word] == max_s_val && max_s == ""))
            {
                max_s_val = mp[word];
                max_s = word;
            }
        }
        cout << max_s << " " << max_s_val << endl;
    }
    return 0;
}
