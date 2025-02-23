#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        string word, resultWord;
        stringstream ss(sentence);
        map<string, int> mp;

        int maxCount = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                resultWord = word;
            }
        }

        cout << resultWord << " " << maxCount << endl;
    }

    return 0;
}