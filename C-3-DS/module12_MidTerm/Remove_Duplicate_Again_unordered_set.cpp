#include <iostream>
#include <unordered_set>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> result;
    unordered_set<int> unique_numbers;
    int n;
    while (cin >> n && n != -1)
    {
        if (unique_numbers.find(n) == unique_numbers.end())
        {
            unique_numbers.insert(n);
            result.push_back(n);
        }
    }
    result.sort();
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}