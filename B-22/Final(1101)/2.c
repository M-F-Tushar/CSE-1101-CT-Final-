🔹 Q2 a) Why do we need to use comments in programs? [7 Marks]
Answer: Comments in C are used to:

Explain code logic – makes it easier for others (or yourself) to understand later.

Improve readability – separates logic into understandable parts.

Debugging aid – allows temporarily disabling code without deleting.

Documentation – helps maintainers understand the design or purpose of the code.

Example:

// This function calculates factorial
int factorial(int n) { ... }




🔹 Q2 b) Distinguish between while and do-while loops [8 Marks]
Feature                     | while Loop | do-while Loop
Condition Check             | Before executing the loop body                | After executing the loop body
Minimum Executions          | 0 times (may not run at all)                  | At least 1 time (runs once before check)
Syntax                      | while (condition) { ... }                     | do { ... } while (condition);
Use Case                    | When the condition must be true to run        | When the loop must run at least once
Control Type                | Entry-controlled loop                         | Exit-controlled loop
Semicolon After Condition   | ❌ Not required                               | ✅ Required (while (...);)
Common Use                  | Input validation, reading until condition     | Menu-driven programs, retry mechanisms
Example:

// while
int i = 5;
while(i < 5) {
    printf("While\n"); // Won't execute
    i++;
}

// do-while
int j = 5;
do {
    printf("Do-While\n"); // Will execute once
    j++;
} while(j < 5);



🔹 Q2 c) Program for piecewise function using if-statement [10 Marks]
Function:
𝑦={ 1   for 𝑥<0
    0   for 𝑥=0
    −1  for 𝑥>0
    }

✅ Code:


#include <stdio.h>
int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    if (x < 0)
        y = 1;
    else if (x == 0)
        y = 0;
    else
        y = -1;

    printf("y = %d\n", y);

    return 0;
}



🔹 Q2 d) Identify errors in array declaration statements [10 Marks]
Let's analyze each:

int score [100]; – ✅ Valid

float values [10,15]; – ❌ Invalid, comma not allowed. Use single size: float values[10];

char name[15]; – ✅ Valid

float average[5],12; – ❌ Invalid, 12 is not valid syntax. Should be: float average[5];

double salary[1+4]; – ✅ Valid, expressions allowed in array size.
