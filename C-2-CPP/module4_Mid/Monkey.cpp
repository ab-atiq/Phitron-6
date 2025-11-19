// sort char array and print string without spaces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];

    while (cin.getline(str, 100001))
    {
        // cout << str << endl;
        int len = strlen(str); // length calculate
        sort(str, str + len);
        // cout << str << endl; // space will print
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}

// char array copy to another char array without spaces
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char str[100001];
    while (cin.getline(str, 100001)) // Read entire line for character array.
    {
        int len = strlen(str);
        char result[100001];
        int j = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                result[j++] = str[i];
            }
        }
        result[j] = '\0'; // Null-terminate the result string
        sort(result, result + strlen(result));
        cout << result << endl;
    }
    return 0;
}

// char array copy to same char array without spaces
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char str[100001];
    while (cin.getline(str, 100001)) // Read entire line for character array.
    {
        int len = strlen(str);
        int j = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                str[j++] = str[i];
            }
        }
        str[j] = '\0'; // Null-terminate the result string
        sort(str, str + strlen(str));
        cout << str << endl;
    }
    return 0;
}

// built in string frequency count and print sorted without spaces
#include <iostream>
using namespace std;
int main()
{
    string s;
    // while(cin.getline(s, 1000)) // Read entire line for character array. it is not applicable for built in string.
    while (getline(cin, s)) // Reads entire lines, including spaces.
    {
        // cout << s << endl;
        int freq[26] = {0};
        int len = s.length();
        // frequency count
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
                freq[s[i] - 'a']++; // s[i] = ' ' then, ' ' - 'a' = 32 - 97 = -65 which is invalid
        }

        // print character frequency times
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= freq[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}

// create new string without spaces and sort
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char line[100005];
    while (cin.getline(line, 100005)) {
        string s;
        // Remove spaces
        for (int i = 0; line[i]; i++) {
            if (line[i] != ' ')
                s += line[i];
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}



// built-in string remove spaces using remove and erase functions
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    // Read line until EOF
    while (getline(cin, s)) {
        // remove(s.begin(), s.end(), ' '): Moves all non-space chars to the front.
        // erase(...): Actually removes the space characters.

        // Remove all spaces
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        // Sort the remaining characters
        sort(s.begin(), s.end());

        // Print the sorted string
        cout << s << endl;
    }
    return 0;
}



/*
✅ Using cin.getline() (C-style strings):
char str[100005];
while (cin.getline(str, 100005)) {
    // Process str
}
cin.getline(str, size) reads a line into a character array (C-style string).

It stops reading at a newline (\n) or EOF.

You must use a fixed-size char array and pass the size.

🔁 Comparison with getline(cin, string) (C++ string):
string s;
while (getline(cin, s)) {
    // Process s
}
Feature	          cin.getline()	                      getline(cin, s)
Works with	      char[] (C-style string)	          string (C++ STL string)
Easier to use	  ❌ Manual size, no auto expansion	✅ Auto memory handling
Recommended for new code	❌	                     ✅
Handles spaces easily	    ✅	                     ✅

*/