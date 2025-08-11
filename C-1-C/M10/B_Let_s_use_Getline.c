#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001]; // 1e6 + 1 for null terminator
    // fgets(s, sizeof(s), stdin); // Read the entire line
    gets(s);

    // module - shown
    for (int i = 0; s[i] != '\\'; i++)
    {
        // putchar(s[i]);
        printf("%c", s[i]);
    }

    // my code
    // for (int i = 0; s[i] != '\0'; i++)
    // for (int i = 0; i < strlen(s); i++)
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i] == '\\') // Escape backslash
        {
            break;
        }
        // putchar(s[i]); // Print character by character
        printf("%c", s[i]);
    }

    return 0;
}
