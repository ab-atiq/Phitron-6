#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char s[105], t[105];
    cin >> s >> t;

    bool isPrefix = true, isSuffix = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            isPrefix = false;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[m - n + i])
        {
            isSuffix = false;
            break;
        }
    }

    if (isPrefix && isSuffix)
        cout << 0 << endl;
    else if (isPrefix)
        cout << 1 << endl;
    else if (isSuffix)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}
