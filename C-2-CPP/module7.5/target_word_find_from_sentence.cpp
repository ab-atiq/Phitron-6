#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string sentence, wordToFind;

    // Read the full sentence (including spaces)
    getline(cin, sentence);

    // Read the word to search
    cin >> wordToFind;

    istringstream ss(sentence); // breaks sentence into words

    int count = 0;
    string word;
    while (ss >> word)
    {
        if (word == wordToFind)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
/*  
input:
Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
john

output:
2
*/