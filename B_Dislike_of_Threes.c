#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int k;
        scanf("%d", &k);

        int cnt = 0;
        int num = 0;

        while (cnt < k)
        {
            num++;
            if ((num % 3 != 0) && (num % 10 != 3))
            {
                cnt++;
            }
        }

        printf("%d\n", num);
    }

    return 0;
}
