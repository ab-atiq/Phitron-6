/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://www.hackerrank.com/contests/phitron-codefest-01-a-batch-08/challenges/merge-by-index

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1005], s2[1005];
    scanf("%s %s", s1, s2);
    int len = strlen(s2);
    int start, end;
    scanf("%d %d", &start, &end);
    printf("%s", s1);
    for (int i = start; i <= end && i<len; i++)
    {
        printf("%c", s2[i]);
    }
    printf("\n");
    return 0;
}