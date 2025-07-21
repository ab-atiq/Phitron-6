#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
public:
    stack<int> st, min_st;

    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        st.push(num);
        if (min_st.empty())
            min_st.push(num);
        else if (min_st.top() >= num)
            min_st.push(num);
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (st.empty())
            return -1; // Stack is empty, so return -1
        int top_element = st.top();
        if (top_element == min_st.top())
            min_st.pop();
        st.pop();
        return top_element; // Return the popped element
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        if (st.empty())
            return -1; // Return -1 if stack is empty
        return st.top();
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        if (min_st.empty())
            return -1; // Return -1 if there is no minimum (empty stack)
        return min_st.top();
    }
};