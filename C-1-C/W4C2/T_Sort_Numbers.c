// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

/* #include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min_v, mid_v, max_v;

    // Determine the minimum value
    if (a <= b && a <= c)
    {
        min_v = a;
        if (b <= c)
        {
            mid_v = b;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = b;
        }
    }
    else if (b <= a && b <= c)
    {
        min_v = b;
        if (a <= c)
        {
            mid_v = a;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = a;
        }
    }
    else
    {
        min_v = c;
        if (a <= b)
        {
            mid_v = a;
            max_v = b;
        }
        else
        {
            mid_v = b;
            max_v = a;
        }
    }

    // Print the minimum, middle, and maximum values
    printf("%d\n%d\n%d\n\n", min_v, mid_v, max_v);
    // original a, b, c value print
    printf("%d\n%d\n%d", a, b, c);

    return 0;
} */

/*
3 -2 1
output:
-2
1
3

3
-2
1

*/

/* #include <stdio.h>

// method 1: no return, no parameter
void sort_numbers()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min_v, mid_v, max_v;

    // Determine the minimum value
    if (a <= b && a <= c)
    {
        min_v = a;
        if (b <= c)
        {
            mid_v = b;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = b;
        }
    }
    else if (b <= a && b <= c)
    {
        min_v = b;
        if (a <= c)
        {
            mid_v = a;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = a;
        }
    }
    else
    {
        min_v = c;
        if (a <= b)
        {
            mid_v = a;
            max_v = b;
        }
        else
        {
            mid_v = b;
            max_v = a;
        }
    }

    // Print the minimum, middle, and maximum values
    printf("%d\n%d\n%d\n\n", min_v, mid_v, max_v);
    // original a, b, c value print
    printf("%d\n%d\n%d", a, b, c);
}

int main()
{
    // method 1: no return, no parameter
    sort_numbers();
    return 0;
} */

/* #include <stdio.h>

// method 2: no return, parameter
void sort_numbers(int a, int b, int c)
{
    int min_v, mid_v, max_v;

    // Determine the minimum value
    if (a <= b && a <= c)
    {
        min_v = a;
        if (b <= c)
        {
            mid_v = b;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = b;
        }
    }
    else if (b <= a && b <= c)
    {
        min_v = b;
        if (a <= c)
        {
            mid_v = a;
            max_v = c;
        }
        else
        {
            mid_v = c;
            max_v = a;
        }
    }
    else
    {
        min_v = c;
        if (a <= b)
        {
            mid_v = a;
            max_v = b;
        }
        else
        {
            mid_v = b;
            max_v = a;
        }
    }

    // Print the minimum, middle, and maximum values
    printf("%d\n%d\n%d\n\n", min_v, mid_v, max_v);
    // original a, b, c value print
    printf("%d\n%d\n%d", a, b, c);
}

int main()
{
    // method 2: no return, parameter
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort_numbers(a, b, c);
    return 0;
} */

#include <stdio.h>

// method 3: no multiple value return possible so modify value in main from sort_numbers function using pointer
void sort_numbers(int a, int b, int c, int *min_v, int *mid_v, int *max_v)
{

    // Determine the minimum value
    if (a <= b && a <= c)
    {
        *min_v = a;
        if (b <= c)
        {
            *mid_v = b;
            *max_v = c;
        }
        else
        {
            *mid_v = c;
            *max_v = b;
        }
    }
    else if (b <= a && b <= c)
    {
        *min_v = b;
        if (a <= c)
        {
            *mid_v = a;
            *max_v = c;
        }
        else
        {
            *mid_v = c;
            *max_v = a;
        }
    }
    else
    {
        *min_v = c;
        if (a <= b)
        {
            *mid_v = a;
            *max_v = b;
        }
        else
        {
            *mid_v = b;
            *max_v = a;
        }
    }
}

int main()
{
    // method 3: no multiple value return possible so modify value in main from sort_numbers function using pointer
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min_v, mid_v, max_v;
    sort_numbers(a, b, c, &min_v, &mid_v, &max_v);

    // Print the minimum, middle, and maximum values
    printf("%d\n%d\n%d\n\n", min_v, mid_v, max_v);
    // original a, b, c value print
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}

// new approach
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a, mid = b, max = c;
    if (min > mid)
    {
        int temp = min;
        min = mid;
        mid = temp;
    }
    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    if (mid > max)
    {
        int temp = mid;
        mid = max;
        max = temp;
    }
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}

// another approach
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a, mid = a, max = a;
    // min find and fixed
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    // max find and fixed
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    // mid find and fixed
    int sum_a_b_c = a + b + c;
    mid = sum_a_b_c - min - max;
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}