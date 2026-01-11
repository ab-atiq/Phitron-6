#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
/*
my name is atiq, atiq is bad boy, atiq read in class 12. 12 is also atiq favourate number.
12 1
12. 1
also 1
atiq 3
atiq, 1
bad 1
boy, 1
class 1
favourate 1
in 1
is 3
my 1
name 1
number. 1
read 1
*/