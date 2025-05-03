#include <stdio.h>
int main()
{
    int init, given, bought;
    scanf("%d %d %d", &init, &given, &bought);
    int result = init - given + bought;
    printf("%d", result);

    return 0;
}