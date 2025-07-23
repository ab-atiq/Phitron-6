#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!s.empty() && !q.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}