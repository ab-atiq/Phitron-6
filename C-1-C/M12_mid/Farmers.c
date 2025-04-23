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

/*
#include <stdio.h>
#include <math.h>

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        double m1, m2, d;
        scanf("%lf %lf %lf", &m1, &m2, &d);
        double result = d * m1 / (m1 + m2);
        double dif = d - result;
        printf("%d\n", (int)dif); // not work
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_work = M1 * D;
        int new_farmers = M1 + M2;
        int new_days = total_work / new_farmers;

        // Adjust for cases where total_work is not perfectly divisible by new_farmers
        // if (total_work % new_farmers != 0) {
        //     new_days = total_work / new_farmers; // without this also work
        // }

        int fewer_days = D - new_days;
        printf("%d\n", fewer_days);
    }

    return 0;
}
*/