#include <bits/stdc++.h>

using namespace std;

void wordCount() {
    int T;
    cin >> T;  
    cin.ignore(); 
    
    while (T--) {
        string sentence;
        getline(cin, sentence); 
        
        map<string, int> wordCount; 
        string word;
        string maxWord;
        int maxCount = 0;

        stringstream ss(sentence);
        while (ss >> word) {
            wordCount[word]++;  
            if (wordCount[word] > maxCount) {
                maxWord = word;
                maxCount = wordCount[word];
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }
}

int main() {
    wordCount();
    return 0;
}

