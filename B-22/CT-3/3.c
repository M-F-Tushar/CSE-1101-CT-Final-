//3.C Program to Count Vowels and Consonants in a String 

#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Taking input string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Using scanf to read the whole line (including spaces)

    // Loop through each character of the string
    while (str[i] != '\0') {
        char ch = tolower(str[i]); // Convert character to lowercase

        // Check if the character is a letter
        if (ch >= 'a' && ch <= 'z') {
            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++; // Move to next character
    }

    // Display the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
/*
Code Explanation:
1. Taking User Input:
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
printf("Enter a string: ");:

This is a simple output statement that asks the user to enter a string.

It displays the message: "Enter a string: " in the console.

fgets(str, sizeof(str), stdin);:

fgets() is used to read a string (including spaces) from the user.

fgets() takes three arguments:

The first argument is the name of the array where the input string will be stored (str in this case).

The second argument is the maximum number of characters to read (sizeof(str)). This ensures that we don't exceed the buffer size of the array str.

The third argument (stdin) specifies that the input will come from the standard input (keyboard).

Why use fgets?

The fgets() function is used instead of scanf("%s", str) because scanf stops reading when it encounters a space. So, if you use scanf("%s", str) and enter a multi-word string (like "Hello World"), it will only capture "Hello" and ignore "World".

On the other hand, fgets() captures the whole line including spaces until the Enter key is pressed.

Example:

If you enter "Hello World", fgets() will store "Hello World" in the str array.

2. Loop Through Each Character of the String:
while (str[i] != '\0') {
    char ch = tolower(str[i]);
    // Rest of the code...
}
while (str[i] != '\0'):

This is a while loop that will iterate through each character in the string.

str[i] is accessing each character in the string str by index i.

The loop continues until it encounters the null character \0, which marks the end of a string in C.

For Example:

If the string is "Hello", the characters in the string are:

str[0] = 'H'

str[1] = 'e'

str[2] = 'l'

str[3] = 'l'

str[4] = 'o'

str[5] = '\0' (the null terminator)

The loop will stop when str[i] == '\0'.

3. Convert Character to Lowercase:
char ch = tolower(str[i]);
tolower(str[i]):

This function is used to convert a character to lowercase.

If str[i] is an uppercase letter (like 'A'), it will be converted to its lowercase equivalent ('a').

If str[i] is already a lowercase letter or a non-alphabetic character (like a space, punctuation, or number), it will remain unchanged.

Why do we use tolower()?

To handle both uppercase and lowercase letters uniformly.

For example, both 'A' and 'a' are considered vowels, so by converting everything to lowercase, we can simplify the checks.

Example:

If str[i] = 'A', then ch = tolower('A') would become 'a'.

Full Example with Explanation:
Let's break down the complete flow using an example input of "Hello World":

Input from the user:

Enter a string: Hello World
The program will store this string in the str array.

Loop through the string:

First iteration (i = 0):

str[0] = 'H', so we convert it to lowercase:

char ch = tolower('H'); // ch = 'h'
Now, ch = 'h', and we can check if it's a vowel or consonant.

Second iteration (i = 1):

str[1] = 'e', so ch = 'e'.

It's a vowel, so the vowel counter will increase.

Third iteration (i = 2):

str[2] = 'l', so ch = 'l'.

It's a consonant, so the consonant counter will increase.

And this process continues for each character in the string.
*/
