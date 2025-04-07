2. C Program to Check if a Number is Prime Using Recursion

#include <stdio.h>

// Function to check if a number is prime using recursion
int isPrime(int n, int i) {
    // Base case: if n is less than 2, it's not a prime
    if (n <= 1) {
        return 0;
    }
    // Base case: if we've reached i = n (i.e., checked all divisors up to n-1)
    if (i == n) {
        return 1; // n is prime
    }
    // If n is divisible by i, it's not prime
    if (n % i == 0) {
        return 0; // n is not prime
    }
    // Recursive call with i incremented by 1
    return isPrime(n, i + 1);
}

int main() {
    int num;
    
    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the recursive function starting with i = 2
    if (isPrime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

/*
Explanation:
Function isPrime(n, i):

This function checks if a number n is prime by recursively checking if it is divisible by any number from i to n-1.

The base case checks if n is less than or equal to 1 (not prime) and returns 0.

If n % i == 0, that means n is divisible by i, so it returns 0 (not prime).

If no divisors are found, the function calls itself with i + 1 until i equals n, at which point it returns 1, meaning n is prime.

Main function:

The program takes a number num as input from the user.

It calls the isPrime(num, 2) function. The second argument i starts at 2 because we only need to check divisibility from 2 onwards (checking against 1 is unnecessary).

How the Recursion Works:
Let’s say you input 11:

First call: isPrime(11, 2) → checks if 11 % 2 == 0, it's not, so calls isPrime(11, 3).

Second call: isPrime(11, 3) → checks if 11 % 3 == 0, it's not, so calls isPrime(11, 4).

Third call: isPrime(11, 4) → checks if 11 % 4 == 0, it's not, so calls isPrime(11, 5).

Continue this process until i == 11.

At this point, since no divisor was found, isPrime(11, 11) returns 1, indicating that 11 is prime.
    
Sample Input and Output:
Example 1:
Enter a number: 11
11 is a prime number.
Example 2:
Enter a number: 12
12 is not a prime number.
*/
