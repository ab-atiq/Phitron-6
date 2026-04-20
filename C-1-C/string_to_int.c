/* 
Which method should you choose?
atoi(): Use for simple, non-critical conversions where you are certain the input is a valid integer string. It is the quickest to write.
sscanf(): A good middle-ground option that is safer and more flexible than atoi().
Manual loop: The best choice for robust, production-level code that requires specific error handling for invalid input or potential overflow. 
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    int number = atoi(str);

    printf("The character array \"%s\" converted to an integer is: %d\n", str, number);
    return 0;
}


#include <stdio.h>

int main()
{
    char str[] = "98765";
    int number;

    // Check if exactly one item (%d) was successfully converted
    if (sscanf(str, "%d", &number) == 1)
    {
        printf("The character array \"%s\" converted to an integer is: %d\n", str, number);
    }
    else
    {
        printf("Conversion failed.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int custom_atoi(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle optional sign
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    // Loop through each digit character
    for (; str[i] != '\0'; i++) {
        // Check if the character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Error handling for non-digit characters
            return 0; // Or handle the error differently
        }
    }
    
    return sign * result;
}

int main() {
    char str[] = "-123";
    int number = custom_atoi(str);
    
    printf("The character array \"%s\" converted to an integer is: %d\n", str, number);
    return 0;
}
