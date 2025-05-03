#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char number[N + 1]; // +1 for the null terminator
    scanf("%s", number);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += number[i] - '0';
    }

    if (sum % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}