#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> roots;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        set<char> letters(word.begin(), word.end());

        string root(letters.begin(), letters.end());

        roots.insert(root);
    }

    cout << roots.size() << endl;
    return 0;
}
