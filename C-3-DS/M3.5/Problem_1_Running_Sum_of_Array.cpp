#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int nums;
    cin >> nums;
    
    vector<int> arr(nums);
    for (int i = 0; i < nums; i++)
    {
        cin >> arr[i];
    }

    // prefix sum
    arr[0] = arr[0]; // not needed if we use same vector for input and output
    for (int i = 1; i < nums; i++)
    {
        arr[i] += arr[i - 1];
    }

    // print full vector
    for (int i = 0; i < nums; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}