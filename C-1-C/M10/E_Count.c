#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    // gets(s); // get full line string
    scanf("%s", s); // input string

    // method - my code
    // int sum = 0, i = 0;
    // while (s[i] != '\0')
    // {
    //     // int val = s[i] - 48; // 0-9 ascii to int value
    //     int val = s[i] - '0'; // 0-9 ascii to int value
    //     sum += val;
    //     i++;
    // }

    // module code
    int sum = 0;

    // for (int i = 0; s[i] != '\0'; i++)

    int len = strlen(s); // get string length
    for (int i = 0; i < len; i++)
    {
        // int val = s[i] - '0'; // 0-9 ascii to int value
        int val = s[i] - 48; // 0-9 ascii to int value
        sum += val;
    }

    printf("%d", sum);

    return 0;
}