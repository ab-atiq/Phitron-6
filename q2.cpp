#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator
bool customComparator(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second; // Sort by second element in descending order
    }
    return a.first < b.first; // Sort by first element in ascending order
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {1, 3}, {2, 2}, {2, 1}, {3, 3}};

    // Sort the vector using the custom comparator
    sort(v.begin(), v.end(), customComparator);

    // Print the sorted vector
    for (const auto &p : v)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}