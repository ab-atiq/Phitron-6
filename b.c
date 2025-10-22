#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1001];
    scanf("%s", &arr);
    int i = 0, j = strlen(arr) - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            printf("NO");
            // break;
            return 0;
        }
        i++;
        j--;
    }

    printf("YES");

    return 0;
}