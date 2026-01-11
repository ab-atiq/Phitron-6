#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // If sizes are different, stack and queue cannot be the same
    if (N != M)
    {
        cout << "NO";
        return 0;
    }

    stack<int> s;
    queue<int> q;
    int x;

    // Input stack elements
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        s.push(x);
    }

    // Input queue elements
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        q.push(x);
    }

    // Compare stack and queue elements
    while (!s.empty())
    {
        // No need to check `!q.empty()` since sizes are equal
        if (s.top() != q.front())
        {
            cout << "NO";
            return 0; // Exit early if mismatch is found
        }
        s.pop();
        q.pop();
    }

    cout << "YES"; // All elements match
    return 0;
}
