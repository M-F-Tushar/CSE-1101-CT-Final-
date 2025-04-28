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
