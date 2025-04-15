/* #include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'z')
    {
        // printf("a"); // format string deserve string so we have give character as string. Like, "a"
        printf("%c", 'a');
    }
    else
    {
        printf("%c", c + 1);
    }
    return 0;
} */

#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    char nextChar = (c - 'a' + 1) % 26 + 'a';
    printf("%c\n", nextChar);
    return 0;
}

/*
Step 1: c - 'a' converts the character c to a 0-based index (e.g., 'a' → 0, 'b' → 1, ..., 'z' → 25).

Step 2: + 1 moves to the next position in the alphabet.

Step 3: % 26 ensures that after 'z' (25 + 1 = 26), it wraps around to 0 (which represents 'a').

Step 4: + 'a' converts the index back to the ASCII value of the resulting character.

Step 5: printf("%c\n", next) prints the next character.
*/
