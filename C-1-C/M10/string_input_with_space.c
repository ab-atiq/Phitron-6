#include <stdio.h>
int main()
{
    char str[5]; // 4 char + 1 null character
    // gets(str);            // take input with space A T I Q U R. if enter button pressed then it will stop.
    fgets(str, 5, stdin); // take input with space A T I Q U R. if enter button pressed then it will stop. but, it will store enter key in str.
    printf("%s", str);    // A T I Q U R
    return 0;
}

/*
যদি স্ট্রিং ইনপুট এর মধ্যে স্পেস না থাকে তাহলে - scanf("%s", &str);

যদি স্ট্রিং ইনপুটে স্পেস থাকে কিন্তু enter বা নিউ লাইন নিতে না চান তাহলে - gets(str);

যদি স্ট্রিং ইনপুটে স্পেস থাকে এবং enter বা নিউ লাইন নিতে চান তাহলে - fgets(str, sizeof(str), stdin);
*/