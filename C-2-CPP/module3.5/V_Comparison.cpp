#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    // cout << a << (int)s << b;
    if (s == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '<' && A < B)
        cout << "Right" << endl;
    else if (S == '>' && A > B)
        cout << "Right" << endl;
    else if (S == '=' && A == B)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;

    return 0;
}

*/