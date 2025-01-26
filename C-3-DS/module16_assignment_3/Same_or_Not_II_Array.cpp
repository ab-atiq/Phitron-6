#include <iostream>
using namespace std;

class MyStack
{
private:
    int arr[1000000]; // Fixed-size array
    int topIndex;

public:
    MyStack()
    {
        topIndex = -1;
    }

    void push(int val)
    {
        arr[++topIndex] = val;
    }

    void pop()
    {
        topIndex--;
    }

    int top()
    {
        return arr[topIndex];
    }

    int size()
    {
        return topIndex + 1;
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
};

class myQueue
{
private:
    int arr[1000000]; // Fixed-size array
    int frontIndex, rearIndex;

public:
    myQueue()
    {
        frontIndex = 0;
        rearIndex = -1;
    }

    void push(int val)
    {
        arr[++rearIndex] = val;
    }

    void pop()
    {
        frontIndex++;
    }

    int front()
    {
        return arr[frontIndex];
    }

    int size()
    {
        return rearIndex - frontIndex + 1;
    }

    bool empty()
    {
        return frontIndex > rearIndex;
    }
};

int main()
{
    MyStack st;
    myQueue q;

    int n, m;
    cin >> n >> m;

    // Input for stack
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    // Input for queue
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // If sizes of stack and queue are not equal, immediately output NO
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    // Compare stack and queue values
    while (!st.isEmpty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}
