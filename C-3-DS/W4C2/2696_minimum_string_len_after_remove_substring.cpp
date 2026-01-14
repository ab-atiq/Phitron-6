/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minLength(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (st.top() == 'A' && c == 'B')
            {
                st.pop();
            }
            else if (st.top() == 'C' && c == 'D')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        return st.size();
    }
};

// pias
class Solution
{
public:
    int minLength(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else
            {
                if (c == 'B' && st.top() == 'A' || c == 'D' && st.top() == 'C')
                    st.pop();
                else
                    st.push(c);
            }
        }
        return st.size();
    }
};