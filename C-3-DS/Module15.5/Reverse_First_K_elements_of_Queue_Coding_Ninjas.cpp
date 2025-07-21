#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    if (k == 0 || q.empty() || k > q.size())
        return q;

    stack<int> st;

    // Step 1: Push the first k elements into the stack
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Pop elements from the stack and enqueue them into a new queue
    queue<int> q1;
    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    // Step 3: Add the remaining elements from the original queue to the new queue
    while (!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }

    return q1;
}