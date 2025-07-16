#include <stdio.h>
#include <conio.h>
int main ()
{
 // declare integer variables
int x, y, z, a, b, c;
printf (" Input the value of X: ");
scanf (" %d", &x);
printf (" Input the value of Y: ");
scanf (" %d", &y);
printf (" Input the value of Z: ");
scanf (" %d", &z);
// use post-decrement operator to update the value by 1
a = --x;
b = --y;
c = --z;

printf (" \n The original value of a: %d", a);
printf (" \n The original value of b: %d", b);
printf (" \n The original value of c: %d", c);

printf (" \n\n The updated value of the X: %d ", x);
printf (" \n The updated value of the Y: %d ", y);
printf (" \n The updated value of the Z: %d ", z);
return 0;
}
