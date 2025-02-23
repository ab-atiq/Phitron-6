// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        string s;
        cin >> s;

        stack<char> st;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (st.empty()) // stack is empty then pop impossible so push the element first
                st.push(s[i]);
            else if (st.top() == '0' && s[i] == '1')
                st.pop();
            // else if (st.top() == '1' && s[i] == '0')
            //     st.pop();
            else
                st.push(s[i]);
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}