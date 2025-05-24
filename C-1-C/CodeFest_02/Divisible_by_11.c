#include <stdio.h>
#include <string.h>
int main()
{
    char str[102];
    scanf("%s", str);

    int odd_sum = 0, even_sum = 0;
    int len = strlen(str);

    // string check from reverse
    for (int i = len - 1; i >= 0; i--)
    {
        // len - 1 - i is index from last
        if ((len - 1 - i) % 2 == 0)
        {
            even_sum += str[i] - '0';
        }
        else
        {
            odd_sum += str[i] - '0';
        }
    }
    
    int diff = even_sum - odd_sum;
    if (diff % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}