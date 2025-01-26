#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string S;
    cin >> S;

    // Vector to store the frequency of each letter ('a' to 'z')
    vector<int> freq(26, 0);

    // Count frequencies of each letter
    for (char c : S)
    {
        freq[c - 'a']++;
    }

    // Print letters and their frequencies in ascending order
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
