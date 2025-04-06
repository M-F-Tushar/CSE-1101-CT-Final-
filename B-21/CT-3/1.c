1. C Program to Check Whether a Given String is a Palindrome

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        // Convert to lowercase to handle case-insensitive comparison
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;  // Not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Read input string

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
Explanation
The isPalindrome() function compares characters from both ends of the string.

It ignores case differences using tolower().

The main() function reads user input and calls isPalindrome().

Output whether the string is a palindrome.

Example Runs
csharp
Copy
Edit
Enter a string: madam
The string is a palindrome.

Enter a string: Hello
The string is not a palindrome.
