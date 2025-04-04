/*1. Check if a Given Integer is a Palindrome
Explanation:
A number is a palindrome if it reads the same forward and backward (e.g., 121 is a palindrome, but 123 is not).
Steps:

Take the number as input.

Reverse the number.

Compare the reversed number with the original.

Print "Palindrome" if they are the same, otherwise print "Not Palindrome".
*/
#include <stdio.h>

void checkPalindrome(int n) {
    int original = n, reversed = 0, remainder;

    while (n > 0) {
        remainder = n % 10;  // Extract last digit
        reversed = reversed * 10 + remainder;  // Build reversed number
        n /= 10;  // Remove last digit
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPalindrome(num);
    return 0;
}
