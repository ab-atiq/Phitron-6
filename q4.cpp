#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> mp;

        string hight_frq_word = "";
        int max_count = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max_count || (mp[word] == max_count && hight_frq_word == ""))
            {
                hight_frq_word = word;
                max_count = mp[word];
            }
        }

        cout << hight_frq_word << " " << max_count << endl;
    }

    return 0;
}