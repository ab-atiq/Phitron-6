#include <bits/stdc++.h>
using namespace std;
void print_even_indices(vector<int> &arr, int n)
{
    if (n < 0)
        return;
    if (n % 2 == 0)
        cout << arr[n] << " ";
    print_even_indices(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print_even_indices(arr, n - 1);
    return 0;
}