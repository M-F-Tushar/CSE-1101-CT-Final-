/*
1. A company insures its drivers based on their marital status, gender, and age. Write a program that determines if a driver qualifies for insurance based on the following conditions:
   - Married drivers are insured.
   - Unmarried male drivers are insured if they are over 30 years old.
   - Unmarried female drivers are insured if they are over 25 years old.
   - Otherwise, the driver is not insured.
   
   **Input Format**  
   - A single line with marital status (M or U), gender (M or F), and age (integer).  
   
   **Output Format**  
   - Print "Insured" if the driver qualifies, otherwise print "Not Insured".

   **Sample Input | Sample Output**  
   **U M 27** → **Not Insured**  
   **M M 25** → **Insured**  

Explanation:
A company insures drivers based on these conditions:

If the driver is married, they are insured.

If the driver is unmarried:

A male must be older than 30 to be insured.

A female must be older than 25 to be insured.

Otherwise, the driver is not insured.

Steps:
Read input values: Marital status (M/U), Gender (M/F), and Age.

Check conditions for insurance:

If married (M), print "Insured".

If unmarried (U):

Check if male (M) and age > 30 → "Insured".

Check if female (F) and age > 25 → "Insured".

Otherwise, print "Not Insured".

Display the result.
*/
#include <stdio.h>

int main() {
    char maritalStatus, gender;
    int age;

    printf("Enter Marital Status (M/U), Gender (M/F), Age: ");
    scanf(" %c %c %d", &maritalStatus, &gender, &age);

    if (maritalStatus == 'M') {
        printf("Insured\n");
    } else if ((gender == 'M' && age > 30) || (gender == 'F' && age > 25)) {
        printf("Insured\n");
    } else {
        printf("Not Insured\n");
    }

    return 0;
}
