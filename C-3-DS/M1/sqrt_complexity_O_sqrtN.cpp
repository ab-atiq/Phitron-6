#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // time complexity O(sqrt(n))
    // This code prints all pairs of factors of n
    // For example, if n = 36, it will print: 1 36 2 18 3 12 4 9 6 6
    // Note: The pairs are printed in ascending order of the first element and descending order of the second element.
    
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}