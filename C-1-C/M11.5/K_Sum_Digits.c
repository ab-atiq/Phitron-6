// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    // char s[1000001]; // 1e6 for characters + 1 for null terminator
    char s[n + 1];  // Dynamic size based on input n
    scanf("%s", s); // &s is not needed for char array

    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0'; // Convert char to int by subtracting '0'
    }
    printf("%d\n", sum);
    return 0;
}