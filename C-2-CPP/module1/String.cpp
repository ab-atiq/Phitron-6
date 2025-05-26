#include <iostream>
using namespace std;

int main()
{
    char s[100];

    // scanf("%s",s);
    // cin >> s;          // Hello
    // cout << s << endl; // Hello

    // cin >> s;          // Hello World
    // cout << s << endl; // Hello

    // fgets(s, 100, stdin); // Hello World
    // cout << s << endl;    // Hello World

    // cin.getline(s, 100);  // Hello World
    // cout << s << endl;    // Hello World

    int x; // 10
    cin >> x;
    cin.ignore();        // take 'enter' as input
    cin.getline(s, 100); // can not get input because enter key will take as input. we can ignore enter using cin.ignore()
    cout << x << " " << s << endl;

    string str; // built in string data type
    cin >> str;
    cout << str << endl;

    return 0;
}