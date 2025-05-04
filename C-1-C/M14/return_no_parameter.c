#include <stdio.h>

int sum()
{
    int a, b;
    a = 10, b = 20;
    // scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;
}

int main()
{
    int ans = sum();
    printf("%d\n", ans);
    int ans2 = sum();
    printf("%d", ans2);

    return 0;
}