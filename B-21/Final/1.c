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

int main() {
    int num, reversed = 0, original, digit;
    
    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num; // Store original number
    
    // Reverse the number
    while (num > 0) {
        digit = num % 10; // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num = num / 10; // Remove last digit
    }
    
    // Check if original and reversed numbers are the same
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
