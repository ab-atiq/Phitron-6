#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int pos_sum = 0, neg_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > 0)
        {
            pos_sum += temp;
        }
        else if (temp < 0)
        {
            neg_sum += temp;
        }
    }

    printf("%d %d", pos_sum, neg_sum);

    return 0;
}