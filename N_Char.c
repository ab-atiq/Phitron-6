#include <stdio.h>
int main()
{
    int x = 654.321;
    printf("%d", x++ + ++x);
    return 0;
}

#include <stdio.h>
int main()
{
    int a = 3, b = 5;
    printf("%d", a++ + b);
    return 0;
}