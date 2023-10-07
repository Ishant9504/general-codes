
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[] = "madam";

    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
