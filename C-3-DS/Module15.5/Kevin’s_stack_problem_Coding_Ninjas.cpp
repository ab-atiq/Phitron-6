#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> st;
    // Push all characters of the string onto the stack
    for (char ch : s)
    {
        st.push(ch);
    }

    // Pop characters from the stack to reverse the string
    string reversedString = "";
    while (!st.empty())
    {
        reversedString += st.top();
        st.pop();
    }

    return reversedString;
}
