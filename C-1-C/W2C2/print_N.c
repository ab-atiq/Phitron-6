#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*
input1:
5
output2:
1 2 3 4 5

input2:
-5
output2:
-5 -4 -3 -2 -1 0

input2:
0
output2:
0
*/