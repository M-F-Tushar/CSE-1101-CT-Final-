2. a) Distinguish between ++m and m++ operators [07 Marks]
Both ++m and m++ are increment operators, but they behave differently:


Operator	        Type Meaning	                                                Returns
++m	Pre-increment	Increments the value of m before using it in the expression	    New value of m
m++	Post-increment	Uses the value of m in the expression before incrementing it	Original value of m
Example:
int m = 5;
int a = ++m; // m becomes 6, then a = 6
int b = m++; // b = 6, then m becomes 7

2. b) Which of the following are invalid variable names and why? [16 Marks]
i) minimum ✅ Valid
All lowercase, starts with a letter, no special characters.

ii) first.name ❌ Invalid
Dot (.) is not allowed in variable names in C.

iii) 2num_2 ❌ Invalid
Cannot start with a digit. Starts with 2.

iv) @name ❌ Invalid
@ is a special character, not allowed in identifiers.

v) doubles ✅ Valid
Though it resembles a keyword, it's not (e.g., double is a keyword, not doubles).

vi) int ❌ Invalid
int is a reserved keyword in C.

vii) _no ✅ Valid
Variables can start with an underscore.

viii) float ❌ Invalid
float is a reserved keyword in C.

2. c) Show the output of the following program: [12 Marks]

#include <stdio.h>
int main()
{
    int a = 60, b = 9, c = 3;
    printf("a>>1 = %d\n", (a >> c));
    printf("b<<1 = %d", (b << c));
    return 0;
}
Let’s evaluate it step by step:

Variables:
a = 60, b = 9, c = 3

First line:
a >> c // Right shift 60 by 3 bits
60 in binary: 0011 1100

Shifting right by 3 bits: 0000 0111 → 7

So output: a>>1 = 7

Note: a >> c shifts a right by 3 bits (even though it says a>>1, it's actually a >> c, and c = 3).

Second line:
b << c // Left shift 9 by 3 bits
9 in binary: 0000 1001

Shifting left by 3 bits: 0100 1000 → 72

So output: b<<1 = 72

✅ Final Output:
a>>1 = 7
b<<1 = 72

/*🔹 Q2 a) Why do we need to use comments in programs? [7 Marks]
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
*/
