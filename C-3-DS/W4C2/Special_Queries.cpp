#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    queue<string> q;

    while (Q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "JOIN")
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (cmd == "DONE")
        {
            if (q.empty())
            {
                cout << "No Student" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}

/*
5
0 rahim
0 karim
1
0 sakib
1

output:
rahim
karim

input:
8
1
0 embappe
0 neymar
1
1
0 messi
1
1

output:
Invalid
embappe
neymar
messi
Invalid

input:
6
0 embappe
0 embappe
1
1
0 messi
1

output:
embappe
embappe
messi

*/