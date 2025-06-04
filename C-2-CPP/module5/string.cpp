#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10] = "Hello";
    // s = "Gello"; // cannot assign to array
    strcpy(s, "Gello"); // use strcpy to change the content of the array
    cout << s << endl;  // Output: Gello

    string str = "Hello";
    str = "Gello";       // can assign to string object
    cout << str << endl; // Output: Gello

    char s2[10] = "Mello";
    if (strcmp(s, s2) == 0)
    {
        cout << "Equal/Same" << endl;
    }
    else
    {
        cout << "Not equal/Same" << endl;
    }

    string str2 = "Gello";
    if (str == str2)
    {
        cout << "Equal/Same" << endl;
    }
    else
    {
        cout << "Not equal/Same" << endl;
    }

    str = "Hi, How are you?";
    cout << str << endl; // Output: Hi, How are you?

    return 0;
}