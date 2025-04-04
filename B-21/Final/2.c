2. Print Fibonacci Series up to N Terms
Explanation:
The Fibonacci series starts with 0 and 1, and each subsequent number is the sum of the previous two (e.g., 0, 1, 1, 2, 3, 5,...).
Steps:

Take input for n (the number of terms).

Use a loop to generate the Fibonacci sequence.

Print the sequence.

#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d, %d", a, b);

    for (int i = 2; i < n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter a number greater than or equal to 2\n");
    } else {
        printFibonacci(n);
    }
    return 0;
}
