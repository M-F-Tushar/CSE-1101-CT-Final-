2. C Program to Check if a Number is Prime Using Recursion
c
Copy
Edit
#include <stdio.h>

// Recursive function to check prime number
int isPrime(int num, int divisor) {
    if (num <= 1) return 0;   // 0 and 1 are not prime
    if (divisor == 1) return 1; // Prime if no divisor found
    if (num % divisor == 0) return 0; // Not prime if divisible

    return isPrime(num, divisor - 1); // Check next divisor
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check prime status using recursion
    if (isPrime(num, num / 2))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
Sample Output
less
Copy
Edit
Enter a number: 11
11 is a prime number.
less
Copy
Edit
Enter a number: 12
12 is not a prime number.
