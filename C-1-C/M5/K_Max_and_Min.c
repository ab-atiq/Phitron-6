
// MODULE
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);

    // minimum
    if(a <= b && a <= c)
    {
        printf("%d ",a);
    }
    else if(b <= a && b <= c)
    {
        printf("%d ",b);
    }
    else if(c <= a && c <= b)
    {
        printf("%d ",c);
    }

    // maximum
    if(a >= b && a >= c)
    {
        printf("%d",a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d",b);
    }
    else if(c >= a && c >= b)
    {
        printf("%d",c);
    }
    return 0;
}

// MY SOLUTION

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min_v, max_v;
    if (a >= b && a >= c)
        max_v = a;
    else if (b >= a && b >= c)
        max_v = b;
    else
        max_v = c;

    if (a <= b && a <= c)
        min_v = a;
    else if (b <= a && b <= c)
        min_v = b;
    else
        min_v = c;

    printf("%d %d", min_v, max_v);
    return 0;
}