#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    int balance = 0, needLeft = 0;
    for (char c : S)
    {
        if (c == '(')
        {
            balance++;
        }
        else
        { // c == ')'
            balance--;
            if (balance < 0)
            {
                needLeft++;
                balance = 0;
            }
        }
    }

    int needRight = balance; // extra ')' needed
    string result(needLeft, '(');
    result += S;
    result.append(needRight, ')');

    cout << result << "\n";
    return 0;
}
