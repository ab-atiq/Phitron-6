#include <stdio.h>

int main()
{
    // অ্যারেতে ডেটা সংরক্ষণ
    int numbers[5] = {10, 20, 30, 40, 50};

    // অ্যারে অ্যাক্সেস এবং প্রিন্ট
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}

/*
আউটপুট:
numbers[0] = 10
numbers[1] = 20
numbers[2] = 30
numbers[3] = 40
numbers[4] = 50
 */