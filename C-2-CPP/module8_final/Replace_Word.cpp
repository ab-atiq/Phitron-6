#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        string S, X;
        cin >> S >> X;

        // method 1: find and replace
        // if (S.find(X) != string::npos) // this check only one times
        // while (S.find(X) != string::npos) // this check multiple times
        // {
        //     S.replace(S.find(X), X.size(), "#");
        // }
        // cout << S << endl;

        // method 2: find, erase and insert
        while (1)
        {
            int x_idx = S.find(X);
            if (x_idx == -1)
            {
                break;
            }
            S.erase(x_idx, X.length());
            S.insert(x_idx, "#");

            /*
            index = s.find(x);

            if(index!=-1)
            {
                s.replace(index, x.size(), "#");
            }
            else
            {
                break;
            }
            */
        }
        cout << S << endl;
    }

    return 0;
}

/*
Replace word from sentence with given string X
3
helloworld wor
mynameisatiqisatiq is
phitronisgoodphitronisgood good


output
hello#ld
myname#atiq#atiq
phitronis#phitronis#

*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();

        for (int i = 0; i <= n - m; i++) {
            bool flag = true;
            for (int j = 0; j < m; j++) {
                if (s[i + j] != t[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                s.replace(i, m, "#");
            }
        }
        cout << s << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, x;
        cin >> s >> x;
        int size_of_word = x.size();
        for (int i = 0; i < s.size(); i++)
        {
            string word = s.substr(i, size_of_word);
            if (word == x)
            {
                s[i] = '#';
                s.erase(i + 1, size_of_word - 1);
            }
        }
        cout << s << endl;
    }

    return 0;
}

*/