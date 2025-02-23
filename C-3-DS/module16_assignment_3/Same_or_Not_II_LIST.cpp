#include <iostream>
#include <list>
#include <vector>
using namespace std;

class MyStack
{
private:
    list<int> l;

public:
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        // if (l.empty())
        // {
        //     cout << "Stack is empty" << endl;
        //     return;
        // }
        l.pop_back();
    }
    int top()
    {
        // if (l.empty())
        // {
        //     cout << "Stack is empty" << endl;
        //     return -1;
        // }
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool isEmpty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val) // O(1)
    {
        l.push_back(val);
    }
    void pop() // O(1)
    {
        l.pop_front();
    }
    int front() // O(1)
    {
        return l.front();
    }
    int back() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        return l.empty();
    }
};

int main()
{
    MyStack st;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    myQueue q;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
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
    }

    return 0;
}