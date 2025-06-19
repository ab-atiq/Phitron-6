#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // vector<string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (string s : v)
    // {
    //     cout << s << endl;
    // }

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}

/*
5
atiq
rony
mahmudul
rakib
rashel

output:
atiq
rony
mahmudul
rakib
rashel


input:
5
atiqur rahman
rony islam
mahmudul alam
rakib hasan
asadujjaman rashel
*/