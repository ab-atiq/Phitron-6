/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);

    char num1[50], num2[50];
    // num1 is before operator(+, -, *, /)
    int start1 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            // continue; // it will not work
            break;
        }
        num1[start1] = str[i];
        start1++;
    }
    num1[start1] = '\0';

    // num2 is after operator(+, -, *, /)
    int start2 = 0;
    for (int i = start1 + 1; i < strlen(str); i++)
    {
        num2[start2] = str[i];
        start2++;
    }
    num2[start2] = '\0';

    // printf("%s\n%s", num1, num2); // perfectly print num1 and num2

    int n1 = atoi(num1), n2 = atoi(num2);
    // printf("%d\n%d\n", n1, n2);

    int res;
    if (str[start1] == '+')
    {
        res = n1 + n2;
    }
    else if (str[start1] == '-')
    {
        res = n1 - n2;
    }
    else if (str[start1] == '*')
    {
        res = n1 * n2;
    }
    else if (str[start1] == '/')
    {
        res = n1 / n2;
    }
    printf("%d\n", res);
    return 0;
}