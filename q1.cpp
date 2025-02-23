#include <bits/stdc++.h>

using namespace std;

pair<string, int> countMostFrequentWord(const string &sentence)
{
    map<string, int> wordCount;
    stringstream stream(sentence);
    string word;
    string mostFrequentWord;
    int maxCount = 0;

    while (stream >> word)
    {
        wordCount[word]++;
        if (wordCount[word] > maxCount)
        {
            maxCount = wordCount[word];
            mostFrequentWord = word;
        }
    }

    return make_pair(mostFrequentWord, maxCount);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    vector<pair<string, int>> results;
    for (int i = 0; i < t; ++i)
    {
        string sentence;
        getline(cin, sentence);
        results.push_back(countMostFrequentWord(sentence));
    }

    for (size_t i = 0; i < results.size(); ++i)
    {
        cout << results[i].first << " " << results[i].second << endl;
    }

    return 0;
}
