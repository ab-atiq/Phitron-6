#include <stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int cnt = rec(s, i + 1);
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = rec(s, 0);
    printf("%d", ans);

    return 0;
}

/*
input:
Data Structure Lab
output:
6

input:
hello
output:
2

input:
helloworld
output:
3
*/

// method 2 - recursion
/* #include <stdio.h>
int cnt_vowels = 0;
void countVowels(char s[], int i)
{
    if (s[i] == '\0')
    {
        return;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        cnt_vowels++;
    }
    countVowels(s, i + 1);
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    countVowels(s, 0);
    printf("%d", cnt_vowels);

    return 0;
} */
