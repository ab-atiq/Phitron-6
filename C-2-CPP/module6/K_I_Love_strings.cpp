#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // char s[51], t[51];
        // scanf("%s %s", &s, &t);
        string s, t;
        cin >> s >> t;

        // int len_s = strlen(s);
        // int len_t = strlen(t);

        int len_s = s.length();
        int len_t = t.length();

        // both string print
        int i = 0, j = 0;
        while (i < len_s && j < len_t)
        {
            // printf("%c%c", s[i], t[j]);
            cout << s[i] << t[j];
            i++;
            j++;
        }

        // s string remaining print
        while (i < len_s)
        {
            // printf("%c", s[i]);
            cout << s[i];
            i++;
        }

        // t string remaining print
        while (j < len_t)
        {
            // printf("%c", t[j]);
            cout << t[j];
            j++;
        }
        // printf("\n"); // test case seperated by new line
        cout << endl;
    }

    return 0;
}