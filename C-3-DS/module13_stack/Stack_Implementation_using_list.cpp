#include <iostream>
#include <list>
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
// input:
5
1 2 3 4 5

// output:
5
4
3
2
1
*/
