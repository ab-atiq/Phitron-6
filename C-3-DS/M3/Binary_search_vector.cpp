#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    int target;
    cin >> target;

    // sort vector first
    sort(v.begin(), v.end());

    // Binary search
    int left = 0, right = v.size() - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v[mid] == target)
        {
            found = true;
            break;
        }
        else if (v[mid] > target)
        {
            right = mid - 1; // divide 2 part then 1 part consider
        }
        else
        {
            left = mid + 1; // divide 2 part then 1 part consider
        }
    }
    
    if (found)
    {
        cout << "Found " << target << " in vector" << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }
    return 0;
}