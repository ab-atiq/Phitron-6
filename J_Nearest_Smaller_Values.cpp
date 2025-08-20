#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    vector<int> ans(n);
    stack<int> st; 

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && x[st.top()] >= x[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = 0;
        else
            ans[i] = st.top() + 1; 
        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}
