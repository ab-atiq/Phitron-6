#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; // Hello, I am Abul Bashar Atiqur
    getline(cin, s);
    cout << s << endl; // Output: Hello, I am Abul Bashar Atiqur

    // stringstream ss(s); // Create a stringstream object with constructor

    stringstream ss; // Create a stringstream object
    ss << s;         // Insert the string into the stringstream

    string word;          // Variable to store each word
    ss >> word;           // Read the first word from the stringstream
    cout << word << endl; // Output the first word
    ss >> word;           // Read the next word from the stringstream
    cout << word << endl; // Output the second word

    int word_cnt = 2;
    // read the rest of the words in a loop
    while (ss >> word)
    {                         // Extract words from the stringstream
        cout << word << endl; // Output each word on a new line
        word_cnt++;           // Increment the word count
    }

    cout << word_cnt << endl; // Output the total number of words
    return 0;
}
