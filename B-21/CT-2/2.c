2. C Program to Find the Factorial of a Given Integer

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return -1;
    }

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = factorial(num);
    if (result != -1) {
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}
Explanation
Function factorial(n):

Uses a loop to multiply numbers from 1 to n.

Handles negative inputs.

Main function:

Takes user input.

Calls factorial() function.

Prints the result.

Example Runs
Enter a number: 5
Factorial of 5 is 120

Enter a number: 7
Factorial of 7 is 5040
