1. C Program to Check Whether a Given String is a Palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("'%s' is a palindrome.\n", str);
    else
        printf("'%s' is not a palindrome.\n", str);

    return 0;
}

