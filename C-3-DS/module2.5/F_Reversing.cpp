#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // method 1: print reverse order
    // for (int i = N - 1; i >= 0; i--)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << endl;

    // method 2: Reversing the Array Without Printing Directly using a for loop
    // for (int start = 0, end = N - 1; start < end; ++start, --end)
    // {
    //     int temp = A[start];
    //     A[start] = A[end];
    //     A[end] = temp;
    // }

    // method 3: Reversing the Array Without Printing Directly using a while loop
    int start = 0, end = A.size() - 1;

    // Swap elements from the beginning and the end
    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < N; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}