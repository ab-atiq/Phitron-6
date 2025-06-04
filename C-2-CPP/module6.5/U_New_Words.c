#include <stdio.h>
#include <ctype.h> // For toupper function

int main()
{
    char ch;
    int e = 0, g = 0, y = 0, p = 0, t = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        ch = toupper(ch); // Convert to uppercase
        if (ch == 'E')
            e++;
        else if (ch == 'G')
            g++;
        else if (ch == 'Y')
            y++;
        else if (ch == 'P')
            p++;
        else if (ch == 'T')
            t++;
    }

    // Find the minimum count among needed letters
    int min = e;
    if (g < min)
        min = g;
    if (y < min)
        min = y;
    if (p < min)
        min = p;
    if (t < min)
        min = t;

    printf("%d\n", min);
    return 0;
}
