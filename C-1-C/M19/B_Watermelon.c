#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);

    if (w % 2 == 0 && w > 2)
    {
        printf("YES\n"); // w জোড় এবং 2 এর চেয়ে বড় হলে YES প্রিন্ট করি 
    }
    else
    {
        printf("NO\n"); // নাহলে NO প্রিন্ট করি
    }

    return 0;
}