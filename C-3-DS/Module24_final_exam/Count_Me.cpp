#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    // getchar(); // Consume the newline character after the integer input
    cin.ignore(); // Ignore the newline character after the integer input
    while (tc--)
    {
        map<string, int> mp;
        string s;
        // getchar(); // every test case one character remove
        // cin.ignore(); // Ignore line every test case
        getline(cin, s);
        stringstream ss(s);

        string word;
        int maxCount = 0;
        string mostFrequentWord;

        // Count the frequency of each word
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                mostFrequentWord = word;
            }
        }

        // map will sort the words alphabetically by default. So, if we want to find the most frequent word, then we will get alphabetically first word if there are multiple words with the same frequency.
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     if (it->second > maxCount)
        //     {
        //         maxCount = it->second;
        //         mostFrequentWord = it->first;
        //     }
        // }

        // for (auto [key, value] : mp)
        // {
        //     if (value > maxCount)
        //     {
        //         maxCount = value;
        //         mostFrequentWord = key;
        //     }
        // }

        // Print the word counts - method 1
        // for (auto entry : mp)
        // {
        //     cout << entry.first << " " << entry.second << endl;
        // }

        // Print the word counts - method 2
        // for (auto [word, count] : mp)
        // {
        //     cout << word << " " << count << endl;
        // }

        // another way to print map - method 3
        // for (auto it = mp.begin(); it != mp.end(); ++it)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }

        // cout << mostFrequentWord << " " << maxCount << endl;
        cout << mostFrequentWord << " " << mp[mostFrequentWord] << endl;
    }
    return 0;
}