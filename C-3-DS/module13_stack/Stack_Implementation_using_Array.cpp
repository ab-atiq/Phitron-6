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
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    /*
        cout << "Size of stack: " << st.size() << endl;
        cout << st.top() << endl;
        st.pop();
        cout << st.top() << endl;
        st.pop();
        cout << st.top() << endl;
        st.pop();
        if (!st.isEmpty())
            cout << st.top() << endl;
        if (!st.isEmpty())
            st.pop();
    */
    while (!st.isEmpty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}

/*
Input:
5
1 2 3 4 5
Output:
5
4
3
2
1
*/