#include <stdio.h>
#include <stdbool.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = true;
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}