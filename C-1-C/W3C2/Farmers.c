#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        double m1, m2, d;
        scanf("%lf %lf %lf", &m1, &m2, &d);
        double result = d * m1 / (m1 + m2);
        // printf("%lf %lf\n", d, result);
        double dif = d - result;
        if (dif < 0)
        {
            dif = dif * -1;
        }

        if (dif - (int)dif == 0)
            printf("%d\n", (int)dif);
        else
            printf("%d\n", (int)dif + 1);
    }

    return 0;
}