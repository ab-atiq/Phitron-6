#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int tcs;
    cin >> tcs;
    getchar();
    while (tcs--)
    {
        string sent;
        getline(cin, sent);

        stringstream sntc(sent);
        string word;

        map<string, int> frq_map;

        int _max = INT_MIN;
        string frq_word;

        while (sntc >> word)
        {
            frq_map[word]++;

            if (frq_map[word] > _max)
            {
                _max = frq_map[word]; // i am updating here
                frq_word = word;      // store that word which is most frequent first
            }
        }
        cout << frq_word << " " << _max << endl;
    }

    return 0;
}