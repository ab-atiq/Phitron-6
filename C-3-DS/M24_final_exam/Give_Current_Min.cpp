#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // create a min-heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    // perform operations based on queries
    int query;
    cin >> query;
    while (query--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            // command 0: insert a new element  and print the current minimum element in the min-heap
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            // command 1: print the current minimum element in the min-heap
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (command == 2)
        {
            // command 2: remove the current minimum element from the min-heap and print the new minimum element
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
        }
    }
    return 0;
}

// --------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    vector<int> A(N);

    // Input the initial list
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Create a min-heap using priority_queue with greater<int> comparator
    priority_queue<int, vector<int>, greater<int>> minHeap(A.begin(), A.end());

    cin >> Q;

    // Process queries
    for (int i = 0; i < Q; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            // Insert X into the heap
            int X;
            cin >> X;
            minHeap.push(X);
            cout << minHeap.top() << endl;
        }
        else if (command == 1)
        {
            // Print the current minimum value
            if (minHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << minHeap.top() << endl;
            }
        }
        else if (command == 2)
        {
            // Delete the current minimum value and print the new minimum
            if (minHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                minHeap.pop();
                if (minHeap.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << minHeap.top() << endl;
                }
            }
        }
    }

    return 0;
}
