class Solution
{
public:
    string makeGood(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
                st.push(c);
            else
            {
                if (c + 32 == st.top() || c - 32 == st.top())
                    st.pop();
                else
                    st.push(c);
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};