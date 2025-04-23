#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    // gets(s); // get full line string
    scanf("%s",s); // input string 

    int sum = 0, i = 0;
    while (s[i] != '\0')
    {
        // int val = s[i] - 48; // 0-9 ascii to int value
        int val = s[i] - '0'; // 0-9 ascii to int value
        sum += val;
        i++;
    }
    printf("%d", sum);

    return 0;
}