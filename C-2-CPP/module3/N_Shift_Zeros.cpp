#include <iostream>
using namespace std;
void shiftZero(int arr[], int n)
{
    int idx = 0;
    // shift all non zero left
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[idx] = arr[i];
            idx++;
        }
    }
    // remaining array index fillup with 0
    while (idx < n)
    {
        arr[idx] = 0;
        idx++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    shiftZero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}