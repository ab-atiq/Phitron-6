#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    // stack copy into another stack
    // stack<int> st2 = st; // This will create a copy of the stack. order will be same as st

    stack<int> st2;
    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    return 0;
}