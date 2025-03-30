3. C Program to Count Vowels and Consonants in a String

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to count vowels and consonants
void countVowelsConsonants(char str[], int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase

        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count vowels and consonants
    countVowelsConsonants(str, &vowels, &consonants);

    // Print result
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}
Sample Output

Enter a string: Hello World
Vowels: 3
Consonants: 7
