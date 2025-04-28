🔹 Q1 a) Why is C programming language called structured programming language?
✅ Breaks programs into functions: Large programs are divided into smaller, manageable functions.

✅ Top-down approach: Main problem is solved first, then divided into smaller sub-problems.

✅ Use of control structures: Uses if-else, switch, for, while, do-while for controlling flow logically.

✅ Avoids "goto" based flow: Reduces use of unstructured "goto" statements that make code messy.

✅ Modularity: Each function or module handles a specific task, making code organized.

✅ Better readability and maintenance: Structured programs are easier to read, debug, and update.

✅ Encourages reusability: Functions can be reused across different parts of the program.

✅ Improves reliability: Structured programming helps write correct and bug-free programs.

🔹 Q1 b) Write a program to find whether the given number is an Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main() {
    int number, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;  // or use pow(remainder, 3);
        original /= 10;
    }

    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
🔹 What is an Armstrong Number?
A number is an Armstrong number if the sum of the cubes of its digits is equal to the number itself.

Example:
153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✅
So, 153 is an Armstrong number.

🔹 Q1 c) Show the output of the following program [14 Marks]

#include <stdio.h>

int main() {
    int i = -1, j = -1, k = 2, l = 5, m;
    m = i++ && ++j || k++ && l--;
    printf("%d %d %d %d %d", i, j, k, l, m);
    return 0;
}

Expression breakdown
m = i++ && ++j || k++ && l--;
✅ Let's evaluate carefully:

(i) i++ && ++j
i++ means:

use i first (-1), then i = i + 1 → i = 0

So, i++ uses -1

-1 is true (non-zero is true in C).

Since left side (i++) is true, right side (++j) must be evaluated (because && needs both sides when left is true).

Now:

++j: pre-increment j

j = -1 + 1 = 0

So ++j = 0

Now we know:

i++ && ++j → true (-1) AND false (0) → 0 (false)

✅ Result of i++ && ++j is 0.

(ii) || part
Since i++ && ++j is false (0), we must evaluate the right side:

(k++ && l--)
k++:

use k = 2 first, then k = 3

2 is true

Since k++ is true, evaluate l--

l--:

use l = 5 first, then l = 4

5 is true

✅ So k++ && l-- is true.

(iii) Final ||
0 || 1 → 1

Thus:

m = 1


/*
🔌 What is Short-Circuiting?
Short-circuiting means the program stops evaluating an expression as soon as the final result is known.
This is an optimization technique that avoids unnecessary computations.

🔍 Two Main Operators That Use It:
1. && (Logical AND)
If the first condition is false, the entire expression is false, no need to check the second.
✅ Used when both conditions must be true.

Example:
if (x != 0 && 10 / x > 1)
If x is 0, then x != 0 is false, so the second part (10 / x > 1) is never evaluated, avoiding a divide-by-zero error.

2. || (Logical OR)
If the first condition is true, the whole expression is true, no need to check the second.
✅ Used when just one condition needs to be true.

Example:
if (a > 10 || b++ > 5)
If a > 10 is true, then b++ is not executed, so b is not incremented.

💡 Why is it useful?
Efficiency: Saves time by skipping unnecessary evaluations.
Safety: Prevents errors like dividing by zero, accessing null pointers, etc.
Control Flow: You can use it to control whether certain code runs.

*/
