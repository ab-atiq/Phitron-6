#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        stringstream ss(str);

        map<string, int> mp;
        string maxword;
        int maxcount = 0;

        string word;
        while (ss >> word)
        {

            mp.insert({word, 0});
            mp[word]++;

            if (mp[word] > maxcount)
            {
                maxcount = mp[word];
                maxword = word;
            }
        }
        cout << maxword << " " << maxcount << endl;
    }

    return 0;
}