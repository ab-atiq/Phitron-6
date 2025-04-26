#include <stdio.h>
int main()
{
    // first array input
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // second array input
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // copy array declare with n+m size
    int c[n + m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[i + n] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

/* 
5
10 20 30 40 50
2
60 70

output: 
10 20 30 40 50 60 70
*/