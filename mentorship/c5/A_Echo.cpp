/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://atcoder.jp/contests/abc306/tasks/abc306_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    string ans = "";
    for (char c : S)
    {
        ans += c;
        ans += c;
    }

    cout << ans << endl;
    return 0;
}

// short version
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    for (char c : S)
        cout << c << c;
    return 0;
}
