🔹 Q1 a) Why is C programming language called structured programming language?
✅ Breaks programs into functions: Large programs are divided into smaller, manageable functions.

✅ Top-down approach: Main problem is solved first, then divided into smaller sub-problems.

✅ Use of control structures: Uses if-else, switch, for, while, do-while for controlling flow logically.

✅ Avoids "goto" based flow: Reduces use of unstructured "goto" statements that make code messy.

✅ Modularity: Each function or module handles a specific task, making code organized.

✅ Better readability and maintenance: Structured programs are easier to read, debug, and update.

✅ Encourages reusability: Functions can be reused across different parts of the program.

✅ Improves reliability: Structured programming helps write correct and bug-free programs.
/*
a) Distinguish between compiler and interpreter [9 Marks]
Feature         | Compiler                                                                     | Interpreter
Execution       | Translates the whole program at once into machine code before execution.     | Translates line-by-line or statement-by-statement and executes immediately.
Speed           | Faster after compilation (because the code is already translated).           | Slower, as it translates and runs code simultaneously.
Error Detection | Shows all errors after the whole program is compiled.                        | Shows errors one at a time as it runs the code.
Output          | Generates a separate executable file (.exe, .out, etc.).                     | Does not create a separate executable.
Examples        | C, C++, Rust, Go                                                             | Python, JavaScript, Ruby
Memory Usage    | Generally higher during compilation but efficient at runtime.                | Typically uses more memory at runtime due to line-by-line execution.
*/


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
      
/*
Identify invalid variable names and explain why [12 Marks]
Student#ID – ❌ Invalid: # is not allowed in variable names.

first.name – ❌ Invalid: . is used for structure member access.

2num_2 – ❌ Invalid: Cannot start with a digit.

Computer science – ❌ Invalid: Cannot contain space.

Doubles – ✅ Valid (but shouldn’t be a keyword; here it's fine).

Char_name – ✅ Valid.
*/



🔹 Q1 c) Show the output of the following program [14 Marks]

#include <stdio.h>
int main() {
    int i = -1, j = -1, k = 2, l = 5, m;
    m = ++i && ++j || k++ && l++;
    printf("%d %d %d %d %d %d", i, j, k, l, m);
    return 0;
}
➤ Step-by-step:
Part 1: ++i && ++j
++i → i = 0 → result = 0 (false)

Since ++i is 0, && short-circuits → ++j is NOT evaluated.

So:
i = 0
j = -1 (unchanged)

Part 2: k++ && l++
Because the first part (++i && ++j) is false, the second part must be evaluated due to the ||.
k++ → returns 2 (true), then k = 3
Since k++ is true, l++ is evaluated → returns 5, then l = 6

So:
k = 3
l = 6
    
Expression becomes:

0 || (2 && 5) → 0 || 1 → 1
So m = 1

Final values:
i = 0   // incremented
j = -1  // not evaluated due to short-circuit
k = 3   // post-incremented
l = 6   // post-incremented
m = 1   // result of expression
✅ Correct Output:
0 -1 3 6 1
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
