#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    stack<int> s;
    queue<int> q;
    int x;
    // input in stack
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        s.push(x);
    }
    // input in queue
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        q.push(x);
    }
    // if the size of stack and queue is not equal then stack and queue not same
    if (N != M)
    {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    while (!s.empty() && !q.empty()) // while(!s.empty()) can also be used
    {
        if (s.top() != q.front())
        {
            flag = false; // if any removed element from stack and queue is not same then stack and queue not same
            break;
        }
        s.pop();
        q.pop();
    }
    flag ? cout << "YES" : cout << "NO";
    return 0;
}