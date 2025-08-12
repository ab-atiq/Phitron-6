#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    queue<string> hallwayQueue;
    list<string> hallwayList;

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "ARRIVE")
        {
            string name;
            cin >> name;
            hallwayQueue.push(name);
            hallwayList.push_back(name);
        }
        else if (cmd == "SERVE")
        {
            if (hallwayQueue.empty())
            {
                cout << "No patients\n";
            }
            else
            {
                // cout << hallwayQueue.front() << "\n";
                hallwayQueue.pop();
                hallwayList.pop_front();
            }
        }
        else if (cmd == "FIRST")
        {
            if (hallwayQueue.empty())
                cout << "No patients\n";
            else
                cout << hallwayQueue.front() << "\n";
        }
        else if (cmd == "LAST")
        {
            if (hallwayList.empty())
                cout << "No patients\n";
            else
                cout << hallwayList.back() << "\n";
        }
        else if (cmd == "COUNT")
        {
            cout << (int)hallwayQueue.size() << "\n";
        }
        else if (cmd == "SHOW")
        {
            if (hallwayList.empty())
            {
                cout << "No patients\n";
            }
            else
            {
                bool first = true;
                for (const auto &name : hallwayList)
                {
                    if (!first)
                        cout << " ";
                    cout << name;
                    first = false;
                }
                cout << "\n";
            }
        }
    }

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    queue<string> hallway;

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "ARRIVE")
        {
            string name;
            cin >> name;
            hallway.push(name);
        }
        else if (cmd == "SERVE")
        {
            if (hallway.empty())
            {
                cout << "No patients\n";
            }
            else
            {
                // cout << hallway.front() << "\n";
                hallway.pop();
            }
        }
        else if (cmd == "FIRST")
        {
            if (hallway.empty())
                cout << "No patients\n";
            else
                cout << hallway.front() << "\n";
        }
        else if (cmd == "LAST")
        {
            if (hallway.empty())
            {
                cout << "No patients\n";
            }
            else
            {
                // To get last element, dequeue all elements except last and re-enqueue
                int sz = (int)hallway.size();
                string lastPatient;
                for (int i = 0; i < sz; i++)
                {
                    string cur = hallway.front();
                    hallway.pop();
                    hallway.push(cur);
                    if (i == sz - 1)
                        lastPatient = cur;
                }
                cout << lastPatient << "\n";
            }
        }
        else if (cmd == "COUNT")
        {
            cout << (int)hallway.size() << "\n";
        }
        else if (cmd == "SHOW")
        {
            if (hallway.empty())
            {
                cout << "No patients\n";
            }
            else
            {
                int sz = (int)hallway.size();
                for (int i = 0; i < sz; i++)
                {
                    string cur = hallway.front();
                    hallway.pop();
                    cout << cur;
                    if (i != sz - 1)
                        cout << " ";
                    hallway.push(cur);
                }
                cout << "\n";
            }
        }
    }

    return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int query;
    cin >> query;
    while (query--)
    {
        string instruction;
        cin >> instruction;
        if (instruction == "ARRIVE")
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (instruction == "SERVE")
        {
            if (!q.empty())
            {
                // cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (instruction == "FIRST")
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (instruction == "LAST")
        {
            if (!q.empty())
            {
                cout << q.back() << endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (instruction == "COUNT")
        {
            cout << q.size() << endl;
        }
        else if (instruction == "SHOW")
        {
            if (!q.empty())
            {
                queue<string> temp = q;
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
    }
    return 0;
} */