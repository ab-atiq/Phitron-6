#include <stdio.h>

int sub(int a, int b); // Function declaration

int sum(int a, int b) // parameter of function
{
    int ans = a + b;
    return ans; // return from function
}

int main()
{
    int res = sum(10, 20);
    int res2 = sum(130, 660);
    int res3 = sub(10, 20);
    int res4 = sub(130, 660);

    printf("%d %d %d %d\n", res, res2, res3, res4);
    return 0;
}

// Function definition
int sub(int a, int b)
{
    int ans = a - b;
    return ans;
}