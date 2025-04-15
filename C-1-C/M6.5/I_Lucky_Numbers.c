#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first_dig = n / 10;
    int last_dig = n % 10;
    // if ((first_dig == 0 || last_dig == 0)) // this problem first digit never will be 0. so, does not need first digit.
    if ((last_dig == 0))
    {
        printf("YES"); // n%0 will not work
    }
    else if ((first_dig % last_dig == 0 || last_dig % first_dig == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

/* #include <stdio.h>
int main()
{
    int a = 10 % 1;
    printf("%d", a);
    return 0;
} */