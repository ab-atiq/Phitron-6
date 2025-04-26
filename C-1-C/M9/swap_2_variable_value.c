#include <stdio.h>

int main()
{
    int a = 5, b = 10, temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a; // Step 1: a-এর মান temp-এ সংরক্ষণ করুন
    a = b;    // Step 2: b-এর মান a-তে বসান
    b = temp; // Step 3: temp-এর মান b-তে বসান

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
