#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> fre(26, 0);
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        fre[s[i] - 'a']++;
    }

    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            cout << char(i + 'a') << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "None" << endl;
    return 0;
}