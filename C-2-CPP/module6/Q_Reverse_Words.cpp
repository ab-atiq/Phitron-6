#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    // Reverse each word in the input string. here first word is reversed separately to avoid leading space
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;

    // Continue to reverse the rest of the words
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}