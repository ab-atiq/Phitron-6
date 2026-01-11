#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // Reverse the queue using a stack
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // copy stack to queue one by one. now the queue is reversed
    queue<int> copy_q_rev;
    while (!st.empty())
    {
        copy_q_rev.push(st.top());
        st.pop();
    }

    // Print the reversed queue
    while (!copy_q_rev.empty())
    {
        cout << copy_q_rev.front() << " ";
        copy_q_rev.pop();
    }
    return 0;
}