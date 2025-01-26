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
