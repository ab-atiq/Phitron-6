#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &x : v)
    {
        cin >> x;
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
/*
input
5
1 2 3 4 5

output
1 2 3 4 5
*/