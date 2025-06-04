/*
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); ) {
        if (s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T') {
            cout << ' ';
            i += 5;
        } else {
            cout << s[i];
            i++;
        }
    }
    cout << endl;
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    for (size_t i = 0; i < s.length();)
    {
        //  if (strncmp(&s[i], "EGYPT", 5) == 0) // it is for character array

        if (s.substr(i, 5) == "EGYPT")
        {
            result += ' ';
            i += 5;
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;
    return 0;
}
