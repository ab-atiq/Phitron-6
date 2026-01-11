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
    MyStack st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    // printing stack 1
    // while (!st1.isEmpty())
    // {
    //     cout << st1.top() << " ";
    //     st1.pop();
    // }
    // cout << endl;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    // printing stack 2
    // while (!st2.isEmpty())
    // {
    //     cout << st2.top() << " ";
    //     st2.pop();
    // }
    // cout << endl;

    if (st1.size() != st2.size())
    {
        cout << "Not same" << endl;
        return 0;
    }

    bool same = true;
    // while (!st1.isEmpty() && !st2.isEmpty())
    while (!st1.isEmpty()) // it will work properly as both stacks are of same size
    {
        if (st1.top() != st2.top())
        {
            same = false;
            break;
        }
        st1.pop();
        st2.pop();
    }
    // if (same && st1.isEmpty() && st2.isEmpty())
    if (same)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }

    return 0;
}

/*
// input:
5
10 20 30 40 50
5
10 20 30 40 50

// output:
YES

// input:
5
10 20 30 40 50
4
10 20 30 40
// output:
Not same

*/
