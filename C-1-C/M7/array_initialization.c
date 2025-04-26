#include <stdio.h>
int main()
{
    int x = 4; // declare and initialize
    int ar[10]; // 10 garbage value store
    int arr[5] = {1, 2, 3, 4, 5}; // array declaration and initialization
    int arr2[] = {10,20,30,40}; // automatically size declare
    int arr3[5] = {10,20}; // other index value make as 0. like {10, 20, 0, 0, 0}
    int arr4[10] = {0}; // all value make 0
    int n;
    int arr5[n] = {0}; // we can not make all value 0 using Variable Length of Array
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}