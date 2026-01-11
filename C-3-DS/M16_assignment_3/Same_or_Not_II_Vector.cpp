#include <iostream>
#include <vector>
using namespace std;

class MyStack
{
private:
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        // if (v.empty())
        // {
        //     cout << "Stack is empty" << endl;
        //     return;
        // }
        v.pop_back();
    }
    int top()
    {
        // if (v.empty())
        // {
        //     cout << "Stack is empty" << endl;
        //     return -1;
        // }
        return v.back();
    }
    // int size()
    // {
    //     return v.size();
    // }
    bool isEmpty()
    {
        return v.empty();
    }
};

class myQueue
{
private:
    vector<int> v;
    int frontIndex;

public:
    myQueue()
    {
        frontIndex = 0;
    }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        // v.erase(v.begin()); // O(n)
        frontIndex++;
    }
    int front()
    {
        // return v.front();
        return v[frontIndex];
    }
    // int size()
    // {
    //     return v.size();
    // }
    bool empty()
    {
        // return v.empty();
        // return frontIndex >= (int)v.size(); // size_t
        return frontIndex >= static_cast<int>(v.size()); // modern approach
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