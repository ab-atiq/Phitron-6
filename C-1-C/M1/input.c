#include <stdio.h>

int main()
{
    int num;
    printf("%d", num); // garbage value

    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
