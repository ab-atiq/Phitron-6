#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int numTestCases;
    cin >> numTestCases;
    cin.ignore(); // Ignore the newline after the number of test cases

    for (int t = 0; t < numTestCases; ++t)
    {
        string sentence;
        getline(cin, sentence); // Read the sentence

        vector<pair<string, int>> wordCount; // Stores words and their counts
        stringstream ss(sentence);
        string word;

        // Count occurrences of each word
        while (ss >> word)
        {
            bool found = false;
            for (auto &pair : wordCount)
            {
                if (pair.first == word)
                {
                    pair.second++; // Increment count if word exists
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                wordCount.push_back({word, 1}); // Add new word with count 1
            }
        }

        // Find the word with the maximum count
        string mostFrequentWord;
        int maxCount = 0;
        for (const auto &pair : wordCount)
        {
            if (pair.second > maxCount)
            {
                maxCount = pair.second;
                mostFrequentWord = pair.first;
            }
        }

        // Output the result
        cout << mostFrequentWord << " " << maxCount << endl;
    }

    return 0;
}