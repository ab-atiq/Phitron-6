#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    stack<int> st;
    priority_queue<int> pq;
    unordered_map<int, int> deleted;
    vector<int> answers;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            st.push(x);
            pq.push(x);
        }
        else if (type == 2)
        {
            if (!st.empty())
            {
                int val = st.top();
                st.pop();
                deleted[val]++; 
            }
        }
        else if (type == 3)
        {
            while (!pq.empty() && deleted[pq.top()] > 0)
            {
                deleted[pq.top()]--;
                pq.pop();
            }
            if (!pq.empty())
                answers.push_back(pq.top());
        }
    }

    for (int ans : answers)
        cout << ans << "\n";
    return 0;
}
