2. C Program to Find the Factorial of a Given Integer
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
/*
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
✅ Example Input: n = 5
We want to calculate:
5! = 5 × 4 × 3 × 2 × 1 = 120

🔢 Code Explanation (Step by Step):
int n, i;
unsigned long long factorial = 1;
n: to store the number entered by the user

i: loop counter

factorial: to store the result; set to 1 because multiplying by 1 does not change the result.

📥 Input Section:
printf("Enter a positive integer: ");
scanf("%d", &n);
User enters 5.

❗ Negative Number Check:
if (n < 0) {
    printf("Factorial is not defined for negative numbers.\n");
}
Since n = 5, we skip this part.

🔁 Loop to Calculate Factorial:
for (i = 1; i <= n; i++) {
    factorial *= i;
}
Let’s break it down iteration by iteration:

Iteration	i	factorial (before)	factorial *= i	factorial (after)
1	        1	    1	                1 * 1	        1
2	        2	    1	                1 * 2	        2
3	        3	    2	                2 * 3	        6
4	        4	    6	                6 * 4	        24
5	        5	    24	                24 * 5	        120
So the final value of factorial is 120.

🖨️ Output:
printf("Factorial of %d = %llu\n", n, factorial);
Prints:
Factorial of 5 = 120
*/
