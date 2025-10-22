// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include <stdio.h>
#include <string.h>

#define SIZE 10000001  // 10^7 + 1

int main() {
    char c;
    int count[26] = {0};  // Initialize all counts to 0

    // Read characters one by one until EOF or newline
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;  // Increment count for the character
        }
    }

    // Print counts in alphabetical order
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}