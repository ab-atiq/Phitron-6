#include <iostream>
using namespace std;

int main()
{
    long long int n; // input value 10^9
    cin >> n;
    long long int sum = 0; // output value > 10^9

    // method 1: O(N) = 10^9
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // method 2: O(1)
    sum = n * (n + 1) / 2;
    cout << sum << endl;
    return 0;
}