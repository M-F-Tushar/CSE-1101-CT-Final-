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
/*
💡 Step-by-Step Execution (Input: madam)

Step 1: User inputs
str = "madam"

Step 2: Length of the string
length = strlen("madam") = 5
    
Step 3: Loop runs from i = 0 to i < length / 2 → i.e., i = 0 to 2

🔁 Iteration Table
Iteration	i	str[i]	str[length - i - 1]	    Comparison	    Result So Far
1	        0	'm'	       'm' (5 - 0 - 1 = 4)	'm' == 'm'	    OK
2	        1	'a'	        'a' (5 - 1 - 1 = 3)	'a' == 'a'	    OK
3	        2	'd'	        'd' (5 - 2 - 1 = 2)	'd' == 'd'	    OK
Since all characters match from both ends, we never enter the if block, so:
isPalindrome = 1
✅ Final Output:

'madam' is a palindrome.
*/
