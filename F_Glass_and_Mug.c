#include <stdio.h>
int main()
{
    int k, g, m;
    scanf("%d %d %d", &k, &g, &m);
    int glass = 0, mug = 0;
    for (int i = 0; i < k; i++)
    {
        if (glass == g)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = m;
        }
        else
        {
            int fill = g - glass;
            if (fill > mug)
            {
                glass += mug;
                mug = 0;
            }
            else
            {
                glass = g;
                mug -= fill;
            }
        }
    }
    printf("%d %d\n", glass, mug);
    return 0;
}